#include <iostream>
#include <vector>
#include <numeric>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, const char *argv[])
{
    vector<int> ivec(10, 20);
    int sum = accumulate(ivec.begin(), ivec.end(), 0);
    cout << "sum = " << sum << endl;
    return 0;
}
