/*Write a program to print the intersected numbers in two given matrices.*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void PrintMatrix(int arr[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<arr[i][j]<<"          ";
                }
                cout<<"\n";
        }
}
//  Function checks if a number exists in a matrix 
bool IsNumberInMetrix(int Matrix[3][3],int Number,short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix[i][j]==Number)
                        return true;
                }
        }
        return false;
}
void PrintIntersectedNumbers(int Matrix1[3][3],int Matrix2[3][3],short Rows,short Colums)
{
       int Number;
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        Number=Matrix1[i][j];
                        if(IsNumberInMetrix(Matrix2,Number,Rows,Colums))
                        {
                                cout<<setw(3)<<Number<<"        ";
                        }
                }
                
        }
}
int main()
{
        int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int Matrix2[3][3]={{1,2,3},{3,5,6},{71,8,29}};
        cout<<"\nMatrix1:\n";
        PrintMatrix(Matrix1,3,3);
        cout<<"\nMatrix2:\n";
        PrintMatrix(Matrix2,3,3);
        cout<<"Intersected numbers are:\n";
        PrintIntersectedNumbers(Matrix1,Matrix2,3,3);
}