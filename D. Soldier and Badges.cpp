#include <bits/stdc++.h>

using namespace std;
int main(){

int n,ctr=0,temp;
cin>>n;
int arr[n+1]={};
for (int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for (int i=1;i<n;i++){
    if (arr[i]==arr[i-1]){
        ctr++;
        arr[i]++;
        }
    else if(arr[i-1]>arr[i]){
        temp=arr[i-1]-arr[i]+1;
        ctr+=temp;
        arr[i]+=temp;
    }

}
cout<<ctr<<endl;
return 0;
}
/*
1 2 3 2 5
1 2 2 3 5
1 2 3 3 5 --> 1
1 2 3 4 5 --> 2
--------------
1 2 2 2 5
1 2 3 2 5 --> 1
1 2 3 4 5 --> 1+2--> 3
*/
