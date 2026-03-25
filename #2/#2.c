#include <stdio.h>

// Considerando los términos de la secuencia de Fibonacci, encuentre la suma de los términos de valor par.

long sum = 0;

void SumEven(int n) {
    if (n % 2 == 0) {
        sum = sum + n;
    }
}

void Fibonacci(int n) {

    int a = 1, b = 2, c = 0;
    int i = 1;

    SumEven(a);
    SumEven(b);

    printf("%d\n", a);  

    if (n > 0) {
        printf("%d\n", b);  
    }

    while (1) {
        c = a + b;
        if (c > n) break;

        printf("%d\n", c);
        SumEven(c);

        a = b;
        b = c;
    }
    
}

int main() {
    Fibonacci(10);
    printf("La suma es: %d\n",sum);
    return 0;
}