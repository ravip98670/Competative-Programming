#include <iostream>
#include <algorithm>
using namespace std;

int pairSum(int *arr, int n, int num)
{
	//Write your code here
	sort(arr,arr+n);

	int startIndex = 0;
	int endIndex = n-1;

	int pairs = 0;
	while(startIndex < endIndex){
		if(arr[startIndex] + arr[endIndex] < num)
			startIndex++;
		else if(arr[startIndex] + arr[endIndex] > num)
			endIndex--;
		else{
			int i = arr[startIndex];
			int j = arr[endIndex];

			if(i == j){
				int totalFromStartToEnd = (endIndex - startIndex) + 1;
				
				pairs += (totalFromStartToEnd * (totalFromStartToEnd - 1)/2);

				return pairs;
			}

			int tempstr = startIndex + 1;
			int tempen = endIndex - 1;

			while(tempstr <= tempen && arr[tempstr] == i)
				tempstr++;
			while(tempen >= tempstr && arr[tempen] == j)
				tempen--;


			int totalFromStart = (tempstr - startIndex);
			int totalFromEnd = (endIndex - tempen);

			pairs += (totalFromStart * totalFromEnd);

			startIndex = tempstr;
			endIndex  = tempen;
		}
	}
	return pairs;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}