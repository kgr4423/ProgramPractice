#ifndef ARRAYSTREAM_H_20210821_1140_HGOIAA_INCLUDE_
#define ARRAYSTREAM_H_20210821_1140_HGOIAA_INCLUDE_

#include"Stream.h"

//配列から順に値を取得していくクラス
class ArrayStream:
    public Stream
{
public:
    ArrayStream(const double* array, int size); //コンストラクタ
    ~ArrayStream(); // デストラクタ

protected:
    virtual void SetBase(); //値を設定する基本関数

private:
    double* m_array;  //配列
    int m_i; //現在のインデックス
};

#endif //ARRAYSTREAM_H_20210821_1140_HGOIAA_INCLUDE_