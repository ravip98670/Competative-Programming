#include <iostream>
using namespace std;

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    output[100]={0};
    int sum=0,sum1=0,sum2=0;
    int m=1,n=1;
	for(int i=size1-1;i>=0;i--){
        sum1=sum1+input1[i]*m;
        m *= 10;
    }
    
    for(int i=size2-1;i>=0;i--){
        sum2=sum2+input2[i]*n;
        n *= 10;
    }
    
    sum=sum1+sum2;
    int r=0;
    if(size1>size2){
        for(int i=size1;i>0;i--){
            r=sum%10;
            sum=sum/10;
            output[i]=r;
        }
        
    }
    else if(size1<size2){
        for(int i=size2;i>0;i--){
            r=sum%10;
            sum=sum/10;
            output[i]=r;
        }
    }
    else{
        for(int i=size1;i>-1;i--){
            r=sum%10;
            sum=sum/10;
            output[i]=r;
        }
        
    }
        
        
    
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}