#include <iostream>
using namespace std;

void main()
{
    cout << "Hello World!\n";  

    cout << max(1, 2);
}

int max(int num1, int num2)
{  
    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;

    return result;  
}