#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,5};
    int s=sizeof(arr)/sizeof(arr[10]);

    cout<<"enter "<<s<<" values\n";

    for(int i=1;i<s;i++)
    {
        cin>>arr[i];
    }

    cout<<"\n store data \n";

    for(int i=0; i<s;i++)
    if(arr[i]%2==0)
    {
        cout<<arr[i]<<"\t";
    }
}