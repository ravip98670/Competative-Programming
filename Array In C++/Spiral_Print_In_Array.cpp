#include <iostream>
using namespace std;void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int rows=0,rowl=nRows-1;
    int cols=0,coll=nCols-1;
    
    int len=nRows*nCols;
    int count=0;
    
    while(count<=len){
        for(int i=cols;i<=coll;i++){
            cout<<input[rows][i]<<" ";
            count++;
            
        }
        if(count>=len){
            break;
        }
        rows++;
        for(int i=rows;i<=rowl;i++){
            cout<<input[i][coll]<<" ";
            count++;
        }
        if(count>=len){
            break;
        }
        coll--;
        for(int i=coll;i>= cols;i--){
            cout<<input[rowl][i]<<" ";
            count++;
        }
        if(count>=len){
            break;
        }
        rowl--;
        for(int i=rowl;i>=rows;i--){
            cout<<input[i][cols]<<" ";
            count++;
        }
        cols++;
    }
    
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}