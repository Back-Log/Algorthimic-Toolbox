#include<bits/stdc++.h>
using namespace std;
//Back_Log
int gcd(int a,int b)
{
 if(b==0)
 {
 	return a;
 }
 else
 {
 	return gcd(b,a%b);
 }

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int a,b;
	cin>>a>>b;
	int result=gcd(a,b);
	cout<<result<<endl;
}