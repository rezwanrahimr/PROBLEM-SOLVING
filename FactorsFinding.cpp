#include <iostream>
using namespace std;
int main(){
    int f = 1;
    int array[5] = { };
    for(int i = 1; i <= 4; i++){
        // cout << i;
        f = f * i;
        // cout << f;
        // array[i] = f;
    }
    int nu = sizeof(array);
    cout << nu;
}