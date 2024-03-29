#include <iostream>
using namespace std;

void reverse(int *input,int start,int end){
    
    while(start < end){
        int temp = input[start];
        input[start] = input[end];
        input[end]  = temp;
        start++;
        end--;
    }
}
void rotate(int *input, int d, int n)
{
    //Write your code
    if(d >= n && n != 0)
        d = d%n;
    else if(n == 0)
        return;
    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}