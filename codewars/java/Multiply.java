// https://www.codewars.com/kata/50654ddff44f800200000004/train/java

public class Multiply {
  public static Double multiply(Double a, Double b) {
    return a * b;
  }
}

class Main {
  public static void main(String[] args) {
    Multiply m = new Multiply();
    System.out.println(m.multiply(1.0, 2.5));
  }
}

