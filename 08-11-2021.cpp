// Q1) 268A   GAMES 


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
    int zz = n;
    vector<int>home;
    vector<int>away;
    while(n--)
    {
        int a1,b1;
        cin>>a1>>b1;
        home.pb(a1);
        away.pb(b1);
    }
    int ct = 0;
    for(int i=0;i<zz;i++)
    {
        for(int j=0;j<zz;j++)
        {
            if(home[i] == away[j])
            {
                ct++;
            }
        }
    }
    cout<<ct;
    return 0;
}
*/



// Q2) 520A   PANGRAM


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
#define mp make_pair
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
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    unordered_set<char>t;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            t.insert(s[i]);
        }
    }
    if(t.size() == 26)
    {
        cout<<"YES";
    }
    else 
    {
        cout<<"NO";
    }
    return 0;
}
*/

