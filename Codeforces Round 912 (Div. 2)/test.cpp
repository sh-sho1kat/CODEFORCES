#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[])
{
    registerValidation(argc, argv);
    int t = 1;
    for (int test = 0; test < t; test++)
    {
        int a = inf.readInt(5, 5, "a");
        inf.readSpace();
        int b = inf.readInt(1, 9, "b");
        inf.readEoln();
        int c = inf.readInt(1, 9, "c");
        inf.readSpace();
        int d = inf.readInt(1, 9, "d");
        inf.readEoln();
        ensuref(a != b && b != c && c != d && d != a, "All moves needs to be distinct");
    }
    inf.readEof();
}