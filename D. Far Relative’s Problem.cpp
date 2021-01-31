#include <bits/stdc++.h>

using namespace std;

int main(){
    int female[400]={} ,male[400]={};
    int n;
    cin>>n;
while(n--){
    char gender;
    int l,r;
    cin>>gender>>l>>r;
    if (gender =='F'){
        female[l]++;
        female[r+1]--;
    }
    else {
        male[l]++;
        male[r+1]--;
    }
}
int ctr=0;
    for (int i=1;i<=366;i++){
        female[i]+=female[i-1];
        male[i]+=male[i-1];
    }

    for (int i=1;i<=366;i++){
        ctr=max(ctr,2*min(male[i],female[i]));

    }

    cout<<ctr<<endl;
 return 0;
}
/*
4
M 1 3 --> 1 2 3 --->   1 1 1 0 0
                       1 2 3 4 5
M 2 5 --> 2 3 4 5 ---> 0 1 1 1 1
2 M -----------------> 1 2 2 1 1
F 1 5 --> 1 2 3 4 5--> 1 1 1 1 1
F 1 5 --> 1 2 3 4 5--> 1 1 1 1 1
2F ------------------> 2 2 2 2 2
counter -------------> 2 4 4 4 4
*/
