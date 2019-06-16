#include <stdio.h>

typedef long long int * LLP;

typedef struct Node3 defnode1, defnode2;

typedef defnode1 defnode3, defnode4;

typedef struct Node3
{
    int a;
} defnode5, defnode6;

typedef enum ENUM
{
    A, B
} defenum1, defenum2;

int main()
{
    defnode3 t = {1};
    printf("%d\n", t.a);
    return 0;
}
