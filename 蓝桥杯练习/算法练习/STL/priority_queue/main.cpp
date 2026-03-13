#include <iostream>
using namespace std;

int main()
{
    // 大根堆
    priority_queue<int> pq;

    pq.push(5);
    pq.push(2);
    pq.push(10);

    cout << pq.top(); // 10

    // 小根堆
    priority_queue<int, vector<int>, greater<int>> pq1;

    return 0;
}