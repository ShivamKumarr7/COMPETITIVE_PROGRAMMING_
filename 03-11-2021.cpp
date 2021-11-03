// Q1) 486A   CALCULATING FUNCTION :- 

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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll ans = 0;
    if(n & 1)
    {
        ll temp = (n-1)/2;
        ans = temp - n;
    }
    else
    {
        ans = n/2;
    }
    cout<<ans;
    return 0;
}
*/


// Q2) 61A   ULTRA-FAST MATHEMATICIAN 


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
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,t;
    cin>>s>>t;
    string ans = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
        {
            ans.pb('1');
        }
        else
        {
            ans.pb('0');
        }
    }
    cout<<ans;
    return 0;
}
*/


