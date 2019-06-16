#include <stdio.h>
char *ReturnsTr()
{
    char p[]="hello world!";
    return p;
}
int main()
{
    char *str;
    str=ReturnsTr();
    printf("%s\n", str);
    return 0;
}
