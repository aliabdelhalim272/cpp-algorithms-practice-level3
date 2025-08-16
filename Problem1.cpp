/*Write a program to fill a 3*3 matrix with random numbers.*/
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int RandNumber(int From,int To)
{
        return rand()%(To-From+1)+From;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandNumber(1,100);
                }
        }
}
void PrintMatrixWithRandomNumber(int arr[3][3],short Rows,short Colums)
{
        for (short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<arr[i][j]<<"            ";
                }
                cout<<"\n";
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[3][3];
        FillMatrixWithRandomNumbers(arr,3,3);
        cout<<"\nThe follwoing is a 3*3 random matrix:\n";
        PrintMatrixWithRandomNumber(arr,3,3);
}
