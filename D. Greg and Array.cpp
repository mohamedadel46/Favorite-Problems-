#include <cstdio>
#include<bits/stdc++.h>


long long arr[100002];
long long left[100002];
long long right[100002];
long long operate[100002];
long long diff[100002] ;
long long tempSum[100002] ;
int main(){

int n,m,k;
scanf("%d %d %d",&n,&m,&k);

  for (int i=1;i<=n;i++){
    scanf("%lld",&arr[i]);
  }
for (int i=1;i<=m;i++){
scanf("%lld %lld %lld ",&left[i],&right[i],&operate[i]);
}
for (int i=1;i<=k;i++){
    int x,y;
scanf("%d %d",&x,&y);
    diff[x]++;
    diff[y+1]--;
}
for (int i=1;i<=m;i++){
    diff[i]+=diff[i-1];
    operate[i]*= diff[i];
}
for (int i=1;i<=m;i++){
    tempSum[left[i]]+=operate[i];
    tempSum[right[i]+1]-=operate[i];
}
for (int i=1;i<=n;i++){
    tempSum[i]+=tempSum[i-1];
    arr[i]+=tempSum[i];
}

for (int i=1;i<=n;i++){
    printf("%lld ",arr[i]);
}

    return 0;

}

/*
references of solution
https://www.programmersought.com/article/62222180701/
 https://codeforces.com/blog/entry/78762
 */
