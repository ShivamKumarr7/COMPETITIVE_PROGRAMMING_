// Q1)  437A   GEORGE AND ACCOMODATION 

/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)  // to count leading zeros 
#define zerobits2(x) __builtin_ctz(x)  // to count trailing zeros 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ct = 0;
    while(n--)
    {
        int a1,b1;
        cin>>a1>>b1;
        if((a1 + 2) <= b1)
        {
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
*/



// Q2) 136A   PRESENTS  


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
const int BMax = 10000007;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>s;
    int ct = 1;
    while(n--)
    {
        int temp;
        cin>>temp;
        s.insert(mp(temp,ct));
        ct++;
    }
    map<int,int>:: iterator it = s.begin();
    while(it != s.end())
    {
        cout<<it->second<<" ";
        it++;
    }
    return 0;
}
*/


