// Q1)  1348A   Phoenix and Balance



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
    vector<ll>s(31,0);
    s[0] = 0;
    s[1] = 2;
    for(int i=2;i<=30;i++)
    {
        s[i] = s[i-1] * 2;
    }
    // 0 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 
    while(t--)
    {
        int n;
        cin>>n;
        int mid = n / 2;
        vector<ll>help(n+1,0);
        for(int i=1;i<=n;i++)
        {
            help[i] = s[i];
        }
        swap(help[mid],help[n]);
        ll left_side = 0;
        ll right_side = 0;
        for(int i=0;i<=mid;i++)
        {
            left_side += help[i];
        }
        for(int i=mid+1;i<n+1;i++)
        {
            right_side += help[i];
        }
        cout<<abs(right_side - left_side)<<"\n";
    }
    return 0;
}
*/




// Q2)  1371A   Magical Sticks 



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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n & 1)
        {
            int real_ans = (n/2) + 1;
            cout<<real_ans<<"\n";
        }
        else
        {
            int real_ans = n/2;
            cout<<real_ans<<"\n";
        }
    }
    return 0;
}
*/

