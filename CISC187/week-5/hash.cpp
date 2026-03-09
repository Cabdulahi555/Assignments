//Cabdulahi Hussein
//Prof. Danish Khan
//Week-5 Hashtables
#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <random>
using namespace std;

class HashTable
{
private:
    vector<list<pair<string, int>>> table;
    int currentSize;
    int capacity;
    int collisionCount;

    int hashFunction(const string& key) const
    {
        const int prime = 31;
        long long hash = 0;
        for (int i = 0; i < (int)key.size(); i++)
        {
            char c = key[i];
            hash = hash * prime + c;
        }
        return hash % capacity;
    }

    // Dynamic rehashing when load factor exceeds 0.75
    //New capacity is next prime >= * 2 to maintain even distribution
    void rehash()
    {
        int newCapacity = capacity * 2;
        // FInd next prime num for new cap
        while (true)
        {
            bool prime = true;
            for (int i = 2; i * i <= newCapacity; i++)
            {
                if (newCapacity % i == 0)
                {
                    prime = false;
                    break;
                }
            }
            if (prime) break;
            newCapacity++;
        }

        vector<list<pair<string, int>>> newTable(newCapacity);
        int oldCapacity = capacity;
        capacity = newCapacity;
        collisionCount = 0; // reset and recont during reinsert

        //reinsert all existing keys into new table
        for (int i = 0; i < oldCapacity; i++)
        {
            for (pair<string, int>& keyval : table[i])
            {
                int idx = hashFunction(keyval.first);
                if (!newTable[idx].empty()) ++collisionCount;
                newTable[idx].push_back(keyval);
            }
        }
        table = move(newTable);
    }

public:
    // Default cap of 11
    HashTable(int size = 11)
        : table(size), currentSize(0), capacity(size), collisionCount(0) {}

    //Insert with seperate chaining. If key eists upload value
    void insert(const string& key, int value)
    {
        //rehash if load factor exceeds threshold
        if (loadFactor() > 0.75)
            rehash();

        int idx = hashFunction(key);

        //check for duplicate key, update val if found
        for (pair<string, int>& keyval : table[idx])
        {
            if (keyval.first == key)
            {
                keyval.second = value;
                return;
            }
        }

        // Non empty bucket means collision
        if (!table[idx].empty())
            ++collisionCount;

        table[idx].push_back({key, value});
        ++currentSize;
    }

    //Removeby traversing the chain at hashed index
    bool remove(const string& key)
    {
        int idx = hashFunction(key);
        for (list<pair<string, int>>::iterator it = table[idx].begin(); it != table[idx].end(); ++it)
        {
            if (it->first == key)
            {
                table[idx].erase(it);
                --currentSize;
                return true;
            }
        }
        return false;
    }

    //Search by traversing chain at hashed inex.
    //Returns -1 if key not found
    int search(const string& key) const
    {
        int idx = hashFunction(key);
        for (const pair<string, int>& keyval : table[idx])
        {
            if (keyval.first == key) return keyval.second;
        }
        return -1;
    }

    //Load factor = elements / capacity
    double loadFactor() const
    {
        return (double)currentSize / capacity;
    }

    int size() const
    {
        return currentSize;
    }

    bool isEmpty() const
    {
        return currentSize == 0;
    }

    //Print table stats for experimental analysis
    void printTable() const
    {
        //Compute max bucket size and avg bucket lenght
        int mx = 0;
        int nonEmpty = 0, total = 0;
        for (int i = 0; i < capacity; ++i)
        {
            if (!table[i].empty())
            {
                ++nonEmpty;
                total += (int)table[i].size();
                if ((int)table[i].size() > mx) mx = (int)table[i].size();
            }
        }
        double avg = nonEmpty == 0 ? 0.0 : (double)total / nonEmpty;

        cout << "\nHash Table\n-------------------\n";
        cout << "Capacity    : " << capacity       << "\n";
        cout << "Elements    : " << currentSize    << "\n";
        cout << "Load factor : " << loadFactor()   << "\n";
        cout << "Collisions  : " << collisionCount << "\n";
        cout << "Max bucket  : " << mx             << "\n";
        cout << "Avg bucket  : " << avg            << "\n";
        cout << "-------------------\n\n";
    }
};

