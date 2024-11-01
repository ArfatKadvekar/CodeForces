#include <iostream>
using namespace std;
 
int main()
{
    int m, n;
    cin >> m >> n;

    int area_of_board = m*n;
    int area_of_domino = 2*1; //dimensions are mentioned in question 2X1

    int dominos_count = area_of_board/area_of_domino;
    cout << dominos_count;
    return 0;
}