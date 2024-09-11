#include <iostream>
using namespace std;
int main () {
    int target;
    cin >> target;
    int a;
    cin >> a;
    int x[a];
    for(int i=0;i<a;i++){
        cin >> x[i];
    }
    bool found;
    for(int i=0;i<a;i++){
        if (x[i]==target){
            found =true;
        }
    }
    if (found==true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}