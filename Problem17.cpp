/*Write a program to check if a given number exists in matrix or not.*/
 #include<iostream>
 #include<string>
 #include<iomanip>
using namespace std;
void PrintMatrix(int Matrix[3][3],short Rows,short Colums)
{
        cout<<"\nThe metrix:\n";
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        cout<<setw(3)<<Matrix[i][j]<<"          ";          
                }
                cout<<"\n";
        }
}
bool CheckNumberInMatrix(int Matrix[3][3],short Rows,short Colums)
{
        int Number=0;

        cout<<"\n Enter the number you want to check in the matrix:\n";
        cin>>Number;
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        if(Matrix[i][j]==Number)
                        {
                        cout<<"\nYes the number in the matrix.\n";
                        return true;
                        }
                }
        }

        cout<<"\nNo,it is not in the matrix.\n";
        return false;

}
int main()
{
       int Matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
       PrintMatrix(Matrix,3,3);
       CheckNumberInMatrix(Matrix,3,3);
       system("pause>0");
}