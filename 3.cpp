#include<bits/stdc++.h>
using namespace std;
vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
    resultArray.insert(resultArray.begin(), x%10);
    x /= 10;
    if(x == 0)
        return resultArray;
    }
}

bool isValid(int n){
    if(n==0||n==1||n==2||n==5||n==6||n==8||n==9){
        return true;
    }else{
        return false;
    }
}

bool isValidNum(int n){
    vector <int>digarray;
    digarray=integerToArray(n);
    for(auto i:digarray){
        if(!isValid(i)){
            return false;
        }
    }
    return true;
}


signed main(){
    int n;
    cin>>n;
    int cnt=0,i=1;
    int res;
    while(cnt!=n){
        if(isValidNum(i)){
            cnt++;
            res=i;
        }i++;
    }
    cout<<res<<endl;
}