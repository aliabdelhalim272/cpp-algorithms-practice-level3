/*Write a program to print Fibonacci series of 10.*/
#include<iostream>
#include<string>
using namespace std;
void PrintFibonacciSeries()
{
        int Number=0;
        cout<<"\nEnter the number you want to know it is fibonacci series:\n";
        cin>>Number;
        int Prev1=1;
        int Prev2=0;
        int Sum=0;
        cout<<"0        1       ";
        for(int i=3;i<=Number;i++)
        {
                Sum=Prev1+Prev2;
                cout<<Sum<<"    ";
                Prev2=Prev1;
                Prev1=Sum;
        }
}
int main()
{
        PrintFibonacciSeries();
}