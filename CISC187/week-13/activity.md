# Space constraints

## Objective
How to write a space-efficient code	

## Tasks
The following exercises provide you with the opportunity to practice with space constraints.

1. Following is the 'Word Builder' algorithm. Describe its space complexity in terms of Big O.

```
function wordBuilder(array) { 
		let collection = [];
		for(let i = 0; i < array.length; i++) { 
				for(let j = 0; j < array.length; j++) {
						if (i !== j) {
								collection.push(array[i] + array[j]);
						}
				}
		}
		return collection; 
}
```
	- The function created a collection array then polupalted it with a new string for every pair i, j; For the array of N elements there are apporx. N^2 pair which means that the collection of arrays will grow about N^2 elements. The space complexity is O(N^2)
2. Following is a function that reverses an array. Describe its *space* complexity in terms of Big O:

```
function reverse(array) { 
		let newArray = [];
		for (let i = array.length - 1; i >= 0; i--) { 
				newArray.push(array[i]);
		}
		return newArray;
}
```
	- This one creates a brand new newArray and pushes every element from the original array into it. This ones complexity will be O(N).
	
3. Create a new function to reverse an array that takes up just $O(1)$ extra space.
```
function reverse(array) {
  let left = 0;
  let right = array.length - 1;
  while (left < right) {
    let temp = array[left];
    array[left] = array[right];
    array[right] = temp;
    left++;
    right--;
  }
  return array;
}
	- For this one, we simply reversed an array which was already in place. "temp" is the only extre memory used
``` 
4. Following are three different implementations of a function that accepts an array of numbers and returns an array containing those numbers multiplied by 2. For example, if the input is [5, 4, 3, 2, 1], the output will be [10, 8, 6, 4, 2].

````
function doubleArray1(array) { 
	let newArray = [];

	for(let i = 0; i < array.length; i++) { 
		newArray.push(array[i] * 2);
	}
	return newArray; 
}


function doubleArray2(array) {
	for(let i = 0; i < array.length; i++) {
  	array[i] *= 2;
  }
	return array; 
}


function doubleArray3(array, index=0) { 
	if (index >= array.length) { return; }
  array[index] *= 2;
  doubleArray3(array, index + 1);
	return array; 
}
````

Fill in the table that follows to describe the efficiency of these three versions in terms of both time and space:

| Version    | Time complexity | Space complexity |
| ---------- | --------------- | ---------------- |
| Version #1 | o(N)            | O(N)             |
| Version #2 | O(N             | O(1)             |
| Version #3 | O(N             | O(N              |

