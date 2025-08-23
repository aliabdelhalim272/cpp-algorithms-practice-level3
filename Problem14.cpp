/*Write a program to check if the matrix scalar or not.*/
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
bool IsScalarMatrix(int Matrix[3][3],short Rows,short Colums)
{
        int FirstDiagElement=Matrix[0][0];
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(i==j&&Matrix[i][j]!=FirstDiagElement)
                        {
                                return false;
                        }
                        else if(i!=j&&Matrix[i][j]!=0)
                        {
                                return false;
                        }
                }
        }
        return true;
}
int main()
{
        int Matrix[3][3]={{1,0,0},{0,1,0},{0,0,1}};
        cout<<"\n Matrix:\n";
        PrintMatrix(Matrix,3,3);
        if(IsScalarMatrix(Matrix,3,3))
        {
        cout<<"\nYes,it is a scalar matrix.\n";
        }
        else 
        {
                cout<<"\nNo,it is not a scalar matrix.\n";
        }
        system("pause>0");
}