#include<bits/stdc++.h>
using namespace std;
//back_Log
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<long long int>fib(n+1,0);
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=n;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[n]<<endl;
	return 0;
}