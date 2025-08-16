/*Write a program to fill a 3*3 matrix with random numbers,hen sum each row in separate array and print the results.*/
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
                        arr[i][j]=RandomNumber(1,100);
                }
        }
}
void PrintMatrixWithRandomNumber(int arr[3][3],short Rows,short Colums)
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
int SumRow(int arr[3][3],short RowNumber,short Colums)
{
        int Sum=0;
        for(short j=0;j<Colums;j++)
        {
                Sum=arr[RowNumber][j];
        }
        return Sum;
}
void SumMatrixRowInArray(int arr[3][3],int arrSum[3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                arrSum[i]=SumRow(arr,i,Colums);
        }
}
void PrintRowsSumArray(int arr[3],short Rows)
{
        cout << "\nThe the following are the sum of each row in the matrix:\n";
        for(int i=0;i<Rows;i++)
        {
                cout<<"Row "<<i+1<<" sum= "<<arr[i]<<endl;
        }
}
int main()
{
        int arr[3][3];
        int arrSum[3];
        FillMatrixWithRandomNumbers(arr,3,3);
        cout<<"\nThe following is a 3*3 matrix :\n";
        PrintMatrixWithRandomNumber(arr,3,3);
        SumMatrixRowInArray(arr,arrSum,3,3);
        PrintRowsSumArray(arrSum,3);
        system("pause>0");
        
}