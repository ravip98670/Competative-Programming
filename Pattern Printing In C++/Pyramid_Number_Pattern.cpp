#include<iostream>
using namespace std;
int main()
{
    int n,i,j,space;
    cin>>n;
    i=1;
    int s=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        int s=i;
        j=1;
        while((j<=i)&&j!=0)
        {
            cout<<s;
            s--;
            j++;
        }
        
        int k=2;
            int m=1;
            
                 while(m<i)
                    {
                        cout<<k;
                        k++;
                        m++;
                    }
            

        


        i++;
        cout<<endl;
    }

}