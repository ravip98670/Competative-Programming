#include <iostream>
using namespace std;

int main()
{
    int N,flag,i,j;
    cin>>N;
    
    i=2;
    while(i<=N)
    {
        flag=0;
        j=2;
        while(j<i)
        {
            if(i%j==0){
                flag++;
                break;
            }
            j++;
        }
        if(flag==0)
            cout<<j<<endl;
        i++;
    }

}
