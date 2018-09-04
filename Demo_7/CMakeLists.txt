# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

project (Demo_7)

# 查找目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加pow和double子目录
add_subdirectory(double)
add_subdirectory(pow)

# 指定生成目标
add_executable(Demo_7 ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo_7 PowFunc)
target_link_libraries(Demo_7 DoubleFunc)