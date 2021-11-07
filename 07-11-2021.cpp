// Q1) 1328A  DIVISIBILITY PROBLEM :- 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define pb push_back
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
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll divi = a / b;
        ll rem = a % b;
        if(rem == 0)
        {
            cout<<0<<"\n";
        }
        else
        {
            ll ans = ((b * (divi + 1)) - a);
            cout<<ans<<"\n";
        }
    }
    return 0;
}
*/


// Q2) 443A   ANTON AND LETTERS 


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
    string s;
    getline(cin,s);
    int ct = 0;
    unordered_set<char>t;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            t.insert(s[i]);
        }
    }
    cout<<t.size();
    return 0;
}
*/


