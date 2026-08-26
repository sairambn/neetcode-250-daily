class Solution {
    public int[] firstFiveFibonacci() {
        int[] result = new int[5];
        int a = 0, b = 1;
        for (int i = 0; i < 5; i++) {
            result[i] = a;
            int next = a + b;
            a = b;
            b = next;
        }
        return result;
    }
}
