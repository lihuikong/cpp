#include <iostream>
using namespace std;

int main()
{
    int apple[10];
    int hand_high;
    for (int i = 0; i < 10; ++i)
    {
        cin >> apple[i];
    }
    cin >> hand_high;
    int total_height = hand_high + 30;
    int count = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (apple[i] <= total_height)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}