#include <bits/stdc++.h>
using namespace std ;

int main(){
    char temp;
    char sq[5][5]={};
    for (int i=1;i<=4;i++){
        for (int j=1;j<=4;j++){
            cin>>temp ;
  sq[i][j]=(temp=='#')? 1 : 2;
    }
    }
  for (int i=1;i<=4;i++){
    for (int j=1;j<=4;j++){
        sq[i][j]+=sq[i-1][j];
    }
  }
   for (int i=1;i<=4;i++){
    for (int j=1;j<=4;j++){
        sq[i][j]+=sq[i][j-1];
    }
  }
int sm=0,flag=0;
for (int i=0;i<=2;i++){

    for (int j=0;j<=2;j++){
        flag=0;
        sm=sq[i+2][j+2]-sq[i+2][j]-sq[i][j+2]+sq[i][j];
        if (sm<=8&&sm>=4&&sm!=6){
            cout<<"YES"<<endl;
            return 0;
            }
        else
        flag=1;


    }
}
    if (flag==1)
    cout<<"NO";

    return 0;
}
