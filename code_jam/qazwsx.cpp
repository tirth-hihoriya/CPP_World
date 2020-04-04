
#include <iostream>
#include <fstream>

#include <list>
#include <set>
#include <unordered_set>
#include <vector>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm> 
#include <stdexcept>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <cmath>
// #include <windows.h>  // Sleep()

// #include <bits/stdc++.h>

#define XLR8 ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define PI   3.141592653589
#define int long long
#define INF LLONG_MAX
#define NINF LLONG_MIN
#define INT_SIZE sizeof(long long) * 8
#define fo(i, a, b) for(int i=a;i<b;i++)
#define rfo(i, a, b) for(int i=a;i>=b;i--)
#define GCD(a, b) __gcd(a,b)
#define sn(n) cin >> n;
#define endl '\n'
#define pwel(n) cout << n << endl;
#define vi vector<int>
#define vi2d vector<vector<int>>
#define v2d(n,m) (n,vector<int>(m));       // vi2d v v2d(n,m)
#define vpii vector<pair<long long, long long> >
#define mii map<long long, long long>
#define pii pair<long long, long long>
#define si set<long long>
#define qi queue<long long>
#define pb push_back
#define pf push_front
#define FOR_EACH_TESTCASE int t;sn(t);while(t--)
#define TESTCASES 1

using namespace std;


signed main()
{
    int t;sn(t)
    fo(i,0,t)
    {
        
		int n,k;sn(n)sn(k)
        int m = (k/n);
            
        cout<<"Case #"<<(i+1)<<": ";
        int a=1,b=2,c=3,d=4,e=5;
        if(m==2)   {a=2;b=1;}
        else if(m==3)   {a=3;c=1;}
        else if(m==4)   {a=4;d=1;}
        else if(m==5)   {a=5;e=1;}
        
        if(n==2)
        {
            if(k%n!=0)
                pwel("IMPOSSIBLE")
            else
            {
                pwel("POSSIBLE") 
                cout<<a<<" "<<b<<'\n';
                cout<<b<<" "<<a<<'\n';
            }
            
            
        }
        else if(n==3)
        {
            if(k%n!=0)
                pwel("IMPOSSIBLE")
            else
            {
                pwel("POSSIBLE")
            cout<<a<<" "<<b<<" "<<c<<'\n';
            cout<<c<<" "<<a<<" "<<b<<'\n';
            cout<<b<<" "<<c<<" "<<a<<'\n';
            }
        }
        else if(n==4 && k%n==0)
        {
            pwel("POSSIBLE")
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
            cout<<b<<" "<<a<<" "<<d<<" "<<c<<'\n';
            cout<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
            cout<<d<<" "<<c<<" "<<b<<" "<<a<<'\n';

        }

        else if(n==5 && k%n==0)
        {
            pwel("POSSIBLE")
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<'\n';
            cout<<c<<" "<<a<<" "<<e<<" "<<b<<" "<<d<<'\n';
            cout<<b<<" "<<d<<" "<<a<<" "<<e<<" "<<c<<'\n';
            cout<<e<<" "<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
            cout<<d<<" "<<e<<" "<<b<<" "<<c<<" "<<a<<'\n';
            
        }


		else if(n==4 && k==6)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(n==4 && k==7)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(n==4 && k==9)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<3<<endl;
		}
		else if(n==4 && k==10)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
		}
		else if(n==4 && k==11)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<2<<" "<<4<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<endl;
		}
		else if(n==4 && k==13)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(n==4 && k==14)
		{
			pwel("POSSIBLE")
			cout<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
		}
		else if(n==5 && k==7)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<2<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<4<<" "<<5<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(n==5 && k==8)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<5<<" "<<1<<endl;
			cout<<4<<" "<<5<<" "<<1<<" "<<2<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
		}
		else if(n==5 && k==9)
		{
			pwel("POSSIBLE")
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<3<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
		}
		else if(n==5 && k==11)
		{
			pwel("POSSIBLE")
			cout<<4<<" "<<1<<" "<<2<<" "<<3<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<3<<" "<<4<<" "<<1<<endl;
		}
		else if(n==5 && k==12)
		{
			pwel("POSSIBLE")
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<5<<" "<<1<<" "<<3<<endl;
		}
		else if(n==5 && k==13)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<3<<" "<<4<<" "<<1<<" "<<5<<endl;
			cout<<3<<" "<<2<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<1<<" "<<5<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<endl;
		}
		else if(n==5 && k==14)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<" "<<5<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<5<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(n==5 && k==16)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<5<<" "<<3<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(n==5 && k==17)
		{
			pwel("POSSIBLE")
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<5<<" "<<3<<" "<<1<<endl;
			cout<<5<<" "<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(n==5 && k==18)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<5<<" "<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(n==5 && k==19)
		{
			pwel("POSSIBLE")
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
		}
		else if(n==5 && k==21)
		{
			pwel("POSSIBLE")
			cout<<3<<" "<<5<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<5<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<" "<<5<<endl;
		}
		else if(n==5 && k==22)
		{
			pwel("POSSIBLE")
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<5<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
		}
		else if(n==5 && k==23)
		{
			pwel("POSSIBLE")
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<" "<<5<<endl;
		}
		else pwel("IMPOSSIBLE")
	
            
        
        
    }

}
