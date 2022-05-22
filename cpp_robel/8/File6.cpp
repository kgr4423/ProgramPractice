#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

const int PAGE_WIDTH = 16;
const int PAGE_HEIGHT = 16;
const int PAFE_SITE = PAGE_WIDTH * PAGE_HEIGHT;

class DumpFile{
public:
    bool Run(); //一連の処理を実行

private:
    bool Open(); //ファイルを開く
    void Close(); //ファイルを閉じる
    void Dump(); //1ページ分をダンプ
    bool Control(); //ページの制御

private:
    fstream m_file; //ファイル
    int m_page; //現在のページ
};

int main(){
    DumpFile dump;

    if(! dump.Run()){
        return EXIT_FAILURE;
    }
}