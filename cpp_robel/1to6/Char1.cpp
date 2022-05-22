#include<iostream>
using namespace std;

void ShowCode(char ch){
    cout << "[" << ch << "]に振られた文字コードは" << (int)(unsigned char)ch << "です。" <<endl;
}

int main(){
    ShowCode('0');
    ShowCode('A');
    ShowCode(';');
}