// Q1)  381A  Sereja and Dima 


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
    int n;
    cin>>n;
    vector<int>s(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int sereja_sum = 0;
    int dima_sum = 0;
    int left = 0;
    int right = n-1;
    int ct = 1;
    bool start = true;
    while(ct <= n)
    {
        if(start)
        {
            int l1 = s[left];
            int l2 = s[right];
            if(l1 > l2)
            {
                sereja_sum += l1;
                left++;
            }
            else
            {
                sereja_sum += l2;
                right--;
            }
            start = false;
        }
        else
        {
            int l1 = s[left];
            int l2 = s[right];
            if(l1 > l2)
            {
                dima_sum += l1;
                left++;
            }
            else 
            {
                dima_sum += l2;
                right--;
            }
            start = true;
        }
        ct++;
    }
    cout<<sereja_sum<<" "<<dima_sum;
    return 0;
}
*/




// Q2)  1472B  Cards for friends 



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
    
    ll w,h,n;
    cin>>w>>h>>n;
    ll main_ans = 0;
    ll ans1 =  1;
    while((w % 2) == 0)
    {
        w = w / 2;
        ans1 = ans1 * 2;
    }
    while((h % 2) == 0)
    {
        h = h / 2;
        ans1 = ans1 * 2;
    }
    if(ans1 >= n)
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }
    }
    return 0;
}
*/

