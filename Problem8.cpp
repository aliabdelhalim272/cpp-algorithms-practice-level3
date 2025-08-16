/*Write a program to fill two 3*3 matrix with random numbers and them,then multiply them into a 3rd matrix and print it.*/ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int RandomNumber(int From,int To)
{
        return rand()%(To-From+1)+From;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandomNumber(1,10);
                }
        }
}
void PrintMatrix(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<arr[i][j]<<"             ";
                }
                cout<<"\n";
        }
}
void MultiplyMatrix(int Matrix1[3][3],int Matrix2[3][3],int MatrixResult[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                   MatrixResult[i][j]=Matrix1[i][j]*Matrix2[i][j];     
                }
        }
}
int main()
{
        srand((unsigned)time(NULL));

        int Matrix1[3][3],Matrix2[3][3],MatrixResult[3][3];

        FillMatrixWithRandomNumbers(Matrix1,3,3);
        cout<<"\nMatrix1:\n";
        PrintMatrix(Matrix1,3,3);

        FillMatrixWithRandomNumbers(Matrix2,3,3);
        cout<<"\nMatrix2:\n";
        PrintMatrix(Matrix2,3,3);
        
        MultiplyMatrix(Matrix1, Matrix2, MatrixResult, 3, 3);
        cout<<"\nMatrix result:\n";
        PrintMatrix(MatrixResult,3,3);       
}