#include<iostream>
using namespace std;
int main()
{
    // int a[5]={6,5,5,2}
    // for(auto x:a){
        //     // foreach program "auto used for data type like int,float so on."
        //     cout<<x<<" ";
        // }
        
        // =========================USER INPUT===============================================
        
        // user input using foreach
        int a[5];

        for(auto &x :a){
            cin>>x;
        }

        for(auto x :a)
        {
            cout<<x<<" ";
        }

}