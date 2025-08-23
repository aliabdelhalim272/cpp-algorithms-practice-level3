/*Write a program to print the minimum and maximum numbers in matrix.*/ 
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
int CheckMinimumNumber(int Matrix[3][3],short Rows,short Colums)
{
        int Minimum=Matrix[0][0];
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix[i][j]<Minimum)
                        Minimum=Matrix[i][j];
                }
        }
        return Minimum;
}
int CheckMaximumNumber(int Matrix[3][3],short Rows,short Colums)
{
        int Maximum=Matrix[0][0];
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix[i][j]>Maximum)
                        Maximum=Matrix[i][j];
                }
        }
        return Maximum;
}
int main()
{
        int Matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        cout<<"\nMatrix:\n";
        PrintMatrix(Matrix,3,3);
        cout<<"\nMinimum number is:\n";
        cout<<CheckMinimumNumber(Matrix,3,3);
        cout<<"\nMaximum number is:\n";
        cout<<CheckMaximumNumber(Matrix,3,3);

}