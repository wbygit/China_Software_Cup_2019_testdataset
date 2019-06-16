#include <stdio.h>

int fac[10];

int main() {
    fac[0] = 1;
    for(int i = 1; i < 10; i++) {
        fac[i] = fac[i-1] * i;
    }
    int q;
    scanf("%d", &q);
    printf("%d", fac[q]);
    return 0;
}

void empty_function() {
    
}