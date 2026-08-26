import java.util.*;

class Solution {
    public List<Character> findDuplicates(String s) {
        Set<Character> seen = new HashSet<>();
        Set<Character> duplicates = new HashSet<>();
        for (char c : s.toCharArray()) {
            if (seen.contains(c)) duplicates.add(c);
            else seen.add(c);
        }
        return new ArrayList<>(duplicates);
    }
}
