double myPow(double x, int n) {
    // Write Your Code Here
    if (n == 0)
        return 1.0;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }

    double result = 1.0;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }

    return result;
}