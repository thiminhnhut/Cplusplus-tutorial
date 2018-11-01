#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str = "abcdef";

    unsigned int _size = str.length();
    cout << "Size = " << _size << endl;

    char* cstr = new char[_size + 1];
    strcpy(cstr, str.c_str());
    for (unsigned int i = 0; i < _size; i++) {
        cout << *(cstr + i) << " ";
    }
    delete [] cstr;
    
    return 0;
}
