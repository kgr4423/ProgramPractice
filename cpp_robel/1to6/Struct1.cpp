#include<iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student
{
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEngilish;
};

void Show(const Student& student){
    cout << " 名前：" << student.name          << endl
         << " 国語：" << student.scoreJapanese << "点"
         << ",数学：" << student.scoreMath     << "点"
         << ",英語：" << student.scoreEngilish << "点" << endl << endl;
}

int main(){
    Student student[] = {
        {"赤井孝", 73, 98, 86},
        {"笠井大輔", 64, 45, 40},
        {"吉成翔也", 76, 78, 89},
    };
    int size = sizeof student / sizeof *student;

    for(int i=0; i<size; ++i){
        Show(student[i]);
    }
}