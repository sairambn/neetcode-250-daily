int reverseNumber(int n) {
    int sign = n < 0 ? -1 : 1;
    n = abs(n);
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return sign * rev;
}
