#include<iostream>
using namespace std;

void BirthMonth(){
    int month;

    cout << "あなたは何月生まれですか > " << flush;
    cin >> month;

    if(1 <= month && month <= 12){
        cout << "へ～、" << month << "月なんですかぁ。" << endl;
    }else{
        cout << month << "月やて！？" << endl
        << "んな月、あらへんわ～～～～～～～～～い！！" << endl;
    }
}

int main(){
    BirthMonth();
    BirthMonth();
}