#include<iostream>
    using namespace std;
int triangle(int a1)
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
        
        triangle(a);
        
        return 0;
    }
