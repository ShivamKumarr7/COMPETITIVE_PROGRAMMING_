// Q1) 50A  DOMINO PILING

/*
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pi 3.1415 
#define pb push_back
#define mp make_pair 
#define setbits(x)  __builtin_popcount(x)
#define zrobits1(x) __builtin_ctz(x) // trailing zeros in an integer number 
#define zrobits2(x) __builtin_clz(x) // leading zeros in an integer number 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>m>>n;
    int multi = m * n;
    cout<<floor(multi/2);
    return 0;
}
*/



// Q2) 282A BIT++


/*
#include<bits/stdc++.h>
using namespace std;
#define pi 3.1415
#define mod 1000000007
#define mp make_pair 
#define pb push_back 
#define setbits(x) __builtin_popcount(x) // count no of set bits in an integer 
#define zerobits1(x) __builtin_clz(x)  // count leading zeros in an integer 
#define zerobits2(x) __builtin_ctz(x) // count trailing zeros in an integer 
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if(s == "++X" || s == "X++")
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }
    cout<<ans;
    return 0;
}
*/


