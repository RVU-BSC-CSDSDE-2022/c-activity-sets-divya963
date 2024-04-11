#include <stdio.h>

int input_degree() {
    int n;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &n);
    return n;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial:\n");
    for (int i = 0; i <= n; ++i) {
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x at which you want to evaluate the polynomial: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0];
    for (int i = 1; i <= n; ++i) {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("H(");
    for (int i = 0; i <= n; ++i) {
        printf("%.2f", a[i]);
        if (i != n)
            printf(", ");
    }
    printf(") = %.7f\n", result);
    printf(" = %.2f", a[0]);
    for (int i = 1; i <= n; ++i) {
        printf(" + %.2f * %.2f^%d", a[i], x, i);
    }
    printf(" = %.7f\n", result);
}

int main() {
    int n;
    n = input_degree();
    float a[n+1];
    input_coefficients(n, a);
    float x = input_x();
    float result = evaluate_polynomial(n, a, x);
    output(n, a, x, result);
    return 0;
}


