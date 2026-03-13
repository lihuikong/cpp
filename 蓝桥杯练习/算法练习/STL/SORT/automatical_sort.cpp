// 自定义排序（常考）
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    string name;
    int score;
};

// 比较函数
bool Cmp(Node a, Node b)
{
    return a.score > b.score;
}

// 多关键字排序：
bool moreCmp(Node a, Node b)
{
    if (a.score != b.score)
    {
        return a.score > b.score;
    }
    return a.name < b.name;
}

int main()
{
    vector<Node> v; // 用来存储Node类型的动态数组
    sort(v.begin(), v.end(), Cmp);
}