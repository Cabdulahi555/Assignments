// CS211 Yoshii - String demonstration
// concatenation, length, conversion to upper and lower

#include <iostream>
#include<string>
using namespace std;

int main()
{
  string w1, w2, s;
  cout << "Enter a word:";
  cin >> w1;

  cout << "Enter a word:";
  cin >> w2;
  cin.ignore();  // getting rid of the line terminator
  cout << w1+" "+w2 << endl; // concatenated

  cout << "Enter a sentence:";
  getline(cin, s);  // read an entire line
  cout << "Length:" << s.length() << endl;

  // conversions of the firt character of s
  cout << char(toupper(s[0])) << " " << char(tolower(s[0])) << " " << int(s[0]) << endl;

  // make s all upper case
  for (int i = 0; i < s.length(); i++)
    s[i] = toupper(s[i]);
  cout << s << endl;
  
}
