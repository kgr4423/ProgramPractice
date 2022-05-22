#include<iostream>
using namespace std;

int main(){
    int a;

    cout << "適当な値を入力してください > " << flush;
    cin >> a;

    cout << "その数を3で割った余りは" << a%3 << "です" << endl; 
}