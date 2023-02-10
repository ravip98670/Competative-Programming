#include<iostream>
using namespace std;
void selectionSort(int input[],int n){
   for(int i=0;i<n-1;i++){

        //finding min element in the array
        int min = input[i];
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(input[j] < min){
                min = input[j];
                minIndex = j;
            }
        }
        //Swap
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
   } 
}

int main(){
    int input[100],n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;

    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++)
        cin>>input[i];

    selectionSort(input,n);

    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++)
        cout<<input[i]<<" ";


}