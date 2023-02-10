#include <iostream>
/***
You need to save all the subsets in the given 2D newOutput array. And return the number of subsets(i.e. number of rows filled in newOutput) from the given function.

In ith row of newOutput array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then newOutput array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Don’t print the subsets, just save them in newOutput.
***/
int helper(int input[], int n, int newOutput[][50], int index) {
  if (index == n) {
    newOutput[0][0] = 0;
    return 1;
  }

  int size = helper(input, n,newOutput, index + 1);

  for (int i = size; i < 2 * size; i++) {
    newOutput[i][0] = newOutput[i - size][0] + 1;

    for (int j = 1; j <= newOutput[i][0]; j++) {
      if (j == 1)
        newOutput[i][j] = input[index];
      else
        newOutput[i][j] = newOutput[i - size][j - 1];
    }
  }
  return 2 * size;
}
int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
	
	int newOutput[1000][50];
	int subSetSize=helper(input,n,newOutput,0);

        int ind = 0;
		int i,j;
        for (i = 1; i < subSetSize; i++) {
          int total = 0;
          for (j = 1; j <= newOutput[i][0]; j++) 
            total = total + newOutput[i][j];

          if (total == k) {
            output[ind][0] = newOutput[i][0];
            for (j = 1; j <= newOutput[i][0]; j++) {
              output[ind][j] = newOutput[i][j];
            }
            ind++;
          }
        }

        return ind;
}

using namespace std;

int main() {
  int input[20],length, output[10000][50], k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = subsetSumToK(input, length, output, k);

  for( int i = 0; i < size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
