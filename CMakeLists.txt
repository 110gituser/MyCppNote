# 指定 CMake 的最小版本要求
cmake_minimum_required(VERSION 3.20.0)

# 设置项目名称为 MyCppNote
project(MyCppNote)

# 设置 C++ 标准为 C++11
set(CMAKE_CXX_STANDARD 11)

# 添加头文件搜索路径，${PROJECT_SOURCE_DIR} 表示项目根目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 设置可执行文件的输出目录为项目根目录下的 bin 目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 查找 src 目录下的所有源文件，并存储到 SRC_LIST 变量中
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

# 添加可执行文件 MyCppNote，并链接前面收集到的源文件
add_executable(
    MyCppNote 
    ${SRC_LIST}
)