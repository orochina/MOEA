// text input

#include<fstream>                 //ifstream
#include<iostream>
#include<string>                  //包含getline()
//#include<cmath>
using namespace std;

int main()
{
    
	
	fstream f("c:\\desktop\\out.txt",ios::out);
    f<<1234<<' '<<3.14<<'A'<<"How are you";      //写入数据　　
    f.close();
    f.open("d:\\out.txt",ios::in);
    int i;
    double d;
    char c;
    char s[20];
    f>>i>>d>>c;　　　　　　　　                 　//读取数据
    f.getline(s,20);
    cout<<i<<endl;　　　　　　                  　//显示各数据
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<s<<endl;
    f.close();
    return 0;
}
 
