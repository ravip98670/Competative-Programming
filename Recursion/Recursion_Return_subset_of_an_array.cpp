#include <iostream>
/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 2}, then output should contain 
	{{0}, 		// Length of this subset is 0
	{1, 2},		// Length of this subset is 1
	{1, 1},		// Length of this subset is also 1
	{2, 1, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in output.
***/
int helper(int input[],int n,int output[][20],int index){
	if(index == n){
		output[0][0]=0;
		return 1;
	}

	int size=helper(input,n,output,index+1);

	for(int i=size;i<2*size;i++){
		output[i][0]=output[i-size][0]+1;
		
		for(int j=1;j<=output[i][0];j++){
			if(j == 1)
				output[i][j]=input[index];
			else
				output[i][j]=output[i-size][j-1];
		}
	}
	return 2*size;
}
int subset(int input[], int n, int output[][20]) {
    // Write your code here
	return helper(input,n,output,0);
}

using namespace std;

int main() {
  int input[20],length, output[350][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
