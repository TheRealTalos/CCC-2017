#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int n, k, n1;
    
    cin >> n;
    cin >> k;
    
    n1 = n;
    
    for (int i = 0; i < k; i++){
        n1 *= 10;
        n += n1;
    }
    
    cout << n << endl;
    
    return 0;
}