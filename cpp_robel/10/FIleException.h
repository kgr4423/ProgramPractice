#ifndef FILEEXCEPTION_H_20210825_1126_EHAFOH_INCLUDE_
#define FILEEXCEPTION_H_20210825_1126_EHAFOH_INCLUDE_

#include"Exception.h"
#include<string>

class FileException:
    public Exception
{
public:
    FileException(const char* error);

public:
    //エラーの状況を出力する関数
    virtual const char* What() const;

protected:
    std::string m_error; //エラーメッセージ
};

#endif //FILEEXCEPTION_H_20210825_1126_EHAFOH_INCLUDE_