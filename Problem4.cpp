/*Write a program to fill a 3*3 matrix with random numbers,then print each colum sum.*/
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
void FillMatrixWithRandomNumber(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandomNumber(1,100);
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
int SumOfEachColum(int arr[3][3],short Rows,short ColNumber)
{
        int Sum=0;
        for(short i=0;i<Rows;i++)
        {
                Sum+=arr[i][ColNumber];
        }
        return Sum;
}
void PrintEachColum(int arr[3][3],short Rows,short Colums)
{
        cout<<"\nThe sum of each colum is the next:\n";
        for(int j=0;j<Colums;j++)
        {
                cout<<"The sum of the colum "<<j+1<<" is: "<<SumOfEachColum(arr,Rows,j)<<endl;
        }
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[3][3];
        FillMatrixWithRandomNumber(arr,3,3);
        cout<<"\nThe following is a 3*3 matrix:\n";
        PrintMatrix(arr,3,3);
        PrintEachColum(arr,3,3);
        system("pause>0");
}