// random string generator for test data generation
string randomString(int len)
{
    static mt19937 rng(random_device{}());
    static uniform_int_distribution<int> dist(0, 25);
    static const char alpha[] = "abcdefghijklmnopqrstuvwxyz";
    string s;
    for (int i = 0; i < len; ++i)
    {
        s += alpha[dist(rng)];
    }
    return s;
}

int main()
{
    const int N = 200;

    // Inserting 100 random strings
    HashTable ht;

    vector<string> words;
    for (int i = 0; i < 100; i++)
    {
        words.push_back(randomString(6));
    }

    for (int i = 0; i < (int)words.size(); ++i)
    {
        ht.insert(words[i], i + 1);
    }

    // Print table stats
    cout << "Test 1 -- Insert 100 Random Strings\n";
    ht.printTable();

    // Search for existing and non-existing key
    cout << "search(\"" << words[0] << "\") => " << ht.search(words[0]) << "\n";
    cout << "search(\"notinhere\") => " << (ht.search("notinhere") == -1 ? "NOT FOUND" : to_string(ht.search("notinhere"))) << "\n";

    cout << "\n";

    // Remove keys + verify correctness per instruction
    ht.remove(words[0]);
    ht.remove(words[1]);
    ht.remove(words[2]);
    cout << "remove(\"" << words[0] << "\") => " << (ht.search(words[0]) == -1 ? "removed" : "still present") << "\n";
    cout << "remove(\"" << words[1] << "\") => " << (ht.search(words[1]) == -1 ? "removed" : "still present") << "\n";
    cout << "remove(\"" << words[2] << "\") => " << (ht.search(words[2]) == -1 ? "removed" : "still present") << "\n";

    cout << "\n";

    // Verify removed keys are gone removed
    cout << "verify(\"" << words[0] << "\") => " << (ht.search(words[0]) == -1 ? "NOT FOUND (correct)" : "FOUND (error)") << "\n";
    cout << "verify(\"" << words[1] << "\") => " << (ht.search(words[1]) == -1 ? "NOT FOUND (correct)" : "FOUND (error)") << "\n";
    cout << "verify(\"" << words[2] << "\") => " << (ht.search(words[2]) == -1 ? "NOT FOUND (correct)" : "FOUND (error)") << "\n";

    cout << "\n";

    {
        HashTable htRandom;
        for (int i = 0; i < N; ++i)
        {
            htRandom.insert(randomString(8), i);
        }
        cout << "Test 2 -- Random Strings (n=200)\n";
        htRandom.printTable();
    }

    // Sequential keys
    {
        HashTable htSeq;
        for (int i = 1; i <= N; ++i)
        {
            htSeq.insert("student" + to_string(i), i);
        }
        cout << "Test 3 -- Sequential Keys (n=200)\n";
        htSeq.printTable();
    }

    //Same-prefix keys
    {
        HashTable htPrefix;
        for (int i = 1; i <= N; ++i)
        {
            string num = to_string(i);
            while ((int)num.size() < 4) num = "0" + num;
            htPrefix.insert("data_" + num, i);
        }
        cout << "Test 4 -- Same-Prefix Keys (n=200)\n";
        htPrefix.printTable();
    }

    return 0;
}
/* Final Analysis:-
    The hash table performed well across 4 of the tests. Both random and sequential keys both had a load factor of 0.50
    showing the hash table distributes evenly regardless of input type. The most interesting result however was that the same prefix tests which produced 0 collisions,
    each key had enough unique characters for the hash function to place them all in seperate buckets.*/
