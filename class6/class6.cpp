#include <bits/stdc++.h>

using namespace std;

int main()
{

    // program with conditional statement
    int a1, b1;
    cin >> a1 >> b1;

    if (a1 > b1)
    {                                        // if check the condition true or false
        cout << "a1 is the bigger " << endl; // if condition become true this statement will print
    }
    else
    {
        cout << "b1 is the bigger " << endl; // if condition become false this then this statement will print
    }

    int x;
    cin >> x;

    if (x >= 0)
    {
        cout << "x is postitive " << endl;
    }
    else
    {
        cout << "x is negative " << endl;
    }

    // program which will only check if condition is true but
    // if false then it will do nothing like

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "it is an even number " << endl; // only this statement will print
        // and if condition get false nothing will print
    }

    // program about else-if statement

    int day;
    cin >> day;

    if (day == 1)
    { // at first compiler will check this statement
        cout << "saturday " << endl;
    }
    else if (day == 2)
    { // if first condition or if condition become false
        // then it will check this else-if conditon
        cout << "sunday " << endl;
    }
    else if (day == 3)
    { // if first previous else-if become false then this else-if become checked
        // and this progress will continiue before any of this if or else-if become true
        cout << "monday " << endl;
    }
    else if (day == 4)
    {
        cout << "tuesday " << endl;
    }
    else if (day == 5)
    {
        cout << "wednesday " << endl;
    }
    else if (day == 6)
    {
        cout << "thusday " << endl;
    }
    else
    { // if none of this if or else-if become true then this else statement will exicute
        cout << "friday " << endl;
    }

    // program about nested if-else
    // this program will check a number is positive and negative even or odd

    int num;
    cin >> num;

    if (num >= 0)
    { // at first compiler will check this statement and if become true then
        if (num % 2 == 0)
        { // this if will check by compiler and if it become ture then will exicute by compiler
            cout << "positive even value " << endl;
        }
        else
        {
            cout << "positive odd value " << endl;
        }
    }
    else
    { // first if become false then this else statement will exicute ;
        if (num % 2 == 0)
        { // then this if will check by compiler if true then it will be exicute
            cout << "negative even value" << endl;
        }
        else
        { // and if become false then this else will become exicute
            cout << "negative odd value " << endl;
        }
    }

    // practice problem
    // program to check which number is the biggest number between three number

    int a, b, c;
    cin >> a >> b >> c;

    if (a > b and a > c)
    {
        cout << "a is the biggest number " << endl;
    }
    else if (b > c)
    {
        cout << "b is the biggest number " << endl;
    }
    else
    {
        cout << "c is the biggest number " << endl;
    }

    return 0;
}