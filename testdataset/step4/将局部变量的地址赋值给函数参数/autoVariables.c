void Foo(int **a)
{
    int b = 1;
    *a = &b;
}

int main()
{
    int *c;
    Foo(&c);
}
