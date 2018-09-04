# 指定运行此配置文件所需要的CMake最低版本
cmake_minimum_required (VERSION 3.12)

project (Demo_11)

# 查找目录下的所有源文件,并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加pow子目录
add_subdirectory(pow)

# 添加double外部目录
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../double double.out)

# 控制可执行文件的输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../)

add_executable(Demo_11 ${DIR_SRCS})

# 添加链接库
target_link_libraries(Demo_11 DoubleFunc)
target_link_libraries(Demo_11 PowFunc)