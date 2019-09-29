
#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
 
using namespace std;
 
int main()
{
	ifstream f;
	f.open("C:\\Users\\nking07\\Desktop\\example.txt");
 
	string str;
	vector<vector<int> > num;
	while(getline(f, str))
	{
		istringstream input(str);
		vector<int> tmp;
		int a;
		while(input >> a)
			tmp.push_back(a);
 
		num.push_back(tmp);
	}
 
	for(int i = 0; i < num.size(); ++i)
	{
		for(int j = 0; j < num[i].size(); ++j)
		{
			cout << num[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
