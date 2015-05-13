#include <iostream>
#include <string>
#include <vector>

extern "C" {
#include <string.h>
}

using namespace std;

template<typename T>
int compare(const T &v1, const T &v2)
{
    if (less<T>()(v1, v2))
        return -1;
    if (less<T>()(v2, v1))
        return 1;
    return 0;
}

template<unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M])
{
    return strcmp(p1, p2);
}

int main(int arg, const char *argv[])
{
    double d1(3.14), d2(5.98);
    string str1("muyi"), str2("SummonY");
    vector<int> vec1{1, 2, 3}, vec2{4, 5, 6};

    cout << compare(d1, d2) << endl;
    cout << compare(str1, str2) << endl;
    cout << compare(vec1, vec2) << endl;
    cout << compare("muyi", "SummonY") << endl;
    return 0;
}
