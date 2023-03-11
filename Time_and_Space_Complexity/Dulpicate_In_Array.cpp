#include <iostream>
using namespace std;

int findDuplicate(int *arr, int n)
{
    //Write your code here
    int sum = 0;
    for(int i=0;i<n-1;i++){
        sum += i;
    }

    int sumofEle = 0;
    for(int i=0;i<n;i++){
        sumofEle += arr[i];
    }
    return (sumofEle - sum);
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

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}