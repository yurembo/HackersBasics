#include <iostream>
#include <sstream>
#include <string>

using namespace std;

inline string max(int a, int b)//������������ ������� ���������� ���������
{
    //cout << "max func" << endl;
    int val = (a > b) ? a : b;
    stringstream stream;
    stream << "0x" << hex << val;// ����������� �������� � hex-�����
    string res = stream.str();

    return res;
} 

int main(int argc, char **argv)
{
    cout << max(0x666, 0x777) << endl;

    string par = argv[1];
    int val;
    if (par.substr(0, 2) == "0x")// ���� ������� ��������� ���� ������� '0x',
        val = stoi(argv[1], nullptr, 16);// ����� ��� hex-�����,
    else
        val = stoi(argv[1], nullptr, 10);// � ���� ������,- dec-�����

    cout << max(0x666, val) << endl;
    cout << max(0x666, val) << endl;

    return 0;
}
