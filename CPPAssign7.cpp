#include<iostream>
using namespace std;

int HCF(int a, int b)
{
	if(a==0 || b==0)
	{
		return 0;
	}
	if(a==b)
	{
		return a;
	}
	if(a>b)
	{
		return HCF(a-b, b);
	}
	return HCF(a, b-a);
}

int main()
{
	int a, b, c, ret;
	
	cout << "Enter Length\n";
	cin >> a;
	cout << "Enter Breadth\n";
	cin >> b;
	c = HCF(a, b);
	ret = (a/c)*(b/c);
	cout << "Answer: "<< ret <<endl;

	return 0;
}
