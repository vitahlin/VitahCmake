
#include <iostream>
#include "doubleNum.h"
#include "powNum.h"
using namespace std;

#define MAX_NUM 4

int main(int argc, char *argv[]) {
    cout << "This is Demo_4 " << endl;
    cout << "Max Num is " << MAX_NUM << endl;
    cout << "Double is " << doubleNum(MAX_NUM) << endl;
    cout << "Power is " << powNum(MAX_NUM, 2) << endl;
    return 0;
}