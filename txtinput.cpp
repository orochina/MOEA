// text input

#include<fstream>                 //ifstream
#include<iostream>
#include<string>                  //����getline()
//#include<cmath>
using namespace std;

int main()
{
    
	
	fstream f("c:\\desktop\\out.txt",ios::out);
    f<<1234<<' '<<3.14<<'A'<<"How are you";      //д�����ݡ���
    f.close();
    f.open("d:\\out.txt",ios::in);
    int i;
    double d;
    char c;
    char s[20];
    f>>i>>d>>c;����������������                 ��//��ȡ����
    f.getline(s,20);
    cout<<i<<endl;������������                  ��//��ʾ������
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<s<<endl;
    f.close();
    return 0;
}
 
