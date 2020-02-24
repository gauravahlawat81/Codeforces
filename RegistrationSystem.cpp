#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int size;
	cin>>size;
	vector<string> h1;
	string ch;
	for(int i=0;i<size;i++)
	{
		cin>>ch;
		h1.push_back(ch);
	}
	return 0;
}