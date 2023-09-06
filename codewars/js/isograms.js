// https://www.codewars.com/kata/54ba84be607a92aa900000f1/train/javascript

function isIsogram(str) {
    return (str.length) == (new Set(str.toLowerCase())).size
}

//console.log(isIsogram("Demartoglyphics"))
//console.log(isIsogram("isogram"))
//console.log(isIsogram("aba"))
//console.log(isIsogram("moOse"))
//console.log(isIsogram("isIsogram"))
//console.log(isIsogram(""))
