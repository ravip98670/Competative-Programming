#include <iostream>
#include <algorithm>
using namespace std;

int tripletSum(int *arr, int n, int num)
{
	//Write your code here
	sort(arr,arr+n);
	int count = 0;


	for(int ind=0;ind<n-2;ind++){
		int left = ind + 1;
		int right = n - 1;

		int twoSum = num-arr[ind];
		while(left <= right){
			if(arr[left] + arr[right] < twoSum)
				left++;
			else if(arr[left] + arr[right] > twoSum)
				right--;
			else{
				int i = arr[left];
				int j = arr[right];

				if(i == j){
					int totalFromStartToEnd = (right - left) + 1;
					
					count += (totalFromStartToEnd * (totalFromStartToEnd - 1)/2);

					break;
				}

				int tempstr = left + 1;
				int tempen = right - 1;

				while(tempstr <= tempen && arr[tempstr] == i)
					tempstr++;
				while(tempen >= tempstr && arr[tempen] == j)
					tempen--;


				int totalFromStart = (tempstr - left);
				int totalFromEnd = (right - tempen);

				count += (totalFromStart * totalFromEnd);

				left = tempstr;
				right  = tempen;
			}
		}
	}
	return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}