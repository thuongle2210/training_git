#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        for (int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        bool ok=true;
        if (n==1) {
            cout<<"YES\n";
            continue;
        }
        else {
            for (int j=1;j<n;j++){
                if (a[j]-a[j-1]>1) {
                    ok=false;}
            }
        }
        if (ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
}