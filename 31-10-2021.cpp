// Q1) 271A   BEAUTIFUL YEAR 


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
    for(ll i=n+1;;i++)
    {
        int freq[10] = {0};
        string temp = to_string(i);
        for(int j=0;j<temp.size();j++)
        {
            char loc = temp[j];
            loc = loc - '0';
            int s1 = loc;
            freq[s1]++;
        }
        bool check = true;
        for(int i=0;i<10;i++)
        {
            if(freq[i] > 1)
            {
                check = false;
                break;
            }
        }
        if(check == true)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
*/


// Q2) 677A    VANYA AND FENCE 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mp make_pair
#define pb push_back
#define pi 3.1415
#define mod 1000000007
#define setbits(x) __builtin_popcount(x)
#define zerobits1(x) __builtin_clz(x)
#define zerobits2(x) __builtin_ctz(x)
const int Max = 100005;
const int BMax = 10000005;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,h;
    cin>>n>>h;
    ll width = 0;
    while(n--)
    {
        int temp;
        cin>>temp;
        if(temp > h)
        {
            width = width + 2;
        }
        else
        {
            width = width + 1;
        }
    }
    cout<<width;
    return 0;
}
*/


