#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int num = 10101001, i, cnt = 0, sum = 0;
    string s = to_string(num);
    reverse(s.begin(), s.end());

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            sum += pow(2, i);
        }
    }
    cout << "dec num : " << sum << endl;
cout << "Hello p1.cpp" << endl;
}
