#include <iostream>
#include "phanso.h"

using namespace std;

int main()
{
    phanso x, y;

    cin >> x;
    cin >> y;
    x.quydong(y);
    cout << x;
    cout << y;

    return 0;
}