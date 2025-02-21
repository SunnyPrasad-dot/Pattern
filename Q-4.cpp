#include<iostream>
using namespace std;
int main(){
   
    for(int i=2;i<=7;i++){
        for(int k=i;k>1;k--){
            cout<<"  ";
        }
        for(int j=i;j<=7 ; j++){
            if(j % 2 == 0){
            cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    
}