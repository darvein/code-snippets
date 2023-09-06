// https://www.hackerrank.com/challenges/js10-loops/problem

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
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
	let v = [];
	let c = [];

	for (var i = 0, len = s.length; i < len; i++) {
		if (s[i].match(/[aeiou]/gi)) {
			console.log(s[i]);
			v.push(s[i]);
		}
	}
	for (var i = 0, len = s.length; i < len; i++) {
		if (!s[i].match(/[aeiou]/gi)) {
			console.log(s[i]);
		}
	}
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}

