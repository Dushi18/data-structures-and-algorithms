#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    char ch = 'b';
    switch (i * 3)
    {
    case 1:
        cout << "integer is one" << endl;
        cout << "hi there" << endl;
        break;
    case 2:
        cout << "integer is two" << endl;
        cout << "hi there" << endl;
        break;
    case 3:
        cout << "integer is three" << endl;
        switch (ch)
        {
        case 'a': cout<<"character is a"<<endl;
            break;
        case 'b': cout<<"character is b"<<endl;
            break;
        default:
            break;
        }
    default:
        break;
    }
    return 0;
}