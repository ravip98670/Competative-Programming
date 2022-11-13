#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    //Write your code here
    if(size%2==0){
    for(int i=0;i<size;i++){
        int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        i++;
    }
    }
    else{
     for(int i=0;i<size-1;i++){
        int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        i++;
    }
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
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}