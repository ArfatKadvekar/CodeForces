#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones_length = (n + a - 1) / a;
    long long flagstones_width = (m + a - 1) / a;

    long long flagstones_count = flagstones_length * flagstones_width;
    cout << flagstones_count;
    return 0;
}