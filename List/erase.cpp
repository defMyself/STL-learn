#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
void OutToScreen(int& Ele)
{
	cout << Ele << ", ";
}

void main()
{
	list<int> malt;
	for(int i=0;i<10;i++)
		malt.push_back(i);
	for_each(mylt.begin(),malt.end(),OutToScreen);
	cout << endl;
}