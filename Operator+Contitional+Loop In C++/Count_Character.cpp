#include<iostream>
using namespace std;

int main(){

    char c,a;
    c=cin.get();
   // cin>>c;
    int countchar=0,countdigit=0,countspace=0;
    while(c!='$'){
       if(c>=97 && c<=122){
            countchar++;
        }
        else if(c>='0' && c<='9'){
            countdigit++;
        }else{ 
            
           if(c=='\n' || c==' ' || c=='\t'){
            countspace++;
                
           }
        }
        c=cin.get();
    }
    cout<<countchar<<" "<<countdigit<<" "<<countspace<<endl;
    }
     
