// https://www.codewars.com/kata/5287e858c6b5a9678200083c/solutions/javascript

function narcissistic(value) {
    let aux = value

    sum = 0
    while(aux >= 1){
        let d = aux%10
        sum += (Math.pow(d, value.toString().length))
        aux = Math.trunc(aux/10)
    }

    return (value == sum);
}

//console.log(narcissistic(153));
//console.log(narcissistic(1634));
//console.log(narcissistic(7));
//console.log(narcissistic(371));
