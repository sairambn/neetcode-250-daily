import java.util.*;

class Solution {
    public List<Integer> findDuplicateElements(int[] arr) {
        Set<Integer> seen = new HashSet<>();
        Set<Integer> duplicates = new HashSet<>();
        for (int num : arr) {
            if (seen.contains(num)) duplicates.add(num);
            else seen.add(num);
        }
        return new ArrayList<>(duplicates);
    }
}
