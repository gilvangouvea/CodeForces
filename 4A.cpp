#include <iostream>

using namespace std;

int main (){

        int x{};
        cin>>x;
        if (x%4 == 0 || x%4 == 2)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    return 0;
}