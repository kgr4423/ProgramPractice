#ifndef EXCEPTION_H_20210825_1125_EIFHIOA_INCLUDE_
#define EXCEPTION_H_20210825_1125_EIFHIOA_INCLUDE_

class Exception{
public:
    virtual ~Exception();

public:
    //エラーの状況を出力する関数
    virtual const char* What() const = 0;
};

#endif  // #ifndef EXCEPTION_H_20210825_1125_EIFHIOA_INCLUDE_