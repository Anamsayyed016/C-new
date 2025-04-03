#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5,5};
    int sum=0;
    int s=sizeof(arr)/sizeof(arr[0]);

        for(int i=0;i<4;i++){
            sum=sum+arr[i];
        }
    
        cout<<sum;
}