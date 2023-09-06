//https://www.hackerrank.com/challenges/js10-let-and-const/problem

'use strict';

const PI = 3.14159265358979323846;

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
	inputString += inputStdin;
});

process.stdin.on('end', _ => {
	inputString = inputString.trim().split('\n').map(string => {
		return string.trim();
	});

	main();    
});

function readLine() {
	return inputString[currentLine++];
}

function main() {
	// Write your code here. Read input using 'readLine()' and print output using 'console.log()'.
	let r = readLine();

	console.log(r*r*PI);
	console.log(r*2*PI);

	try {    
		// Attempt to redefine the value of constant variable PI
		PI = 0;
		// Attempt to print the value of PI
		console.log(PI);
	} catch(error) {
		console.error("You correctly declared 'PI' as a constant.");
	}
}
