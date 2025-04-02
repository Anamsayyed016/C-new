#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,5,4};
    int s=sizeof(arr)/sizeof(arr[10]);
    cout<<"length of array= "<<s<<"\n";
    cout<<"enter 10 values \n";
    // arr input llop
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
        // store input
    }
    cout<<"\n store data are\n";

    for(int i=0;i<s;i++)
    // 2nd loop for output
    {
        cout<<arr[i]<<"\t";
        // output show
    }
    
}