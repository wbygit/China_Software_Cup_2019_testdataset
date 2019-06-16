struct thisisastruct {
    int thisisastructvar;
};

void *voidpointer;

typedef struct thisisastruct * TISTP;

int main()
{
    ((struct thisisastruct *)voidpointer)->thisisastructvar;
    ((TISTP)voidpointer)->thisisastructvar;
    return 0;
}