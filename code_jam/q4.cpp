#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, tt = 1;
    string r;
    cin >> a >> b;
    while(tt <= a) {
        int arr[b];
        for(int i=0;i<b;i++) {
            printf("%d\n", i+1);
            fflush(stdout);
            cin >> arr[i];
        }
        for(int i=0;i<b;i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
        fflush(stdout);
        cin >> r;
        if(r == "N") {
            exit(1);
        }
        tt++;
    }
    return 0;
}