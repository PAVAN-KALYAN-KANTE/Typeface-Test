#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;n>0;i++){
        v.push_back(n%3);
        n/=3;
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
}