extern "C" {
    int addNumber(int a, int b);
    int factorial(int n);
}

int addNumber(int a, int b) {
    return a + b;
}

int factorial(int n) {
    int factorial = 1, i = 1;

    while (i <= n) {
        factorial *= i;
        ++i;
    }

    return factorial;
}
