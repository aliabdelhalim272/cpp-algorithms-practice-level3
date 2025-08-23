/*Write a program to check if the matrix is a sparce or not.*/
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
int CountNumberInMatrix(int Matrix[3][3],int Number,short Rows,short Colums)
{
        int CountNumber=0;
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Number==Matrix[i][j])
                        {
                                CountNumber++;
                        }
                }
        }
        return CountNumber++;
}
bool IsSparceMatrix(int Matrix[3][3],short Rows,short Colums)
{
        short MatrixSize=Rows*Colums;
        return(CountNumberInMatrix(Matrix,0,3,3)>=(MatrixSize/2));
}
int main()
{
        int Matrix[3][3]={{1,1,2},{0,0,0},{2,0,1}};
        cout<<"\nMatrix:\n";
        PrintMatrix(Matrix,3,3);
        if(IsSparceMatrix(Matrix,3,3))
        cout<<"\nYes,it is sparce.\n";
        else 
        cout<<"\nNo,it is not sparce.\n";
        system("pause>0");
}