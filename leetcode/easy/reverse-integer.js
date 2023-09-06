
var reverse = function(x) {
    let rev = 0;

    let sign = x > 0 ? 1 : -1;

    x = Math.abs(x);
    while(x != 0){
        let digit = x % 10 ;
        rev = rev * 10 + digit;
        x = Math.floor(x / 10);
    }

    if (rev > 0x7fffffff || rev < -0x80000000) {
        return 0;
    }

    rev = sign * rev;
    return rev;
};

console.log(reverse(-123));
