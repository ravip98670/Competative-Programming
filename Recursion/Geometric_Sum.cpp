#include <iostream>
#include <math.h>
#include <iomanip>

int n=0;
double geometricSum(int k) 
{
    // Write your code here
    if(n == k)
        return 1;
    else{
        n++;
        return (1/pow(2,n)+geometricSum(k));
    }   

}


using namespace std;

int main() {
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;   
}
