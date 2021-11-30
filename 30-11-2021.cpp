// Q1) 1367B   Even Array 


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
        int even_no = 0;
        int odd_no = 0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            if(s[i] & 1)
            {
                odd_no++;
            }
            else
            {
                even_no++;
            }
        }
        int odd_indices = (n/2);
        int even_indices = ((n+1)/2);
        if((odd_no > odd_indices) || (even_no > even_indices))
        {
            cout<<(-1);
        }
        else
        {
            int out_of_place = 0;
            for(int i=0;i<n;i++)
            {
                if(((i % 2) == 0) && ((s[i] % 2) != 0))
                {
                    out_of_place++;
                }
                else if(((i % 2) != 0) && ((s[i] % 2) == 0))
                {
                    out_of_place++;
                }
            }
            cout<<(out_of_place/2);
        }
        cout<<"\n";
    }
    return 0;
}
*/


// Q2) 1360A   Minimal Square 


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
        int a,b;
        cin>>a>>b;
        // i will make sure that a is always the longer side...so 
        if(a < b)
        {
            swap(a,b);
        }
        int maxi = max(a,2*b);
        cout<<(maxi * maxi)<<"\n";
    }
    return 0;
}
*/

