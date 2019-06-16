        int main()
        {
int fab[10] = {0};
            fab[1] = 1;
        for(int i = 2; i < 10; i++)
{
        fab[i] = fab[i-1]+fab[i-2];
            }
            return 0;
}