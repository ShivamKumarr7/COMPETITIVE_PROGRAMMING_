// Q1) 1353A  Most Unstable Array 



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
        ll n,m;
        cin>>n>>m;
        if(n == 1)
        {
            cout<<"0"<<"\n";
        }
        else if(n == 2)
        {
            cout<<m<<"\n";
        }
        else 
        {
            cout<<(2*m)<<"\n";
        }
    }
    return 0;
}
*/





// Q2)  1551A  Polycarp and Coins 



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
        ll to_be_paid;
        cin>>to_be_paid;
        if((to_be_paid % 3) == 0)
        {
            cout<<(to_be_paid / 3)<<" "<<(to_be_paid / 3)<<"\n";
        }
        else 
        {
            if(to_be_paid == 1)
            {
                cout<<1<<" "<<0<<"\n";
            }
            else if(to_be_paid == 2)
            {
                cout<<0<<" "<<1<<"\n";
            }
            else 
            {
                ll rem = to_be_paid % 3;
                if(rem == 1)
                {
                    cout<<((to_be_paid/3) + 1)<<" "<<(to_be_paid/3)<<"\n";
                }
                else 
                {
                    cout<<(to_be_paid/3)<<" "<<((to_be_paid/3) + 1)<<"\n";
                }
            }
        }
    }
    return 0;
}
*/

