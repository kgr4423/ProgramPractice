#include<iostream>
using namespace std;

//入力関数
bool Input(double& n){
    cin >> n;
    return n >= 0;
}

//入力を受け取って平均値を求めその値を出力する関数
bool Average(){
    int count;
    double n;
    double avr =0;

    for(count=0; Input(n); ++count){
        avr += n;
    }
    if(count == 0){
        return false;
    }

    avr /= count;
    cout << "平均値は" << avr << "です" <<endl;
    return true;

}

int main(){
    while(Average()){
        // do nothing
    }
}