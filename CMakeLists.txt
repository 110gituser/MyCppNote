cmake_minimum_required(VERSION 3.29.0)  # 设置CMake的最低版本要求为3.29.0
project(MyCppNote)  # 设置项目名称为MyCppNote
set(CMAKE_CXX_STANDARD 17) # 设置C++标准为C++17

# 设置可执行文件的输出目录为构建目录下的bin文件夹
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

# 设置动态库的输出目录为构建目录下的lib文件夹
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# 设置静态库的输出目录为构建目录下的lib文件夹
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# 自动查找src目录下的所有源文件，并将它们添加到SRC_LISTS变量中
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)

# 添加一个名为common的动态库，其源文件列表为SRC_LISTS
add_library(common SHARED ${SRC_LISTS})

# 指定common库的公共包含目录，这样使用该库的项目可以找到头文件
target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(main main.cpp) # 添加一个名为main的可执行文件，其源文件为main.cpp

# 指定main可执行文件的公共包含目录，这样可以找到头文件
target_include_directories(main PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(main PUBLIC common) # 将common库链接到main可执行文件中