#include<iostream>
using namespace std;
int main(){
    
    for(int i=1;i<=5;i++){
        if(i==1 || i==3){
            for(int j=1;j<=5;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
        if(i == 2){
            cout<<"*   ";
            cout<<"    *";
            cout<<endl;
        }
        if(i==4 || i==5){
            cout<<"* ";
            cout<<endl;
        }
    }
    cout<<endl;
}