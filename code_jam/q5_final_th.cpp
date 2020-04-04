
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
        
       
        
            // pwel("Case #"<<(i+1)<<": POSSIBLE") 
            int m = (k/n);
            
            int a=1,b=2,c=3,d=4,e=5;
            if(m==2)   {a=2;b=1;}
            else if(m==3)   {a=3;c=1;}
            else if(m==4)   {a=4;d=1;}
            else if(m==5)   {a=5;e=1;}
            
            if(n==2)
            {
                if(k%n!=0)
                    pwel("Case #"<<(i+1)<<": IMPOSSIBLE")
                else
                {
                    pwel("Case #"<<(i+1)<<": POSSIBLE") 
                    cout<<a<<" "<<b<<'\n';
                    cout<<b<<" "<<a<<'\n';
                }
                
                
            }
            else if(n==3)
            {
                if(k%n!=0)
                    pwel("Case #"<<(i+1)<<": IMPOSSIBLE")
                else
                {
                    pwel("Case #"<<(i+1)<<": POSSIBLE") 
                cout<<a<<" "<<b<<" "<<c<<'\n';
                cout<<c<<" "<<a<<" "<<b<<'\n';
                cout<<b<<" "<<c<<" "<<a<<'\n';
                }
            }
            else if(n==4)
            {
                vi2d v v2d(n,n);
                bool flag=false;
                vi x(n),y(n),z(n),w(n);
                v[0][0]=a;v[0][1]=b;v[0][2]=c;v[0][3]=d;
                v[1][0]=b;v[1][1]=a;v[1][2]=d;v[1][3]=c;
                v[2][0]=c;v[2][1]=d;v[2][2]=a;v[2][3]=b;
                v[3][0]=d;v[3][1]=c;v[3][2]=b;v[3][3]=a;


                // cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n';
                // cout<<b<<" "<<a<<" "<<d<<" "<<c<<'\n';
                // cout<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
                // cout<<d<<" "<<c<<" "<<b<<" "<<a<<'\n';
                // cout<<'\n';
                
                int sum=0;
                int a[] = {0,1,2,3};  
                do {  
                    x=v[a[0]];
                    y=v[a[1]];
                    z=v[a[2]];
                    w=v[a[3]];

                    sum=x[0]+y[1]+z[2]+w[3];
                    if(sum==k)
                        {flag=true;
                            v[0]=x;
                            v[1]=y;
                            v[2]=z;
                            v[3]=w;
                            break;
                        }

                    // pwel(sum)
                } while ( next_permutation(a,a+4) );  
                
                if(flag)
                {
                    pwel("Case #"<<(i+1)<<": POSSIBLE") 
                cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[0][2]<<" "<<v[0][3]<<'\n';
                cout<<v[1][0]<<" "<<v[1][1]<<" "<<v[1][2]<<" "<<v[1][3]<<'\n';
                cout<<v[2][0]<<" "<<v[2][1]<<" "<<v[2][2]<<" "<<v[2][3]<<'\n';
                cout<<v[3][0]<<" "<<v[3][1]<<" "<<v[3][2]<<" "<<v[3][3]<<'\n';
                }
                else
                {
                        pwel("Case #"<<(i+1)<<": IMPOSSIBLE") 
                }

            }
            else if(n==5)
            {
                vi2d v v2d(n,n);
                bool flag=false;
                vi x(n),y(n),z(n),w(n),t(n);

                v[0][0]=a;v[0][1]=b;v[0][2]=c;v[0][3]=d;v[0][4]=e;
                v[1][0]=c;v[1][1]=a;v[1][2]=e;v[1][3]=b;v[1][4]=d;
                v[2][0]=b;v[2][1]=d;v[2][2]=a;v[2][3]=e;v[2][4]=c;
                v[3][0]=e;v[3][1]=c;v[3][2]=d;v[3][3]=a;v[3][4]=b;
                v[4][0]=d;v[4][1]=e;v[4][2]=b;v[4][3]=c;v[4][4]=a;

                cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<'\n';
                cout<<c<<" "<<a<<" "<<e<<" "<<b<<" "<<d<<'\n';
                cout<<b<<" "<<d<<" "<<a<<" "<<e<<" "<<c<<'\n';
                cout<<e<<" "<<c<<" "<<d<<" "<<a<<" "<<b<<'\n';
                cout<<d<<" "<<e<<" "<<b<<" "<<c<<" "<<a<<'\n';
                cout<<'\n';

                int sum=0;
                int a[] = {0,1,2,3,4};  
                do {  
                    x=v[a[0]];
                    y=v[a[1]];
                    z=v[a[2]];
                    w=v[a[3]];
                    t=v[a[4]];

                    sum=x[0]+y[1]+z[2]+w[3]+t[4];
                    if(sum==k)
                        {flag=true;
                            v[0]=x;
                            v[1]=y;
                            v[2]=z;
                            v[3]=w;
                            v[4]=t;
                            break;
                        }

                    // pwel(sum)
                } while ( next_permutation(a,a+5) );  
                
                if(flag)
                {
                    pwel("Case #"<<(i+1)<<": POSSIBLE") 
                    cout<<v[0][0]<<" "<<v[0][1]<<" "<<v[0][2]<<" "<<v[0][3]<<" "<<v[0][4]<<'\n';
                    cout<<v[1][0]<<" "<<v[1][1]<<" "<<v[1][2]<<" "<<v[1][3]<<" "<<v[1][4]<<'\n';
                    cout<<v[2][0]<<" "<<v[2][1]<<" "<<v[2][2]<<" "<<v[2][3]<<" "<<v[2][4]<<'\n';
                    cout<<v[3][0]<<" "<<v[3][1]<<" "<<v[3][2]<<" "<<v[3][3]<<" "<<v[3][4]<<'\n';
                    cout<<v[4][0]<<" "<<v[4][1]<<" "<<v[4][2]<<" "<<v[4][3]<<" "<<v[4][4]<<'\n';
                }
                else
                {
                        pwel("Case #"<<(i+1)<<": IMPOSSIBLE") 
                }



            }

            
        
        
    }

}
