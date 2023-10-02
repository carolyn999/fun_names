#include <iostream>
#include <string>

using namespace std;

int main()

{

    int i = 5; // add 1 to it before you check

    cout << "Pre :" << (++i + 2) << endl;

    // outputs 8

    cout << "i before : " << i << endl;

    cout << "Post :" << (i++ + 2) << endl;

    cout << "i after :" << i << endl;
}