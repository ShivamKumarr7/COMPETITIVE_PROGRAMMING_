// Q1) 977A   WRONG SUBTRACTION 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
#define pi 3.1415
#define mp make_pair
#define pb push_back
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=k;i++)
    {
        if((n % 10) == 0)
        {
            n = n / 10;
        }
        else 
        {
            n = n-1;
        }
    }
    cout<<n;
    return 0;
}
*/


// Q2)  59A    WORD


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
    string s;
    cin>>s;
    int uppercase = 0;
    int lowercase = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            lowercase++;
        }
        else 
        {
            uppercase++;
        }
    }
    if(uppercase > lowercase)
    {
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<s;
    }
    else if(lowercase > uppercase)
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    else
    {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s;
    }
    return 0;
}
*/


