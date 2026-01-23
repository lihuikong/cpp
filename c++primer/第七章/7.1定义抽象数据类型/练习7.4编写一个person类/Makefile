# 定义编译器
CXX = clang++
# 定义编译选项
CXXFLAGS = -std=c++11 -Wall

# 定义目标文件
TARGET = my_jarvis
# 定义所有的源文件
SRCS = main.cpp Person.cpp

# 终极指令：怎么把源文件变成目标
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# 清理指令
clean:
	rm -f $(TARGET)

$(TARGET): main.cpp Person.cpp
	$(CXX) $(CXXFLAGS) main.cpp Person.cpp -o $(TARGET)

# 新增一个“一键运行”动作
run: $(TARGET)
	./$(TARGET)