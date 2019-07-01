#include <stdio.h>

struct returnType
{
    int valinreturnType;
};

struct returnType Afunction() {
    struct returnType newReturnTYPE;
    newReturnTYPE.valinreturnType = 1;
    return newReturnTYPE;
}

int main()
{
    int valinreturnType = Afunction().valinreturnType;
    printf("%d", valinreturnType);
    return 0;
}
