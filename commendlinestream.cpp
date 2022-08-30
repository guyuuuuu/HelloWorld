#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    //cout << argv[1] << " + 1 = "
    //     << atoi(argv[1]) + 1;

    const int SIZE = 4;
    int data[SIZE] = {1, 2, 3, 4};
    string filename = "data.txt";
    ofstream fout;
    fout.open(filename);
    if (!fout.is_open()){
        cout << "open filed" << endl;
        return 1;
    }

    for (int i = 0; i < 4; ++i){
        fout << "data[" << i << "] = " << data[i] << endl;
    }
    fout.close();
}

