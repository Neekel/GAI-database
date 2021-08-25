#include "database.h"
#include <iostream>
using namespace std;

void main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    database bd;

    for (int i = 0; i < 6; ++i)
        bd.Add(rand() % 9000 + 1000);

    bd.Add(1234);
    bd.Add(3456);
    bd.PrintAll(bd.ReturnRoot(), 0);

    cout << "¬ведите номер машины: ";
    int num;
    cin >> num;
    bd.PrintNumber(num);
}