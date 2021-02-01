#include <bits/stdc++.h>

using namespace std;

int main(){

int ans=0,k,temp;
string bi;
cin>>bi;
k=bi.size();
ans=k/2;
temp=k%2;
bool flag = false;
 for (int i=1;i<k;i++){
   if (bi[i]=='1')
    flag= true;
    break;
 }
 if (flag && temp)
    ans++;

cout<<ans<<endl;
return 0;
}

/*
https://youtu.be/4ITr6GaZP-w
*/
