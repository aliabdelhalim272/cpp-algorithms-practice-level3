/*Write a program to print Fibonacci series of 10using recursion.*/
#include<iostream>
#include<string>
using namespace std;
void PrintFibonacci(int Number,int Prev1,int Prev2)
{
        int Sum=0;
        if(Number>0)
        {
                Sum=Prev2+Prev1;
                Prev2=Prev1;
                Prev1=Sum;
                cout<<Sum<<"    ";
                PrintFibonacci(Number-1,Prev1,Prev2);
        }
}
int main()
{
        PrintFibonacci(10,0,1);
}