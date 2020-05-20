#include <algorithm>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <ratio>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
//#define for(i,n) for(int i=0;i<n;i++)
#define ll long long
#define MAX 1e9
#define MIN -1e9
#define max(x,y) (x>y)?x:y
#define min(x,y) (x<y)?x:y
#define s(n) scanf("%d",&n)
#define mem memset(a, 0, sizeof(a))
#define minimum(a)	*min_element(a.begin(), a.end())
#define maximum(a)	*max_element(a.begin(), a.end())
typedef vector<int> vi;
typedef vector<string> vs;
/*
* * * * * * * * * * * * * * * * * * * * * *
*       ☆꧁𝓑𝓐𝓒𝓚_𝓛𝓞𝓖꧂☆              **
*                                        ***
* * * * * * * * * * * * * * * * * * * * *****
*/ 
int get_pisano(int m)
{
    //We are storing the first fiboo in a nad second in b

  int a,b,c;
  a=0;
  b=1;
  c=a+b;
  for(int i=0;i<m*m;i++)
  {
      //finding next fiboo mod m untill we hit the a=0,b=1(because pisano period start from 01)
     c=(a+b)%m;
     a=b;
     b=c;
     if(a==0 && b==1)
     {
         return i+1;
     }

  }
 
}
long int calc_fibbo_mod_m(long long n,int m)
{
  long int pisano=get_pisano(m);
   int remender;
   remender=(n%pisano);
   vector<long long int>fib(remender+1,0);
   //genreting fibbo series till remender and stoting fiboo%m
   fib[0]=0;
   fib[1]=1;
   bool flag=true;
   for(int i=2;i<=remender;i++)
   {
       fib[i]=(fib[i-1]+fib[i-2])%m;
      flag=false;
   }
   long int ans=fib[remender]%m;
 if(flag)
 {
   ans=remender;
 }
 
return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //  #ifndef ONLINE_JUDGE
		//   freopen("input.txt","r",stdin);
	  //    freopen("output.txt","w",stdout);
    //  #endif
   long long n;
   int m;
   cin>>n>>m;
   long int ans;
   ans=calc_fibbo_mod_m(n,m);
   cout<<ans<<endl;
return 0;
}
