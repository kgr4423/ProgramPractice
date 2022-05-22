#include"ArrayStream.h"
#include<iostream>
#include<algorithm>
using namespace std;

//コンストラクタ
ArrayStream::ArrayStream(const double* array, int size){
    m_array = new double[size];
    copy(array, array + size, m_array);
    m_i = 0;
}

//デストラクタ
ArrayStream::~ArrayStream(){
    cout << "~ArrayStream" << endl;
    delete[] m_array;
}

//新しい値を取得
void ArrayStream::SetBase(){
    m_n = m_array[m_i];
    if(m_n >= 0){
        ++m_i;
    }
}