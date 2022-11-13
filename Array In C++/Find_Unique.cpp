#include <iostream>
int findUnique(int *arr, int size)
{
    //Write your code here
    int i,j;
    int count=0;
    for(i=0;i<size;i++){
        count=0;
        for(j=0;j<size;j++){
            if(i!=j){
                if(arr[i]==arr[j])
                    count++;
            }

            }
          if(count==0)
              return (arr[i]);
            
        }
    

}
using namespace std;

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

		cout << findUnique(input, size) << endl;
	}

	return 0;
}