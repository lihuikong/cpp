CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Iinclude  # -I 指定头文件搜索路径
TARGET = bin/my_jarvis
SRCS = src/main.cpp src/Person.cpp

# 确保 bin 目录存在
all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -rf bin
	rm -rf *.dSYM