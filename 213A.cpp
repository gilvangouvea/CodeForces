#include <iostream>

using namespace std;

int main()
{
    int count{}, result{};
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int answer_1{}, answer_2{}, answer_3{};
        cin >> answer_1;
        cin >> answer_2;
        cin >> answer_3;
        if (answer_1 + answer_2 + answer_3 >= 2)
            result++;
    }

    cout << result;

    return 0;
}