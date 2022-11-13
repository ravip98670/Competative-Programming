#include<iostream>
using namespace std;

int printTable(int s,int e,int w)
{
        while(e>=s)
    {
        cout<<s<<" "<<((s-32)*5)/9<<endl;
        s=s+w; 
        }   
}
int main(){
    int start, end, step;
    cin >> start >> end >> step;
  
   printTable(start, end, step);

}


