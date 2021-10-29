// Q1)   266B    QUEUE AT THE SCHOOL 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define pi 3.1415
#define setbits(x) __builtin_pocount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(s[j] == 'G' && s[j-1] == 'B')
            {
                swap(s[j],s[j-1]);
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}
*/



// Q2) 110 A    NEARLY LUKCY NUMBER  


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
    string s = to_string(n);
    int ct = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            ct++;
        }
    }
    if(ct == 4 || ct == 7)
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

