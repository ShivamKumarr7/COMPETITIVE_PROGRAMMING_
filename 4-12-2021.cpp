// Q1)  1512A  SPY DETECTED!


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
        int n;
        cin>>n;
        vector<int>s(n,0);
        int freq[101] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            freq[s[i]]++;
        }
        int ans = -1;
        for(int i=0;i<101;i++)
        {
            if(freq[i] == 1)
            {
                ans = i;
                break;
            }
        }
        int real_ans = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i] == ans)
            {
                real_ans = i;
            }
        }
        cout<<(real_ans + 1)<<"\n";
    }
    return 0;
}
*/




// Q2)  749A  Bachgold Problem 


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
    if(!(n & 1))
    {
        cout<<(n/2)<<"\n";
        for(int i=1;i<=(n/2);i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        int ans = n - 3;
        int ct = (ans/2);
        int f_ct = ct + 1;
        cout<<f_ct<<"\n";
        for(int i=1;i<=ct;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<" ";
    }
    return 0;
    
}
*/

