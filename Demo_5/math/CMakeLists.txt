# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)

# 指定生成 MathFunc 链接库
add_library (MathFunc ${DIR_LIB_SRCS})