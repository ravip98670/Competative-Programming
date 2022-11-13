#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    //Write your code here
    
    int count1=0,count2=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            count1++;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            count2++;
    }
    
    for(int i=0;i<count1;i++){
        arr[i]=0;
    }
    for(int i=count1;i<count2+count1;i++){
        arr[i]=1;
    }
    for(int i=count2+count1;i<n;i++){
        arr[i]=2;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;

		cin >> size;
		int *arr = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}