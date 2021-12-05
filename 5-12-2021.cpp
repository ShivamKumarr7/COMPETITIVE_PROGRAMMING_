// Q1)  151A   Soft Drinking 


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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int overall_drink_in_milliters = k * l;
    int slices_of_lime = c * d;
    int salt = p;
    int min1 = overall_drink_in_milliters/nl;
    int min2 = slices_of_lime;
    int min3 = salt/np;
    cout<<(min({min1,min2,min3})/n);
    return 0;
}
*/



// Q2)  1560A  Dislikes of Threes 



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
    bool arr[100001] = {0};
    arr[0] = true;
    for(int i=1;i<2001;i++)
    {
        if(((i % 3) == 0) || (i % 10 == 3))
        {
            arr[i] = true;
        }
    }
    while(t--)
    {
        int k;
        cin>>k;
        int ct = 0;
        for(int i=1;i<2001;i++)
        {
            if(arr[i] == false)
            ct = ct + 1;
            if(ct == k)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
*/


