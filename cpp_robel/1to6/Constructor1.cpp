#include<iostream>
using namespace std;

class Integer{
public:
    int m_value;

    Integer();
    void Show();
};

//コンストラクタ
Integer::Integer(){
    m_value = 0;
}

//メンバ変数の表示
void Integer::Show(){
    cout << m_value << endl;
}

int main(){
    Integer a, b, c;

    a.Show();
    b.Show();
    c.Show();
}