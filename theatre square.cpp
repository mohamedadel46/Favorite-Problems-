#include <bits/stdc++.h>

using namespace std;

int main()
{
unsigned long  int n,m,a;
cin>>n>>m>>a;
unsigned long long int height,length;
height=(n%a==0)?n/a : n/a+1 ; //finding the integer number of stones along the first side of the rectangular.
length=(m%a==0)?m/a : m/a+1 ; //finding the integer number of stones along the second side of the rectangular.
cout<<height*length<<endl;

    return 0;
}
//(unsigned long long int )
