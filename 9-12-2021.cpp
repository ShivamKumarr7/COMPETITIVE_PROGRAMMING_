// Q1)   1385B  Restore the permutation by merger 


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
        vector<int>s(2*n,0);
        for(int i=0;i<2*n;i++)
        {
            cin>>s[i];
        }
        vector<int>ans;
        int left = 0;
        int ct = 0;
        unordered_set<int>ss;
        while((ct < n) && (left < 2*n))
        {
            int value = s[left];
            if(ss.find(value) != ss.end())
            {
                left++;
            }
            else 
            {
                ss.insert(value);
                ans.pb(value);
                left++;
                ct++;
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
*/




// Q2)  1311A   Add Odd or Subtract Even



/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
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
        else if(a > b)
        {
            if((a & 1) && (b & 1))
            {
                cout<<1<<"\n";
            }
            else if((a & 1) && (!(b & 1)))
            {
                cout<<2<<"\n";
            }
            else if((!(a & 1)) && (b & 1))
            {
                cout<<2<<"\n";
            }
            else 
            {
                cout<<1<<"\n";
            }
        }
        else 
        {
            if((a&1) && (b&1))
            {
                cout<<2<<"\n";
            }
            else if((a&1) && (!(b&1)))
            {
                cout<<1<<"\n";
            }
            else if((!(a&1)) && (b&1))
            {
                cout<<1<<"\n";
            }
            else 
            {
                cout<<2<<"\n";
            }
        }
    }
    return 0;
}
*/

