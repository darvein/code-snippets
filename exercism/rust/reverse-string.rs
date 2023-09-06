extern crate unicode_segmentation;
use unicode_segmentation::UnicodeSegmentation;

pub fn reverse(input: &str) -> String {
    // let reversed: String =  input.chars().rev().collect() // no unicode
    let reversed: String = input.graphemes(true).rev().collect();
    return reversed;
}
