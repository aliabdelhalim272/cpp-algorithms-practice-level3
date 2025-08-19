/*Write a program to fill two 3*3 matrix with random numbers the print the middle row and colum.*/ 
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
void PrintMiddleRow(int arr[3][3],short Row,short Colum)
{
        short MiddleRow=Row/2;

                for(int j=0;j<Colum;j++)
                {
                        printf("%0*d ",2,arr[MiddleRow][j]);
                }
        cout<<"\n";
}
void PrintMiddleColum(int arr[3][3],short Row,short Colum)
{
        short MiddleColum=Colum/2;
        
         for(int i=0;i<Row;i++)
                {
                        printf("%0*d ",2,arr[i][MiddleColum]);
                }
        cout<<"\n";
}
int main()
{
        srand((unsigned)time(NULL));
        int arr[3][3];
        FillMatrixWithRandomNumbers(arr,3,3);
        cout<<"\nThe following is a 3*3 matrix:\n";
        PrintMatrix(arr,3,3);
        cout<<"\nThe middel row is:\n";
        PrintMiddleRow(arr,3,3);
        cout<<"\nThe middel colum is:\n";
        PrintMiddleColum(arr,3,3);
        system("pause>0");
}