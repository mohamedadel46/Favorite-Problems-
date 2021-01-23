#include <bits/stdc++.h>
using namespace std ;

int main(){
int n;
cin>>n;
long long inp[4];
long long sum ;

for (int j=0;j<n;j++){
        sum=0;
for (int i=0;i<4;i++){
    cin>>inp[i];
    sum+=inp[i];

}

 if (sum%3==0&&inp[0]<=sum/3 &&inp[1]<=sum/3 &&inp[2]<=sum/3)
    {cout<<"YES"<<endl;}
else
{cout<<"NO"<<endl;}

}
return 0;
}
/*
the total coins should be divisible by 3
and each sister's coins should be less than or equal the third of total coins
*/
