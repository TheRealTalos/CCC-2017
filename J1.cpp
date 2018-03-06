#include <iostream>

using namespace std;

int main(){
    
    int x,y;
    int out = 0;
    
    cin >> x;
    cin >> y;
    
    if (x > 0 && y > 0) out = 1;
    else if (x > 0 && y < 0) out = 4;
    else if (x < 0 && y < 0) out = 3;
    else if (x < 0 && y > 0) out = 2;
    
    cout << out << endl;
    
    return 0;
}