#include <iostream>
using namespace std;
 
int main()
{
    string sum;
    int sumarr[100];
    cin >> sum;

    for(char ch : sum){
        cout << ch;
        int i =0;
        while(ch != '+'){
            sumarr[i] = ch;
            i++;
        }
    }
    for(int j: sumarr){
        cout << sumarr[j];
    }
    return 0;
}