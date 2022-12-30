#include <iostream>
using namespace std;
void helper(int input[],int size,int subSet[],int index,int opsize){
	if(size == index){
		for(int i=0;i<opsize;i++){
			cout<<subSet[i]<<" ";
		}
		cout<<endl;
		return;
	}

	helper(input,size,subSet,index+1,opsize);
	int newOutput[15];
	for(int i=0;i<opsize;i++){
		newOutput[i]=subSet[i];
	}
	newOutput[opsize]=input[index];
	helper(input,size,newOutput,index+1,opsize+1);
}


void printSubsetsOfArray(int input[], int size) {
	// Write your code here
	int subSet[15];
	helper(input,size,subSet,0,0);
    
}


int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
