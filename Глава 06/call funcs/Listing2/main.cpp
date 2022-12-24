int func()
{
    return 0;
}

int main()
{
    int (*a)();
    a = func;
    a();
}
