#include <bits/stdc++.h>

using namespace std;

int main(){
int n;
cin>>n;
long long arr[100002];
for (int i=1;i<=n;i++){
    cin>>arr[i];
}
if (n==1){
    cout<<"1 "<<"1";
   cout<<endl<<arr[1]*(-1)<<endl;
    cout<<"1 "<<"1";
   cout<<endl<<"0"<<endl;
    cout<<"1 "<<"1";
   cout<<endl<<"0"<<endl;

   return 0;

}
cout<<"1 "<<n<<endl;
for (int i=1;i<=n;i++){
    cout<<arr[i]*(-n)<<" ";
}

cout<<endl <<"1 "<<n-1<<endl;
for (int i=1;i<=n-1;i++){
    cout<<arr[i]*(n-1)<<" ";
}
cout<<endl<<n<<" "<<n<<endl;
cout<<arr[n]*(n-1)<<endl;
return 0;
}
