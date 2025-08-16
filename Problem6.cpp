/*Write a program to print a 3*3 matrix with ordered numbers.*/
#include<iostream>
#include<string>
using namespace std;
void FillMatrixWithOrderedNumbers(int arr[3][3],short Rows,short Colums)
{
        short Counter=0;
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                     Counter++;
                     arr[i][j]=Counter;   
                }
        }
}
void PrintMatrix(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<arr[i][j]<<"              ";
                }
                cout<<"\n";
        }
}
int main()
{
        int arr[3][3];
        FillMatrixWithOrderedNumbers(arr,3,3);
        cout<<"\nThe following matrix 3*3 is next:\n";
        PrintMatrix(arr,3,3);
        system("pause>0");
}