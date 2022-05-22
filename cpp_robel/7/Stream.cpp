#include"Stream.h"
#include<iostream>
using namespace std;

//コンストラクタ
Stream::Stream():
    m_n(-1)
{
    cout << "Stream" << endl;
    m_n = -1;
}

//仮想デストラクタ
Stream::~Stream(){ }

//設定された値を取得
double Stream::Get() const{
    return m_n;
}

//値を設定
bool Stream::Set(){
    SetBase();
    return m_n >= 0;
}
