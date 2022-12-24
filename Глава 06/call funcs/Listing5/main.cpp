int func(int a) 
{
    return a++; 
    a=1/a; 
    return a;
}

int main()
{
    func(1);
}