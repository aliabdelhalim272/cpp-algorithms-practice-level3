/*Write a program to fill a 3*3 matrix with ordered numbers and print it,then transpose matrix and print it.*/
 #include<iostream>
 #include<string>
 using namespace std;
 void FillMatrix(int arr[3][3],short Rows,short Colums)
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
                        cout<<" "<<arr[i][j]<<"         ";
                }
                cout<<"\n";
        }
 }
 void TransposeMatrix(int arr[3][3],int arrTranspose[3][3],short Rows,short Colums)
 {
        for(short i=0;i<Rows;i++)
        {
                for(short j=0;j<Colums;j++)
                {
                        arrTranspose[i][j]=arr[j][i];
                }
        }
 }
 int main()
 {
        int arr[3][3];
        int arrTranspose[3][3];
        FillMatrix(arr,3,3);
        cout<<"\nThe following is a 3*3 ordered matrix:\n";
        PrintMatrix(arr,3,3);
        TransposeMatrix(arr,arrTranspose,3,3);
        cout<<"\n\nThe following is he transosed matrix:\n\n";
        PrintMatrix(arrTranspose,3,3);
        system("pause>0");
 }