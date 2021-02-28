#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int bills[5]={0};
	int bills_value[5];
	bills[0]=100;bills[1]=20;bills[2]=10;bills[3]=5;bills[4]=1;
	int total_number=0;
	for(int i=0;i<5;i++)
	{
		total_number=total_number+n/bills[i];
		n=n%bills[i];
		if(n==0)
		break;
	}
	cout<<total_number<<"\n";
}
