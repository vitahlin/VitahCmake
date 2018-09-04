
#include <iostream>
#include "../double/doubleNum.h"
#include "../pow/powNum.h"
using namespace std;

#define MAX_NUM 7

int main(int argc, char *argv[]) {
    cout << "This is Demo_7 " << endl;
    cout << "Max Num is " << MAX_NUM << endl;
    cout << "Double is " << doubleNum(MAX_NUM) << endl;
    cout << "Power is " << powNum(MAX_NUM, 2) << endl;
    return 0;
}