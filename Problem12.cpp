/*Write a program to compare two matrices and check if they are are tepical or not.*/
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
                        arr[i][j]=RandomNumbers(1,10);
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
bool AreTypicalMatrix(int Matrix1[3][3],int Matrix2[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix1[i][j]!=Matrix2[i][j])
                        {
                                return false;
                        }
                }
        }
        return true;
}
int main()
{
        srand((unsigned)time(NULL));
        int Matrix1[3][3],Matrix2[3][3];
        FillMatrixWithRandomNumbers(Matrix1,3,3);
        cout<<"\nThe first matrix is:\n";
        PrintMatrix(Matrix1,3,3);
        FillMatrixWithRandomNumbers(Matrix2,3,3);
        cout<<"\nThe second matrix is:\n";
        PrintMatrix(Matrix2,3,3);
        if(AreTypicalMatrix(Matrix1,Matrix2,3,3))
        {
                cout<<"\nYes,they are typical.\n";
        }
        else 
        {
                cout<<"\nNo,they are not typical.\n";
        }
        system("pause>0");
}