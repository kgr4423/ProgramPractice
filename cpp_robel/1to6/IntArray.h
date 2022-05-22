#ifndef INTARRAY_H_20210820_1213_GJSE82_INCLUDE_
#define INTARRAY_H_20210820_1213_GJSE82_INCLUDE_

class IntArray{
public:
    //デフォルトコンストラクタ・コピーコンストラクタ。デストラクタ
    IntArray(int size);
    IntArray(const IntArray& other);
    ~IntArray();

public:
    //メンバへのアクセス関数
    int Size() const;
    int Get(int i) const;
    void Set(int i, int value);

public:
    //代入演算子のオーバーロード
    void operator=(const IntArray& other);

private:
    //インデックスのチェック
    void CheckIndex(int i) const;

private:
    int* m_array;
    int m_size;
};


#endif //INTARRAY_H_20210820_1213_GJSE82_INCLUDE_