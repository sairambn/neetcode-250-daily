import java.util.*;

class Solution {
    public int secondLargest(int[] arr) {
        TreeSet<Integer> set = new TreeSet<>(Collections.reverseOrder());
        for (int num : arr) set.add(num);
        if (set.size() < 2) return set.first();
        set.pollFirst();
        return set.first();
    }
}
