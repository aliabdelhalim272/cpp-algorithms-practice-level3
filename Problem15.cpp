/*Write a program to count given number in matrix*/
#include<iostream>
#include<string>
#include<iomanip>
#include<string>
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
int CountInMatrix(int Matrix[3][3],int Number,short Rows,short Colums)
{
        short NumbersCount=0;
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix[i][j]==Number)
                        {
                                NumbersCount++;
                        }
                }
        }
        return NumbersCount;
}
int main()
{
        int Matrix[3][3]={{1,1,3},{3,2,1},{1,2,3}};
        cout<<"\nMatrix:\n";
        PrintMatrix(Matrix,3,3);
        int Number=0;
        cout<<"\nEnter the number you need to count:\n";
        cin>>Number;
        cout<<"The number: "<<Number<<" is count: "<<CountInMatrix(Matrix,Number,3,3);
}