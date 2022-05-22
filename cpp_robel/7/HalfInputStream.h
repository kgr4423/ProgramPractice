#ifndef HALFINPUTSTREAM_H_20210822_1506_FJAKLH_INCLUDE_
#define HALFINPUTSTREAM_H_20210822_1506_FJAKLH_INCLUDE_

#include"InputStream.h"

//入力値の半分の値を取得していくクラス
class HalfInputStream :
    public InputStream
{
protected:
    virtual void SetBase(); //値を設定する基本関数
};

#endif // #ifndef HALFINPUTSTREAM_H_20210822_1506_FJAKLH_INCLUDE_