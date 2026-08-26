import java.util.*;

class Solution {
    public List<Character> findUnique(String s) {
        Map<Character, Integer> count = new HashMap<>();
        for (char c : s.toCharArray()) {
            count.put(c, count.getOrDefault(c, 0) + 1);
        }
        List<Character> result = new ArrayList<>();
        for (Map.Entry<Character, Integer> e : count.entrySet()) {
            if (e.getValue() == 1) result.add(e.getKey());
        }
        return result;
    }
}
