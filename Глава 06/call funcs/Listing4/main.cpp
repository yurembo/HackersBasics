int funct()
{
    return 0;
}

int main()
{
	__asm
    {
        LEA ESI, return_addr 
        PUSH ESI 
        JMP funct 
    return_addr:
    }
}
