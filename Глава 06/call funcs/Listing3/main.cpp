int func_1()
{
    return 0;
}

int func_2()
{
    return 0;
}

int func_3()
{
    return 0;
}

int main()
{
    int x;
    int a[3]={(int) func_1,(int) func_2, (int) func_3}; int (*f)();

    for (x=0;x < 3;x++)
    {
        f=(int (*)()) a[x]; f();
    }
}
