#include <iostream>
void merge(int input[],int size,int start,int end){
  int mid=(start+end)/2;
  int n1=mid-start+1;
  int n2=end-mid;

  int arr1[n1],arr2[n2];
  int st=0;
  for(int i=start;i<=mid;i++)
    arr1[st++]=input[i];
int l=0;
  for (int i = mid+1; i <= end; i++)
    arr2[l++] = input[i];

  int i = 0, j = 0, k = start;
  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
     input[k] = arr1[i];
      k++;
      i++;
    } else if(arr1[i]>arr2[j]){
     input[k++]=arr2[j++];
    }else{
      input[k++]=arr1[i];
      input[k++] = arr1[i];
      i++;
      j++;
    }
  }

  while (i < n1) {
    input[k] = arr1[i];
    k++;
    i++;
  }
  while (j < n2) {
    input[k] = arr2[j];
    k++;
    j++;
  }
}
void mergearr(int input[],int size,int start,int end){
	if(start >= end)
		return;

	int mid=(start+end)/2;
	mergearr(input,mid+1,start,mid);
	mergearr(input,size-mid-1,mid+1,end);
	merge(input,size,start,end);
}
void mergeSort(int input[], int size){
	// Write your code here
	int start=0;
	int end=size-1;

	mergearr(input,size,start,end);

        
}

using namespace std;

int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}