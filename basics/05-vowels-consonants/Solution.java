class Solution {
    public int[] countVowelsConsonants(String s) {
        int v = 0, c = 0;
        String vowels = "aeiouAEIOU";
        for (char ch : s.toCharArray()) {
            if (Character.isLetter(ch)) {
                if (vowels.indexOf(ch) >= 0) v++;
                else c++;
            }
        }
        return new int[]{v, c};
    }
}
