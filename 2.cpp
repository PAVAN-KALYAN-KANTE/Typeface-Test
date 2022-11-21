#include<bits/stdc++.h>
using namespace std;

signed main()
{
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    char c = b[b.length()-1];
    
    map<char,int> mp;
    
    for(auto i : a)
    {
        mp[i]++;
    }
    
     for(auto i : mp)
    {
        if(i.first==c)
        {
            cout<<i.second;   
        }
       
    }
   
}