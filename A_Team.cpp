#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[3];
    int sum = 0;
    int count = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        sum = arr[0] + arr[1] + arr[2];

        if (sum >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}