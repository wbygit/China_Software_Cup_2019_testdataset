#include <stdio.h>
#include <stdlib.h>
#include "E:\\Works\\Programing\\China-Software-Cup\\2019\\eclipseworkspace2\\Antlr_test\\examples\\floder\\_test_.c"

struct Node;

struct LinkedNode
{
    int val;
    struct LinkedNode *next;
};

struct Node *getNode();
void setNode(struct Node *b);
void printNode(struct Node *b, struct Node *a);

typedef struct dtNode ttnode;

int main()
{
    struct dtNode
    {
        int t;
    };

    struct dtNode;
    struct Node *bb;

    typedef struct
    {
        int aa;
    } tNode;

    struct tNode
    {
        int aa;
    };

    struct Node
    {
        int aa;
        struct NodeIn
        {
            int bb;
        };
        struct C
        {
            int aa;
        }c;
    };
    struct Node aa;
    aa.aa = 1;
    aa.bb = 2;
    struct C cc;
    cc.aa = 4;
    aa.c.aa = 10;
    int c = 1;

    return 0;
}

struct Node
{
    int a;
    int b;
};

struct Node *getNode()
{
    return (struct Node *)malloc(sizeof(struct Node));
}

void printNode(struct Node *b, struct Node *a)
{
    printf("a.a = %d, a.b = %d, b.a = %d, b.b = %d\n", a->a, a->b, b->a, b->b);
}

