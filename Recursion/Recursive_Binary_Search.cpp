#include <iostream>
// input - input array
// size - length of input array
// element - value to be searched
int searchedIndex(int input[],int start,int end,int element){
   if(start > end)
    return -1;
  
  int mid=(start+end)/2;
  if(input[mid]==element)
    return mid;
  else if(input[mid] > element)
    return searchedIndex(input,start,mid-1,element);
  else 
    return searchedIndex(input,mid+1,end,element);

}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    int start=0;
    int end=size-1;
    return searchedIndex(input,start,end,element);
}

using namespace std;

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
