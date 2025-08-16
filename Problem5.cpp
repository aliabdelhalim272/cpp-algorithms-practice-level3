/*Write a program to fill a 3*3 matrix with random numbers,then sum each colum in another array and print the results.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<iomanip>
using namespace std;
int RandomNumbers(int From,int To)
{
        return rand()%(To-From+1)+From;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandomNumbers(1,100);
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
int ColumsSum(int arr[3][3],short Rows,short ColumsNumber)
{
        int Sum=0;
        for(short i=0;i<Rows;i++)
        {
                Sum+=arr[i][ColumsNumber];
        }
        return Sum;
}
void SumMatrixColums(int arr[3][3],int arrSum[3],short Rows,short Colums)
{
        for(short j=0;j<Colums;j++)
        {
                arrSum[j]=ColumsSum(arr,Rows,j);
        }
}
void PrintSumarray(int arr[3],short Colums)
{
        for(short j=0;j<Colums;j++)
        {
                 cout<<"\nThe sum of the "<<j+1<<" colum is: "<<arr[j]<<endl;
        }
}
int main()
{
        int arr[3][3];
        int arrSum[3];
        FillMatrixWithRandomNumbers(arr,3,3);
        cout<<"\nThe follwing is a 3*3 matrix:\n";
        PrintMatrix(arr,3,3);
        SumMatrixColums(arr,arrSum,3,3);
        PrintSumarray(arrSum,3);
        system("pause>0");
}