// https://www.codewars.com/kata/57f609022f4d534f05000024/train/java

import java.util.HashMap;
import java.util.Map;

class Solution {
  static int stray(int[] numbers) {
    HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();

    // set everything to 0
    for (int i = 0; i < numbers.length; i++) {
      hmap.put(numbers[i], 0);
    }

    for (int i = 0; i < numbers.length; i++) {
      int counter = hmap.get(numbers[i]);
      hmap.put(numbers[i], counter + 1);
    }

    for (Map.Entry<Integer, Integer> pair: hmap.entrySet()) {
      if (pair.getValue() == 1) return pair.getKey();
    }

    return 0;
  }
}

class Main {
  public static void main(String[] args) {
    int[] data = {17, 17, 3, 17, 17, 17, 17};
    Solution sol = new Solution();
    System.out.println(sol.stray(data));
  }
}
