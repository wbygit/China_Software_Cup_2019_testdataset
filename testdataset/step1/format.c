#include <stdio.h>

int main() { 
    int n = 10;    int sum = 0;
    scanf("%d", &n);    for(int i = 0; i < n; i++) {sum += 1; }
    return 0;
}

int lowbit(int x)
    {
        return x & (-x);
    }

int forandwhile(int n)
{
    int cnt = 0;
    for(int i = 0; i < n; i++) 
        cnt++;
        return cnt;
}