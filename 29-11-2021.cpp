// Q1) 1353B   Two Arrays and Swaps 


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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n,0);
        vector<int>brr(n,0);
        int arr_org_sum = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr_org_sum = arr_org_sum + arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        if(k == 0)
        {
            cout<<arr_org_sum;
        }
        else
        {
            sort(arr.begin(),arr.end());
            sort(brr.begin(),brr.end(),greater<int>());
            int start = 0;
            while(k--)
            {
                if(arr[start] < brr[start])
                {
                    swap(arr[start],brr[start]);
                }
                start++;
            }
            int summation = 0;
            for(int i=0;i<n;i++)
            {
                summation += arr[i];
            }
            cout<<summation;
        }
        cout<<"\n";
    }
    return 0;
}
*/



// Q2) 1374A  Required Remainder 


/*
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define setbits(x) __buitlin_popcount(x)
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
        ll x,y,n;
        cin>>x>>y>>n;
        ll rem = n % x;
        if(rem == y)
        {
            cout<<n;
        }
        else if(rem  > y)
        {
            cout<<(n - (rem - y));
        }
        else 
        {
            // iss case me rem is less than y 
            // so kya kru ???
            cout<<(n - rem - (x - y));
        }
        cout<<"\n";
    }
    return 0;
}
*/

