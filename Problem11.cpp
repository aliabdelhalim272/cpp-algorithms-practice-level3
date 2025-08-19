/*Write a program to compare two matrices and check if they are equal or not.*/ 
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cmath>
#include<iomanip>
using namespace std;
int RandomNumber(int From,int To)
{
        return rand()%(To-From+1)+From;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Row,short Colums)
{

        for(short i=0;i<Row;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arr[i][j]=RandomNumber(1,10);
                }
        }
}
void PrintMatrix(int arr[3][3],short Row,short Colum)
{
        for(short i=0;i<Row;i++)
        {
                for(short j=0;j<Colum;j++)
                {
                        cout<<setw(3)<<arr[i][j]<<"             ";
                }
                cout<<"\n";
        }
}
int SumOfMatrix(int Matrix1[3][3],short Row,short Colum)
{
        int Sum=0;
        for(short i=0;i<Row;i++)
        {
                for(short j=0;j<Colum;j++)
                {
                        Sum+=Matrix1[i][j];
                }
        }
        return Sum;
}
bool AreEqulMatrix(int Matrix1[3][3],int Matrix2[3][3],short Row,short Colums)
{
        return SumOfMatrix(Matrix1,Row,Colums)==SumOfMatrix(Matrix2,Row,Colums);
}
int main()
{
        srand((unsigned)time(NULL));
        int Matrix1[3][3],Matrix2[3][3];
        FillMatrixWithRandomNumbers(Matrix1,3,3);
        cout<<"\nThe first array:\n";
        PrintMatrix(Matrix1,3,3);
        FillMatrixWithRandomNumbers(Matrix2,3,3);
        cout<<"\nThe second array:\n";
        PrintMatrix(Matrix2,3,3);
        if(AreEqulMatrix(Matrix1,Matrix2,3,3))
        {
                cout<<"Yes,both matrix are equl.\n";
        }
        else 
        {
                cout<<"No,both matrix are not equl.\n";
        }
        system("pause>0");
}