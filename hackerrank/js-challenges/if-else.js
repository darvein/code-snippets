//https://www.hackerrank.com/challenges/js10-if-else/problem

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

function getGrade(grade) {
	if (grade<= 30 && grade > 25) return('A');
	if (grade<= 25 && grade > 20) return('B');
	if (grade<= 20 && grade > 15) return('C');
	if (grade<= 15 && grade > 10) return('D');
	if (grade<= 10 && grade > 5) return('E');
	if (grade<= 5 && grade > 0) return('F');
}


function main() {
	const score = +(readLine());

	console.log(getGrade(score));
}
