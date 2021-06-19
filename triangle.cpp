#include<iostream>
    using namespace std;

//Introducing Functional Programming in A code helps it to run fast and get less bugs 

int triangle(int a1) // Declaring the function
{
    for (int i = 1; i <=a1; i++)
        {
            cout << "\n";
            for (int j = a1; j>=i; j--)
            {
            cout <<"* ";
            }
        }
}
    int main ()
    {
        int a; 
        cout << "Enter the length of base of triangle ";
        cin >> a;
        
        triangle(a); // Calling the funciton
        
        return 0;
    }
