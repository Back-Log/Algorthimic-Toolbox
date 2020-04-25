#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<unsigned long long int>a(n, 0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    unsigned long long int result=a[n-1]*a[n-2];
    cout<<result<<"\n";
    return 0;
}