// combined_exp_types.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

void MyFunc(char* a, int i)
{
	a[i] = '\n';
	a[i + 1] = 0;
}

int main()
{
	static char buff[] = "Hello,Sailor!"; 
	MyFunc(&buff[0], 5);
}
