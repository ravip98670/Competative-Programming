#include <iostream>
#include <algorithm>
using namespace std;
void intersection(int *input1, int *input2, int size1, int size2)
{
    //Write your code here
    //int input3[50];
    //int k=0;
    int i,j;
    for(i=0;i<size1;i++){
        for(j=0;j<size2;j++){
            if(input1[i]==input2[j] ){
                printf("%d ",input2[j]);
               // input3[k]=input1[i];
                //k++;
                input2[j]=-100000000;
                break;
            }
        }
    }
    //for(i=0;i<k;i++)
      //  printf("%d ",input3[i]);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}