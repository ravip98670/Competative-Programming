#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    //Write your code here
	int val=1;
    int str=0;
    int end=n-1;
    
    while(val<=n){
        arr[str]=val;
        val++;
        if(n%2!=0 && str==((n-1)/2))
           break;
        arr[end]=val;
        val++;
        str++;
        end--;
    }

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}