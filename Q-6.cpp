#include<iostream>
using namespace std ;
int main(){
   
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k=4;k>=i;k--){
            cout<<" ";
        }
        for(int l=4;l>=i;l--){
            cout<<"   ";
        }
            for(int m=i;m>=1;m--){
                cout<<m<<" ";
            }
        cout<<endl;
    }
}