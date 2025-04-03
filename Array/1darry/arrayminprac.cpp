#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5,12,6};
    int min=arr[0];
    int s=sizeof(arr)/sizeof(arr[10]);

        for(int i=0;i<4;i++){
            if(arr[i]>4)
            arr[i]=min;
        }
        cout<<min;
}