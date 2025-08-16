/*Write a program to fill a 3*3 matrix with random numbers,then print each row sum.*/
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int RandNumber(int From,int To)
{
        return rand()%(To-From+1)+From;
}
void FillMatrixArrayWithRandomNumbers(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandNumber(1,100);
                }
        }
}
void PrintMatrixWithRandomNumbers(int arr[3][3],short Rows,short Colums)
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
int SumOfEachRow(int arr[3][3],short RowNumber,short Colums)
{
        int Sum=0;
        for(short j=0;j<Colums;j++)
        {
                Sum+=arr[RowNumber][j];
        }
        return Sum;
}
void PrintSumOfEachRow(int arr[3][3],short Rows,short Colums)
{
        cout<<"\nThe follwing is the sum of each row in the matrix:\n";
        for(short i=0;i<Rows;i++)
        {
                cout<<"Row "<<i+1<<" sum= "<<SumOfEachRow(arr,i,Colums)<<endl;
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[3][3];
        FillMatrixArrayWithRandomNumbers(arr,3,3);
        cout<<"\nThe following is a 3*3 matrix:\n";
        PrintMatrixWithRandomNumbers(arr,3,3);
        PrintSumOfEachRow(arr,3,3);
        system("pause>0");
}