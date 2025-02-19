#include <stdio.h>

void factores(int n) {
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            printf("%d\n",i);
        }
    }
}

int main () {
    //13195
    int n;
    printf("ingrese numero");
    scanf("%d",&n);
    factores(n);
    return 0;
}