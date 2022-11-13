// in this code we use a pre-defined function for round off a float number....

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
	double TotalSalary;
    double basic,hra,da,allow,pf;
    char grade;
    cin>>basic;
        cin>>grade;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    switch(grade)
    {
        case 'A':allow=1700;
            break;
        case 'B':allow=1500;
            break;
        default: allow=1300;
    }
    TotalSalary=basic+hra+da+allow-pf;
    /*int m,n;
    m=TotalSalary*10;
    n=m%10;
    if(n>=5)
        TotalSalary=int(TotalSalary+1);
    else
        TotalSalary=int(TotalSalary);*/
    cout<<lround(TotalSalary)<<endl;
}
