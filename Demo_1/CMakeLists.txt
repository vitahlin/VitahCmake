# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

# 指定项目名称是Demo_1
project (Demo_1)

# 将名为main.cpp的源文件编译成一个名为Demo_1的可执行文件
add_executable (Demo_1 main.cpp)