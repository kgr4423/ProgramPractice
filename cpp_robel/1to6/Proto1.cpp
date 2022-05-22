#include<iostream>
using namespace std;

int f(int x, int y);

int main(){
    int a, b;
    cout << "input any number:" << endl;
    cin >> a;
    cout << "input any number:" << endl;
    cin >> b;
    printf("f(%d, %d) = %d", a, b, f(a, b));
}

int f(int x, int y){
    return 2*x +y;
}