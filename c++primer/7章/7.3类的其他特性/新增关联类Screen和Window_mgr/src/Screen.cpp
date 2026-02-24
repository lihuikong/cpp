#include <iostream>
#include <string>
#include <vector>

class Window_mgr;

class Screen {
    friend class Window_mgr;
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    Screen& display(std::ostream &os);
    const Screen& display(std::ostream &os) const;

    Screen& set(char);
    Screen& set(pos, pos, char);

    char get() const;
    inline char get(pos ht, pos wd) const;
    Screen& move(pos r, pos c);

    void some_mumber() const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr = 0;
    void do_display(std::ostream &os) const;
};

class Window_mgr {
public:
    void clear(Screen &s);
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};
};

void Window_mgr::clear(Screen &s) {
    s.contents = std::string(s.height * s.width, ' ');
}

Screen& Screen::display(std::ostream &os) {
    do_display(os);
    return *this;
}

const Screen& Screen::display(std::ostream &os) const {
    do_display(os);
    return *this;
}

Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

Screen& Screen::set(pos r, pos col, char ch) {
    contents[r * width + col] = ch;
    return *this;
}

Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get() const {
    return contents[cursor];
}

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

void Screen::do_display(std::ostream &os) const {
    os << contents;
}

void Screen::some_mumber() const {
    ++access_ctr;
}

int main() {
    Screen screen(5, 5, '*');
    Window_mgr manager;
    screen.display(std::cout);
    std::cout << std::endl;
    manager.clear(screen);
    screen.display(std::cout);
    std::cout << std::endl;

    return 0;
}