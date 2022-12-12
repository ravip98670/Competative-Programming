#include<iostream>
/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. This can be done by calling a helper function from given function. The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/
int partition(int input[],int start,int end){
	int pivot=input[start];
	int count=0;

	for(int i=start+1;i<=end;i++){
		if(input[i] <= pivot){
			count++;
		}
	}
	int pivotIndex=start+count;
	//int temp=input[start];
	input[start]=input[pivotIndex];
	input[pivotIndex]=pivot;

	int i=start,j=end;
	while(i < pivotIndex && j > pivotIndex){
		if(input[i] <= pivot)
			i++;
		else if(input[j] > pivot)
			j--;
		else{
			int temp=input[i];
			input[i]=input[j];
			input[j]=temp;
			i++;
			j--;
		}
	}
	return pivotIndex;
}

void quick_Sort(int input[], int start, int end) {
	if(start >= end)
		return;

		int pi=partition(input,start,end);
		quick_Sort(input,start,pi-1);
		quick_Sort(input,pi+1,end);
	
}


void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
  quick_Sort(input, 0, size - 1);
}
using namespace std;


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}


