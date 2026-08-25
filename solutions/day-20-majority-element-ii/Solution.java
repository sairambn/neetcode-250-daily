import java.util.*;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        if (nums.length == 0) return new ArrayList<>();

        Integer candidate1 = null, candidate2 = null;
        int count1 = 0, count2 = 0;

        for (int num : nums) {
            if (candidate1 != null && num == candidate1) {
                count1++;
            } else if (candidate2 != null && num == candidate2) {
                count2++;
            } else if (count1 == 0) {
                candidate1 = num;
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = num;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        List<Integer> result = new ArrayList<>();
        int threshold = nums.length / 3;

        if (candidate1 != null) {
            int c = 0;
            for (int num : nums) if (num == candidate1) c++;
            if (c > threshold) result.add(candidate1);
        }
        if (candidate2 != null) {
            int c = 0;
            for (int num : nums) if (num == candidate2) c++;
            if (c > threshold) result.add(candidate2);
        }

        return result;
    }
}
