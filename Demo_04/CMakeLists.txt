# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

# 项目名称是Demo_4
project (Demo_4)

# 查找目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable(Demo_4 ${DIR_SRCS})