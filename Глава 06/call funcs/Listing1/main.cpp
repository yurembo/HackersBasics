void func();

int main()
{
    int a; 
    func(); 
    a=0x666; 
    func();
}

void func()
{
    int a; 
    a++;
}
