class Solution {
    public int[] getConcatenation(int[] nums) {
        int length = nums.length;
        int[] answer = new int[length * 2];

        for (int i = 0; i < length; i++) {
            answer[i] = nums[i];
            answer[i + length] = nums[i];
        }

        return answer;
    }
}
