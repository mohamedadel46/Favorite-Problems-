
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q ;
    cin>>n>>k>>q;
    int arr[200005]={}, arr2[200008]={};

    for (int i=1;i<=n;i++){
        int l,r;
     cin>>l>>r;
       arr[l]++; //mark the beginning of the interval
       arr[r+1]--; //mark the end of the interval
        }

  for (int i=1;i<200001;i++) arr[i]+=arr[i-1]; //evaluate the repeated elements  using cumulative (prefix) sum

  //making the zeros and ones array
    for (int h=1;h<200001;h++){
        if (arr[h]>=k){
            arr2[h]=1;
        }
        else
            arr2[h]=0;
    }
  for (int i=1;i<200001;i++) arr2[i]+=arr2[i-1];   //evaluating the sum of zeros and ones array

   for(int i=0;i<q;i++){
int l2,r2;
cin>>l2>>r2;

cout<<arr2[r2]-arr2[l2-1] <<endl;                 //printing the difference between the last element of the query(r2) in the sum array
                                                  // and the element l2-1 in the sum array to get # of repeated elements (output)
   }

    return 0;
    }

    //https://youtu.be/S0nKXwwWG8Y


