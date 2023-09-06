// https://www.hackerrank.com/challenges/js10-switch/problem

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

function getLetter(s) {
	if ('aeiou'.indexOf(s.charAt(0)) !== -1) return 'A';
	if ('bcdfg'.indexOf(s.charAt(0)) !== -1) return 'B';
	if ('hjklm'.indexOf(s.charAt(0)) !== -1) return 'C';
	if ('npqrstvwxyz'.indexOf(s.charAt(0)) !== -1) return 'D';
}


function main() {
	const s = readLine();

	console.log(getLetter(s));
}
