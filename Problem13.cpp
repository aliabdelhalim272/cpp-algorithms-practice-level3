/*Write a program to check if the matrix is identity or not.*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void PrintMatrix(int Matrix[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<Matrix[i][j]<<"          ";
                }
                cout<<"\n";
        }
}
bool IdentityMatrix(int Matrix[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(i==j&&Matrix[i][j]!=1)
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
        cout<<"\nThe Matrix:\n";
        PrintMatrix(Matrix,3,3);
        if(IdentityMatrix(Matrix,3,3))
        {
                cout<<"\nYes,matrix is identity.\n";
        }
        else 
        {
                cout<<"\nNo,matrix is not identity.\n";
        }
}