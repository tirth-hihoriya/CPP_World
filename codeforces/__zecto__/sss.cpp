#include <bits/stdc++.h>

#define pb push_back
#define fo(i, a, b) for(int i=a;i<b;i++)
#define GCD(a, b) __gcd(a,b)
#define TESTCASE int t;cin>>t;while(t--)
#define INF LLONG_MAX
#define NINF LLONG_MIN

using namespace std;

// threading function


int main(int argc, char const *argv[]) {

  int n,m;std::cin >> n>>m;
  int s[n] = {0};
  fo(i,0,n) {
    std::cin >> s[i];
  }

  sort(s, s+n);

  for (int i = 1; i <= n; i++) {
    int sum = 0;
    
    for (int j = i-1; j >= 0; j--) {
      sum += s[j] * ((i-j-1)/m + 1);
    }
    std::cout << sum << '\n';
  }

  return 0;
}