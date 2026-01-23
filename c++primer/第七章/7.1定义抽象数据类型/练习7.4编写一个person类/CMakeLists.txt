cmake_minimum_required(VERSION 3.10)
project(JarvisProject)

# 将所有源文件编译成一个可执行文件
# 这样链接器就能自动把 Person.cpp 的实现和 main.cpp 缝合在一起
add_executable(jarvis_app main.cpp Person.cpp)