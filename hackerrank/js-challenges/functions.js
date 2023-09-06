//https://www.hackerrank.com/challenges/js10-function/problem

'use strict';

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
/*
 * Create the function factorial here
 */

function factorial(n){
	let r = 1;
	for (var i = 1; i <= n; i++) r = r*i;

	return r;
}


function main() {
    const n = +(readLine());
    
    console.log(factorial(n));
}
