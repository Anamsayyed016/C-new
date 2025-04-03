#include<iostream>
using namespace std;
int main()
{
    int arr[10]={5,2,4,3,9};
    int max=arr[0];

    int s=sizeof(arr)/sizeof(arr[10]);
    for(int i=0;i<4;i++)

    {
        if(arr[i]<max)
        arr[i]=max;
    }
    cout<<max;
}