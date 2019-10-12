
#include <iostream>
#include "math/doubleNum.h"
#include "math/powNum.h"
using namespace std;

#define MAX_NUM 5

int main(int argc, char *argv[]) {
    cout << "This is Demo_5 " << endl;
    cout << "Max Num is " << MAX_NUM << endl;
    cout << "Double is " << doubleNum(MAX_NUM) << endl;
    cout << "Power is " << powNum(MAX_NUM, 2) << endl;
    return 0;
}