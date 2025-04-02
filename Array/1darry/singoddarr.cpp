#include<iostream>
using namespace std;
int main()
{
    int arr [5] ={1,5,4};
    int s=sizeof(arr)/sizeof(arr[10]);
    cout<<"length of array= "<<s<<"\n";
    cout<< "enter " <<s<< " values\n";
    // arr input loop
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
        // store input
    }
    cout<<"\n store data are\n";

    for(int i=0;i<s;i++)
    if(arr[i]%2!=0)
    
    // 2nd loop for output
    {
        cout<<arr[i]<<"\t";
        // output show
    }
    
}
// wap to display only even value in given array
// wap to display minimum  value in array
// wap to display max value in an array\
// wap to display the sum of values of an array