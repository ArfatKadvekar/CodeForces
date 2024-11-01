#include <iostream>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;

    int scores [n];
    int advances_count = 0;
    for (int i = 0; i < n; i++){
        cin >> scores[i];
    }
   
    int kth_scores = scores[k - 1];

    for (int i = 0; i < n ; i++)
    {
        if(scores[i] >= kth_scores && scores[i] > 0  ){
            advances_count++;
        }
    }
    cout << advances_count;
    return 0;
}