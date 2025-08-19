/*Write a program to fill 3*3 matrix with random numbers and them,then write a function to sum all numbers in the matrix and print it.*/ 
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
void FillMatrixWithRandomNumbers(int Matrix[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        Matrix[i][j]=RandomNumber(1,10);
                }
        }
}
void PrintMatrix(int Matrix[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<Matrix[i][j]<<"             ";
                }
                cout<<"\n";
        }
}
int SumOfMatrix(int Matrix[3][3],short Row,short Colum)
{
        int Sum=0;
        for(short i=0;i<Row;i++)
        {
                for(short j=0;j<Colum;j++)
                {
                        Sum+=Matrix[i][j];
                }
        }
        return Sum;
}
int main()
{
        srand((unsigned)time(NULL));

        int Matrix[3][3];

        FillMatrixWithRandomNumbers(Matrix,3,3);
        cout<<"\nMatrix:\n";
        PrintMatrix(Matrix,3,3);
        cout<<"\nThe sum of the matrix elements : "<<SumOfMatrix(Matrix,3,3)<<endl;
        system("pause>0");
}