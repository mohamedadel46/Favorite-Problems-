#include <bits/stdc++.h>

using namespace std;


int main(){
int n ;
cin>>n;
while (n--){
    string pass,hPass;
    int freq1[200]={},freq2[200]={},len1,len2;
    cin>>pass>>hPass;
    len1=pass.size();
    len2=hPass.size();
    if (pass.size()>hPass.size()){
        cout<<"NO \n";
        continue ;
    }
    for (int i=0;i<len1;i++){
        freq1[pass[i]]++;
        freq2[hPass[i]]++;

    }
    int flag=1;
    for (int i='a';i<='z';i++){
        if (freq1[i] !=freq2[i]) { flag =0; break;}
    }
    for (int i=len1;i<len2 && flag==0;i++){
        freq2[hPass[i]]++;
        freq2[hPass[i-len1]]--;
        flag=1;
        for (int j='a';j<='z';j++){
            if (freq1[j] != freq2[j]){ flag=0; break;}
        }
    }

    if (flag==1) cout<<"YES \n";
    else        cout <<"NO \n";
}
return 0;
}
