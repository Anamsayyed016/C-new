#include<iostream>
using namespace std;
int main(){

    
    for(char r='a';r<='d';r++){
        for(char s=4;s>=r;s--){

            cout<<" ";
        }
        for(char c='a';c<=r;c++){

            cout<<c;
        }

        cout<<"\n";
    }
}