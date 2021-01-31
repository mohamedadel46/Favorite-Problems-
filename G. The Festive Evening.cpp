#include <bits/stdc++.h>

using namespace std;

int main(){
int n,k,ctr=0,freq[100]={},gate[100]={};
string s;
cin>>n>>k>>s;
for (int i=0;i<s.size();i++){
    freq[s[i]]++;
    gate[s[i]]=1;
}
for (int i=0;i<s.size();i++){
    freq[s[i]]--;
    if (gate[s[i]]==1){ ctr++; }
    if (ctr>k){
     cout<<"YES \n";
    return 0;
    }
    if (freq[s[i]]==0){
        ctr--; }

  gate[s[i]]=0;
}
cout<<"NO \n";


return 0;
}

/*
8 2
AABCCBBA
----------
S    A B C D E
freq 3 3 2 0 0
gate 1 1 1
s[0] A-->3 , 1-->2 , 0 -->CTR++
S[1] A-->2 , 0-->1 , 0 -->CTR NOT CHANGED (GATE[S[i]] !=1 )
S[2] B-->3 , 1-->2 , 0 -->CTR++
S[3] C-->2 , 1-->1 , 0 --> CTR++
CTR>K--> 3>2 -->YES AND CLOSE THE PROGRAM
*/
