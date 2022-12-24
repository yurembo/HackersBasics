int func(int a) 
{
    if (a != 0) 
        return a++;
    return 1/a;
}

int main()
{
    func(1);
}