#include<iostream>
    using namespace std;

    int main ()
    {
        int a; 
        cout << "Enter the length of base of triangle ";
        cin >> a;

        for (int i = 1; i <=a; i++)
        {
            cout << "\n";
            for (int j = a; j>=i; j--)
            {
            cout <<"* ";
            }
        }
        return 0;
    }
