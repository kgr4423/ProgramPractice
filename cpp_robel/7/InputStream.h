#ifndef INPUTSTREAM_H_20210821_1121_HOAIHL_INCLUDE_
#define INPUTSTREAM_H_20210821_1121_HOAIHL_INCLUDE_

#include"Stream.h"

//入力クラス
class InputStream:
    public Stream
{
public:
    InputStream(); //コンストラクタ
    virtual void SetBase(); //入力関数
};

#endif //INPUTSTREAM_H_20210821_1121_HOAIHL_INCLUDE_