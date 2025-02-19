#include <stdio.h>

long sum = 0;

void SumEven(int n) {
    if (n % 2 == 0) {
        sum = sum + n;
    }
}

void Fibonacci(int n) {

    long a = 2, b = 1, c;
    int i = 1;

    printf("%d\n", a);  

    if (n > 0) {
        printf("%d\n", b);  
    }

    while (c != 10){
        c = a + b;  
        a = b;      
        b = c;      
        printf("%d\n", c);  
        SumEven(c);
        i++;
    }
}

int main() {
    Fibonacci(40);
    printf("La suma es: %d\n",sum);
    return 0;
}