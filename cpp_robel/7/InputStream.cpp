#include"InputStream.h"
#include<iostream>
using namespace std;

//コンストラクタ
InputStream::InputStream(){
    cout << "InputStream" << endl;
}

//入力関数
void InputStream::SetBase(){
    cin >> m_n;
}