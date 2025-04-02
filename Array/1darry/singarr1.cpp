#include<iostream>
using namespace std;
int main()
{
//     int arr[5]={4,1,2,6,7};
//    for(int i=0;i<5;i++){
//     cout<<arr[i]<<"\t";
//    }
// --------------------------------
    // 
    // ----------------edit_________________

    int arr[10]={1,5,4};
    int s=sizeof(arr)/sizeof(arr[10]);
    cout<<"length of array= "<<s<<"\n";
    arr[5]=87;
    arr[2]=7;

    // ------ignore
    arr[12]=700; 
    // -------------
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    // ------------garbage-----------

    // for(int i=0;i<=s;i++){
    //     cout<<arr[i]<<"\t";-------------isme garbage value because aar size increase hogi but grabage bhi dega.
    // }

    // if ham value dege then value show else 0 ayegga.
}

