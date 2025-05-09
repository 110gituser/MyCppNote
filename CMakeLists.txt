cmake_minimum_required(VERSION 3.29.0)
# 设置CMake的最低版本要求为3.29.0

project(MyCppNote)
# 设置项目名称为MyCppNote

set(CMAKE_CXX_STANDARD 17)
# 设置C++标准为C++17

# 变量和目录设置
# 确保动态库和可执行文件输出到不同的目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
# 设置可执行文件的输出目录为构建目录下的bin文件夹

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
# 设置动态库的输出目录为构建目录下的lib文件夹

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
# 设置静态库的输出目录为构建目录下的lib文件夹

# 动态库
# 自动查找src目录下的所有源文件，并将它们添加到SRC_LISTS变量中
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
# 也可以使用file(GLOB SRC_LISTS "${PROJECT_SOURCE_DIR}/src/*.cpp")来手动指定文件模式

# 添加一个名为common的共享库（动态库），其源文件列表为SRC_LISTS
add_library(common
SHARED
${SRC_LISTS}
)

# 指定common库的公共包含目录，这样使用该库的项目可以找到头文件
target_include_directories(common
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

# 可执行文件
# 添加一个名为main的可执行文件，其源文件为main.cpp
add_executable(main main.cpp)

# 指定main可执行文件的公共包含目录，这样可以找到头文件
target_include_directories(main
PUBLIC
${PROJECT_SOURCE_DIR}/include
)

# 链接
# 将common库链接到planning_main可执行文件中
target_link_libraries(main
PUBLIC
common
)