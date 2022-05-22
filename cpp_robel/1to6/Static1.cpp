#include<iostream>
#include<algorithm>
using namespace std;

///////////////////////
//アドレスが常に一定かのチェック

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress(){
    cout << "アドレスが常に一定かのチェック" << endl;

    CheckAddress_Sub();
    CheckAddress_Sub2();
    CheckAddress_Sub();
}

//静的変数aと自動変数bのアドレス出力
void CheckAddress_Sub(){
    static int a;
    int b;
    cout << "&a=" << (size_t)&a << endl
         << "&B=" << (size_t)&b << endl;
}

//この関数の仲からCheckAddress_Subを読んだときに変数aと変数bのアドレスがどうなるかチェック
void CheckAddress_Sub2(){
    cout << "in Sub2" << endl;
    CheckAddress_Sub();
}

/////////////////////////////////////
//初期化が１回しかされないかのチェック

void CheckInitOnce_Sub();

void CheckInitOnece(){
    cout << endl << "初期化が１回しかされないかのチェック" << endl;

    CheckInitOnce_Sub();
    CheckInitOnce_Sub();
}

//++aと++bの影響が２℃目以降の呼び出しに影響するかチェック
void CheckInitOnce_Sub(){
    static int a=3;
    int b=3;
    cout << "a=" << a << endl
         << "b=" << b << endl;
    ++a;
    ++b;
}

////////////////////////////////////////
//０で初期化されるかのチェック

void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit(){
    cout << endl << "0で初期化されるかのチェック" << endl;

    CheckZeroInit_Sub();
    CheckZeroInit_Sub2();
}

//静的変数が何で初期化されているかのチェック
void CheckZeroInit_Sub(){
    static int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

//自動変数が何で初期化されているかチェック
void CheckZeroInit_Sub2(){
    int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

//////////////////////////
//値が保障されているかチェック

void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant(){
    cout << endl << "値が保証されいるかのチェック" << endl;

    int *pa, *pb;
    CheckInvariant_Sub(pa, pb);
    CheckInvariant_Sub2();

    cout << "*pa=" << *pa << endl
         << "*pb=" << *pb << endl;
}

//静的変数aと自動変数ｂのアドレスを引数を通して返す
//int*& は　int*　への参照
void CheckInvariant_Sub(int*& pa, int*& pb){
    static int a=9;
    int b=9;
    pa = &a;
    pb = &b;
}

//大きな変数を作ってそれを全て０で埋める
void CheckInvariant_Sub2(){
    int dummy[100];
    fill_n(dummy, 100, 0);
}

////////////////////////////////////////////////////

int main(){
    CheckAddress();
    CheckInitOnece();
    CheckZeroInit();
    CheckInvariant();
}