#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ans(0), count(0);
        string n;
        cin>>n;
        int hash[26] = {0};
        for(int i=0; i<n.length(); i++){
            hash[n[i] - 97]++;
        }
        sort(hash, hash+26);
        for(int i=0; i<26; i++){
            if(hash[i] > 1){
                ans++;
            }
            if(hash[i] == 1)count++;
        }
        ans += count/2;
        cout<<ans<<"\n";

    }
    return 0;
}