#include <bits/stdc++.h>

using namespace std;
int shiftX[100000]={};
int shiftY[100000]={};
int alphaX[26][10000]={};
int alphaY[26][10000]={};
int alphaFrq[27]={};
int can[26]={};
int main(){
int shiftCtr=1;
int n,m,k;
cin>>n>>m>>k;
char key [30][30];
for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) {cin>>key[i][j] ;
     //storing the coordinates of the shift key and counting how many y shift keys exist
     if (key[i][j]=='S'){
        alphaFrq[26]++;
        shiftX[shiftCtr]=i;
        shiftY[shiftCtr]=j;
        shiftCtr++;
     }
     //storing the coordinates of the characters of the key board and counting the repeating of the characters
    else {
        alphaFrq[key[i][j]-97]++;
        alphaX[key[i][j]-97][alphaFrq[key[i][j]-97]]=i;
        alphaY[key[i][j]-97][alphaFrq[key[i][j]-97]]=j;

    }
    }
}
//checking the possibility of using one hand or two hands
for(int i=0;i<26;i++){
    double alphaMn=INT_MAX;
    //repeating the process of counting for every shift key and for ever letter
    for (int j=1;j<shiftCtr;j++){
        for (int l=1;l<=alphaFrq[i];l++){
          double x=sqrt( pow((shiftX[j]- alphaX[i][l] ),2) + pow((shiftY[j]-alphaY[i][l]),2) ) ;
          //finding the minimum distance between all this key in all positions and the shift key in all positions
          //because if he can type the letter with one hand and the letter was repeated on the keyboard there is no need to the other letter's key
          if (alphaMn>x){
           alphaMn=x;
        }}
    }
    //checking the possibility of pressing the key with one hand
  can[i]=  (alphaMn>k)?1:0;
  }

int q,use=0;
string word;
cin>>q;
cin>>word;
for (int i=0;i<word.size();i++){
        //if the lowercase letter not exist in the keyboard----> he can't type the word
    if (word[i]>=97){
        if (alphaFrq[word[i]-97]==0){
            cout<<"-1 \n";
            return 0 ;
        }
        continue ;
    }

    else {
        //if it's an uppercase letter so we checking if its lowercase letter is exist or no and  the shift key,
        // as he can't type the word if one of them is not exist
        if (alphaFrq[26]==0 || alphaFrq[word[i]-65]==0){
            cout<<"-1 \n";
            return 0;

        }
      // if the shift and the letter are existed, then he can type the word so we checking if he needs the two hands or one
    else if (can[word[i]-65]==1){
        use++;
    }
}
}
cout<<use<<endl;


 return 0;

}
