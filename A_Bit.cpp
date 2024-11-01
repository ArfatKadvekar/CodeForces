#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    cin >> i;
    int x = 0;
    string operation;

    for (int k=0 ; k < i; k++)
    {
    cin >> operation;
    int iter = 0;
    while (iter <= operation.length())
    {
        if (operation.substr(iter, 2) == "++")
        {
            x++;
            iter += 2;
        }

        if (operation.substr(iter, 2) == "--")
        {
            x--;
            iter += 2;
        }
        else
        {

            iter++;
        }
    }
    }
    cout << x;
    return 0;
}