
#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
	//Write your code here
    int i,j;
    int k=0;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size ;j++){
            if(input[i]+input[j]==x)
                k++;
        }
    }
    return k;
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