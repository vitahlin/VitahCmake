
#include <iostream>
#include "double/doubleNum.h"
#include "halfNum.h"
#include "pow/powNum.h"

using namespace std;

int main(int argc, char *argv[]) {
    int num = 7;
    cout << "Num is " << num << endl;
    cout << "Double is " << doubleNum(num) << endl;
    cout << "Power is " << powNum(num, 2) << endl;
    cout << "Half is " << halfNum(num) << endl;
    return 0;
}