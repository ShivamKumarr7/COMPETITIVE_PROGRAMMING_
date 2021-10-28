// Q1) 116A   TRAM

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
    int real_ans = 0;
    int ans = 0;
    int first_station_dept = 0;
    int first_station_arrival = 0;
    cin>>first_station_dept>>first_station_arrival;
    ans = ans + first_station_arrival;
    real_ans = ans;
    n = n - 1;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        ans = ans - a;
        if(ans > real_ans)
        {
            real_ans = ans;
        }
        ans = ans + b;
        if(ans > real_ans)
        {
            real_ans = ans;
        }
    }
    cout<<real_ans;
}
*/


// Q2) 791A   BEAR AND BIG BROTHER


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
    int a,b;
    cin>>a>>b;
    // a gets triple after every year and b gets double after every year
    int ct = 0;
    while(a <= b)
    {
        ct++;
        a = a * 3;
        b = b * 2;
    }
    cout<<ct;
    return 0;
}
*/


