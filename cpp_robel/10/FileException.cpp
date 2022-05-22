#include"FIleException.h"

FileException::FileException(const char* error){
    m_error = error;
}

//エラーの状況を出力する
const char* FileException::What() const {
    return m_error.c_str();
}
