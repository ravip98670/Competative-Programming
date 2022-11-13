#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,i;
    int arr[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    
}


