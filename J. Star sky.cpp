#include <bits/stdc++.h>

using namespace std;

int main(){
int star[102][102][11];
int n,q,c;
cin>>n>>q>>c;
for (int i=0;i<n;i++){
    int x,y,b;
    cin>>x>>y>>b;
    //computing how many stars in the point (x,y) have the same brightness b
    star[x][y][b]++;
}
for (int i=1;i<101;i++){
    for (int j=1;j<101;j++){
        for (int k=0;k<11;k++){
                //finding the sum of all brightnesses in a specified location
            star[i][j][k] += star[i-1][j][k] + star[i][j-1][k] - star[i-1][j-1][k];
        }
    }
}

long long t;
int x1,x2,y1,y2;
while (q--){
    cin>>t>>x1>>y1>>x2>>y2;
    int sum=0;
    for (int i=0;i<=c;i++){
        //finding the  brightness int the moment i and if its greater than the max brightness so it will be zero (explaining why c+1)
        //and the sum of all brightnesses in the sub rectangle (x1,y1) and (x2,y2) in the time t
        sum +=((t+i)%(c+1)) *(star[x2][y2][i]- star[x1-1][y2][i] - star[x2][y1-1][i] + star[x1-1][y1-1][i]) ;
    }
    cout<<sum<<endl;
}


return 0;
}
