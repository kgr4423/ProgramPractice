#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

const char* Run(){
    ifstream file;

    file.open("test.txt");
    if(! file.is_open()){
        cerr << "ファイルを開けませんでした～～～！" << endl;
    }

    string line;
    getline(file, line);
    if(file.fail()){
        cerr << "ファイルから読み込めませんでした～～～！" << endl;
    }
    
    return NULL;
    
}

int main(){
    const char* error = Run();

    if(error != NULL){
        cerr << error << endl;
        return EXIT_FAILURE;
    }    
}