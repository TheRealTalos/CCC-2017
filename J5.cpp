#include <iostream>

using namespace std;

int main(){
    
    int d;
    int out = 0;
    int m = 0;
    
    int t[4] = {1,2,0,0};
    
    cin >> d;
    
    while (d >= 720){
        d -= 720;
        m++;
    }
    
    for (int i = 0; i < d; i++){
        if (t[3] != 9){
            t[3]++;
        }else if (t[3] == 9){
            t[3] = 0;
            if (t[2] != 5){
                t[2]++;
          }else if (t[2] == 5){
                t[2] = 0;
                if (t[1] != 2 && t[0] != 1){
                    t[1]++;
                }else if (t[1] == 2 && t[0] == 1){
                    t[1] = 1;
                    t[0] = 0;
                }
            }
        }
        if (m > 0){
            for (int j = 0; j < m; j++){
                for (int i = -9; i < 9; i++){
                    if (t[0] + i == t[1] && t[1] + i == t[2] && t[2] + i == t[3]){
                        out++;
                    }else if (t[0] == 0 && t[1] + i == t[2] && t[2] + i == t[3]){
                        out++;
                    }
                }
            }
        }else{
            for (int i = -9; i < 9; i++){
                if (t[0] + i == t[1] && t[1] + i == t[2] && t[2] + i == t[3]){
                        out++;
                }else if (t[0] == 0 && t[1] + i == t[2] && t[2] + i == t[3]){
                        out++;
                }
            }
        }
    }
    
    cout << out << endl;
    
    return 0;
}