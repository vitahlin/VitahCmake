# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

# 指定项目名称是Demo_10
project (Demo_8)

# 查找目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加pow和double子目录
add_subdirectory(double)
add_subdirectory(pow)

# 指定生成目标
add_executable(Demo_8 ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo_8 PowFunc)
target_link_libraries(Demo_8 DoubleFunc)