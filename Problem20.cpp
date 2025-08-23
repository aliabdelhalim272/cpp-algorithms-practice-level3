/*Write  a program to check if the matrix is palindrome or not.*/ 
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
bool IsMatrixPalindrome(int Matrix[3][3],short Rows,short Colums)
{
        for(short i=0;i<Rows;i++)
        {
                for(int j=0;j<Colums/2;j++)
                {
                        if(Matrix[i][j]!=Matrix[i][Colums-1-j])
                        {
                                return false;
                        }
                }
        }
        return true;
}
int main()
{
        int Matrix[3][3]={{1,2,1},{5,5,5},{7,3,7}};
        cout<<"Matrix:\n";
        PrintMatrix(Matrix,3,3);
        if(IsMatrixPalindrome(Matrix,3,3))
        {
                cout<<"\nMatrix is palindrome.";
        }
        else 
        {
                cout<<"\nMatrix is not palindrome.";
        }
}