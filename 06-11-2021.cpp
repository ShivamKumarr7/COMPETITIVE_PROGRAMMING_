// Do upto ---> 1335A   candies and two sisters 

// Q1) 148A   INSOMNIA CURE


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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int ct = 0;
    for(int i=1;i<=d;i++)
    {
        if((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0))
        {
            ct++;
        }
    }
    cout<<ct;
    return 0;
}
*/



// Q2) 144A   ARRIVAL OF THE GENERAL 


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
    int n;
    cin>>n;
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int greatest_idx = INT_MAX;
    int smallest_idx = INT_MIN;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(s[i] > maxi)
        {
            maxi = s[i];
            greatest_idx = i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i] <= mini)
        {
            mini = s[i];
           smallest_idx = i;
        }
    }
    int ans = 0;
    if(greatest_idx < smallest_idx)
    {
        ans = (greatest_idx - 0) + (n - 1 - smallest_idx);
    }
    else 
    {
        ans = (greatest_idx - 0) + (n - 1 - smallest_idx) - 1;
    }
    cout<<ans;
    return 0;
}
*/

