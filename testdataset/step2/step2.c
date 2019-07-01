#include <stdio.h>

const int maxn = 1e5;

struct thisisAStructTagName
{
    struct thisisAStructTagName *thisisAPOINter;
} thisisAstructVAr;

struct thisisAStructTagName *thisisafunctionname();

union node {
    int a;
};

enum Node
{
    A,  B
};

typedef struct thisisAStructTagName Typedefname;

struct thisisAStructTagName *thisisafunctionname()
{
    int t = 1 > 0 ? 2 : 3;
    return &thisisAstructVAr;
}

int main()
{
    Typedefname * TypedefinePOINTER = thisisafunctionname()->thisisAPOINter;
    TypedefinePOINTER->thisisAPOINter = NULL;
    int n = 10;
    int TimeMachine = 1;
    int *p = NULL;
    *p = 10;
    int arr[10] = {0};
    for (int i = 0; i < n; i++)
    {
        int timeMachine;
        if (TimeMachine == 1)
        {
            timeMachine = 1;
        }
        arr[10] = 1;
        if (i > 1)
        {
            char TIMEMACHINE = 'c';
        }
    }
    return 0;
}
