#include <iostream>
using namespace std;
int main()
{
    int a[10] = {};
    float b[10] = {};
    int asum = 0, amul = 1;
    float aavg, bavg, bsum = 0, bmul = 1;
    cout << "Enter four Integer Numbers: ";
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
        asum += a[i];
        amul *= a[i];
    }
    aavg = asum / 4.0;
    cout << "Enter four Float Numbers: ";
    for (int i = 1; i <= 4; i++)
    {
        cin >> b[i];
        bsum += b[i];
        bmul *= b[i];
    }
    bavg = bsum / 4;
    cout << asum << " " << amul << " " << aavg << endl;
    cout << bsum << " " << bmul << " " << bavg << endl;
    return 0;
}