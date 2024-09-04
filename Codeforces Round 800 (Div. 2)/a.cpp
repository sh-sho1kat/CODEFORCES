#include <iostream>
using namespace std;

int main()
{
    char array[100] = {};
    cin >> array;
    for (int i = 0; i < 100; i++)
    {
        if (array[i] == 'a' || array[i] == 'e' || array[i] == 'i' || array[i] == 'o' || array[i] == 'u')
        {
            cout << array[i];
        }
    }
    return 0;
}