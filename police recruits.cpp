#include <iostream>

using namespace std;

int main()
{
    size_t n,temp=0,total=0;
    cin>>n;
    int a[n+1]={};
    for (size_t i=0;i<n;++i){
        cin>>a[i];
        if (a[i]>0)       //if the element a[i] is positive(hiring), then increment total by a[i], if a[i] is negative(crime) then we go to else if and check it
            total+=a[i];
        else if (total>0)  //else if the there a number >0 in the total then there is free man to solve the crime, then total is decrement by 1
            total--;
        else
            temp++;      // if the two conditions not satisfied the the crime is untreated, so the total untreated crimes increases by 1
    }

    cout<< temp<<endl;
    return 0;
}
