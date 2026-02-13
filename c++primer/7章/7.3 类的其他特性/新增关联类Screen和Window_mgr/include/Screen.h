#ifndef SCREEN_H
#define SCREEN_H
#include <iostream>
#include <string>
#include <vector>
class Screen
{
public:
    // typedef：给已有的类型起一个新的名字
    /*
        std::string::size_type是指在string类型中定义的一个无符号整数类型
        含义：被设计成足以存放下任何可能存在的string类型的对象大小
        注意：普遍适用于所有机型
    */
    typedef std::string::size_type pos;

    // 由于不止一个构造函数，故必须要写一个default构造函数
    Screen() = default;
    // 只接收接受长和宽，然后contents初始化成 ht * wd 个空格
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    // 接收长，宽和一个字符，然后把contents初始化成一个 ht * wd 个该字符
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    void some_mumber() const;

    Screen &display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }

    const Screen &display(std::ostream &os) const
    {
        do_display(os);
        return *this;
    }

    Screen &set(char);
    Screen &set(pos, pos, char);

    // 读取光标处的字符
    char get() const // 隐式内联
    {
        return contents[cursor];
    }
    inline char get(pos ht, pos wd) const; // 显式内联
    Screen &move(pos r, pos c);            // 返回Screen&类型的返回值
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr = 0; //mutable作用：即使在一个const对象内也能被修改。
    void do_display(std::ostream &os) const
    {
        os << contents;
    }
};

inline Screen &Screen::set(char c)
{
    contents[cursor] = c; // 设置当前光标所在位置的新值
    return *this;         // 将this对象作为左值返回
}

inline Screen &Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch; // 设置给订位置的新值
    return *this;                   // 将this对象作为左值返回
}

inline Screen &Screen::move(pos r, pos c)
{
    pos row = r * width; // 计算行的位置
    cursor = row + c;    // 在行内将光标移到指定的列
    return *this;        // 以左值的形式返回对象
}

inline char Screen::get(pos r, pos c) const
{
    pos row = r * width;
    return contents[row + c];
}

class Window_mgr
{
private:
    // 这个Window_mgr追踪的Screen
    // 默认情况下，一个Window_mgr包含一个标准尺寸的空白Screen
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};
#endif