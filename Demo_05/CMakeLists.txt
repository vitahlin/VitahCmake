# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

# 项目名称是Demo_5
project (Demo_5)

# 添加 math 子目录
add_subdirectory(math)

# 指定生成目标
add_executable(Demo_5 main.cpp)

# 添加链接库
target_link_libraries(Demo_5 MathFunc)