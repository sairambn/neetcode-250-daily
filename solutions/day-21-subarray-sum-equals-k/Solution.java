import java.util.*;

class Solution {
    public int subarraySum(int[] nums, int k) {
        int count = 0;
        int prefix = 0;
        Map<Integer, Integer> seen = new HashMap<>();
        seen.put(0, 1);

        for (int num : nums) {
            prefix += num;
            if (seen.containsKey(prefix - k)) {
                count += seen.get(prefix - k);
            }
            seen.put(prefix, seen.getOrDefault(prefix, 0) + 1);
        }

        return count;
    }
}
