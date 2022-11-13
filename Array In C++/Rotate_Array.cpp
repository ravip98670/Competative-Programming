#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    //Write your code here
    
    
    
    /*int i,temp;
	while(d--){
        temp=input[0];
        for( i=0;i<n;i++){
            input[i]=input[i+1];
        }
        input[i-1]=temp;
    }*/
    
    
    
    
    
    int temp[100];
    for(int i=0;i<d;i++){
        temp[i]=input[i];
    }
    
    for(int i=0;i<n-d;i++){
        input[i]=input[i+d];
    }
    
    for(int i=n-d;i<n;i++ ){
        input[i]=temp[i-n+d];
    }
    
    
    
    
    /*int i=0,j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    
    i=0;
    j=n-d-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;  
    }
    
    i=n-d;
    j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;  
    }
    */   
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