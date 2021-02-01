#include <bits/stdc++.h>

using namespace std;

int main(){
    string key ="qwertyuiopasdfghjkl;zxcvbnm,./";
    string word;
    char shift;
    cin>>shift>>word;
    if (shift == 'R'){
    for (int i=0;i<word.size();i++){
       for (int j=0;j<31;j++){
        if (word[i]==key[j]){
            word[i]=key[j-1];
        break ;
       }
      }
    }
  }
    else {
        for (int i=0;i<word.size();i++){
        for (int j=0;j<31;j++){
        if (word[i]==key[j]){
            word[i]=key[j+1];
        break ;
       }
     }
    }
  }
cout<<word<<endl;
    return 0;
}
