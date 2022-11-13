#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
 int Max1=-2147483648 ,Max2=-2147483648 ;
   
    for(int i=0;i<n;i++)
    {
        if(Max1<input[i])
        {
           Max1=input[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(Max2<input[i] && Max1!=input[i])
        {
            Max2=input[i];
        }
    }
    return Max2;
}
    
    

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}