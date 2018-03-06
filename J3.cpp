#include <iostream>

using namespace std;

int main(){
    
    int a, b, c, d , t;
    
    int dis;
    
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> t;
    
    dis = abs(c - a) + (d - b);
    
    if (dis <= t){
        if (t % 2 == 0 && dis % 2 == 0){
            cout << "Y" << endl;
        }else if (t % 2 != 0 && dis % 2 != 0) {
            cout << "Y" << endl;
        }else{
            cout << "N" << endl;
        }
    }else {
        cout << "N" << endl;
    }
    
    return 0;
}