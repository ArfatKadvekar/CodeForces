#include <iostream>
using namespace std;

int main()
{
    int weight_of_melon;
    cin >> weight_of_melon;
    cout << ((weight_of_melon % 2 == 0 && weight_of_melon != 2) ? "YES" : "NO");
    return 0;
}