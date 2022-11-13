/*#include<iostream>
using namespace std;


int main(){
    
    int N,i=1,j=1;
    cin>>N;
    while(i<=N){
        j=1;
        while(j<=i){
            char c='A'+N+j-i-1;
            cout<<c;
            j++;
        }
        i++;
        cout<<endl;
    }
}*/
/*#include <iostream>

using namespace std;

int main()
{
int n;
cin>>n;
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=n;j++){
    if(((i+j)%4==0) || (i==2 && j%4==0)){
       cout<<"*";
    }
    else{
       cout<<" ";
    }
    }
    cout<<endl;
}
    return 0;
}*/
/*#include <iostream>
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

}*/
/*#include<iostream>
using namespace std;

int main(){

    char c;
    c=cin.get();
    
    int countchar=0,countdigit=0,countspace=0;
    while(c!='$'){
        if(c>=97 && c<=122){
            countchar++;
        }
        else if(c>='0' && c<='9'){
            countdigit++;
        }else{ 
            if(c=='\n' ||  c==' ' || c=='\t'){
            countspace++;
            }
        }
        c=cin.get();
        
    }
    cout<<countchar<<" "<<countdigit<<" "<<countspace<<endl;
}*/
/*#include<iostream>
using namespace std;

int main() {
char N;
    int i=1,prev,curr;
    cin>>N;
    bool isDec=true;
    
    N=cin.get();
    prev=N;
    while(i<=N-1){
        N=cin.get();
        curr=N;
        
        if(prev==curr){
            cout<<"false"<<endl;
            break;
        }
        else{ 
            if(prev<curr){
            isDec=false;
            }
            else{
                if(isDec==true){
                    isDec=false;
               }
            }
      }
        prev=curr;
        i++;

    }
            if(isDec==false)
            cout<<"true"<<endl;

}*/
   /* #include <iostream>
using namespace std;

int func(int a) {
    //int b = 10;
    a = a + 10;
    //cout << a << " ";
    return a;
}

int main() {
    int a = 10;
    a=func(a);
    cout << a << " ";
}
/*int p = 100;
if(p > 20) {
    if(p < 20) {
        printf("coding");
    }
} else {
    printf("ninjas");
}*/

/*int N;
int i,j,k;
cin>>N;

for(i=1;i<=N;i++){
    for(j=1;j<=N;j++){
        if(j<=N+1-i)
          cout<<j;
        else
          cout<<"*";
    }
    for(j=N;j>=1;j--){
        if(j<=N+1-i)
          cout<<j;
        else
          cout<<"*";
    }
    cout<<endl;
}*/
    /*for(i=N;i<=1;i--){
        for(j=N;j<=1;j++){
        if(j<=N+1-i)
          cout<<j;
        else
          cout<<"*";
    }
}   */
    
  
    
    // Write your code here
  /*  int N,i,num,count=0;
    int max1=-100000000,max2=-100000000;
    
    cin>>N;
    for(i=1;i<=N;i++){
        cin>>num;
        if(num>max1){
            max1=num;
        }
        if(max2<max1 && max2!=max1){
            max2=num;
           count++;
        }
        
    }
    
    
*/
  



/*#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,C1,C2;
	int i=1;
	while(i<=T)
	{
	    cin>>C1;
	    cin>>C2;
	    if(C1<C2)
	      cout<<"FIRST"<<endl;
	    else if(C1>C2)
	      cout<<"SECOND"<<endl;
	    else
	      cout<<"ANY"<<endl;
	      
	      i++;
	}
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	int str,end;
	cin>>t;
	while(t--){
	    cin>>str;
	    cin>>end;
	    
	    if(str>end)
	        cout<<(str-end);
	    else
	        cout<<(end-str);
	}
	return 0;
}*/

