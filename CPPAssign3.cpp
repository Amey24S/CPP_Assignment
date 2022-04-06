#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

swap(string a,int a1,int a2)
{
	string temp;
	temp[0]=a[a1];
	a[a1]=a[a2];
	a[a2]=temp[0];
	return a;
}

int cal1(string s)
{
	int len;
	int ctr=0;
	len = s.length();
	for(int i=1;i<len;i++)
	{
		if(s[i-1]=='0' && s[i]=='1')
		{
			ctr = ctr+1;
		}
	}
	return ctr;
}

int cal2(int x[],int len)
{
	int y=0;
	for(int i=0;i<len;i++)
	{
		if(x[i]>y)
		{
			y = x[i];
		}
	}
	return y;
}

int main()
{
	string a, s;
	int len, a1, a2, cnt = 0, ctr = 0;
	cout << "Enter Binary String\n";
	cin >> a;
	len = a.length();
	int res[300];
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j=j+2)
		{
			s = swap(a, i, j);
			res[ctr] = cal1(c); 
			ctr++;
		}
	}
	cout<<"Answer: "<< cal2(res, ctr) << endl;
	return 0;
}

