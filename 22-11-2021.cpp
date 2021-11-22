// Q1) 1409A   YET ANOTHER TWO INTEGER PROBLEMS 


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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a == b)
        {
            cout<<0<<"\n";
        }
        else
        {
            if(a > b)
            {
                ll diff = a - b;
                ll ans1 = diff % 10;
                ll ans2 = diff / 10;
                if(ans1 == 0)
                {
                    cout<<ans2<<"\n";
                }
                else
                {
                    cout<<(ans2+1)<<"\n";
                }
            }
            else
            {
                ll diff = b - a;
                ll ans1 = diff % 10;
                ll ans2 = diff/10;
                if(ans1 == 0)
                {
                    cout<<ans2<<"\n";
                }
                else
                {
                    cout<<(ans2+1)<<"\n";
                }
            }
        }
    }
    return 0;
}
*/



// Q2) 427A   POLICE RECRUITS 


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
    ll ct = 0;
    ll police_now = 0;
    ll crime_now = 0;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp == -1)
        {
            if(police_now == 0)
            {
                ct++;
            }
            else
            {
                police_now = police_now - 1;
            }
        }
        else
        {
            police_now = police_now + temp;
        }
    }
    cout<<ct;
    return 0;
}
*/

