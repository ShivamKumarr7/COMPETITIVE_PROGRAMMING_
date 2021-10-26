// Q1)   546A    SOLDIER AND BANANAS 

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll k,w,n;
    cin>>k>>n>>w;
    ll cost = 0;
    for(ll i=1;i<=w;i++)
    {
        cost = cost + (i * k);
    }
    ll ans = cost - n;
    if(ans <= 0)
    {
        cout<<0;
    }
    else
    {
        cout<<ans;
    }
    return 0;
}
*/



// Q2) 617A   ELEPHANT 


// Firstly...i wrote a recursive solution...but obvio TLE aata vaise...so i used DP 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int helper(int start,int x)
{
    if(start == x)
    {
        return 0;
    }
    if(start > x)
    {
        return 0;
    }
    int a,b,c,d,e;
    a = INT_MAX,b = INT_MAX,c = INT_MAX,d = INT_MAX,e = INT_MAX;
    a = 1 + helper(start+1,x);
    b = 1 + helper(start+2,x);
    c = 1 + helper(start+3,x);
    d = 1 + helper(start+4,x);
    e = 1 + helper(start+5,x);
    return min({a,b,c,d,e});
}
int help(int x)
{
    int start = 0;
    return helper(start,x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin>>x;
    cout<<help(x);
    return 0;
}
*/


// Iterative DP :- 

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n <= 5)
    {
        cout<<1;
    }
    else 
    {
        vector<int>s(n+1,0);
        for(int i=1;i<=5;i++)
        {
            s[i] = 1;
        }
        for(int i=6;i<=n;i++)
        {
            s[i] = 1 + min({s[i-1],s[i-2],s[i-3],s[i-4],s[i-5]});
        }
        cout<<s[n];
    }
    return 0;
}
*/

