#include <iostream>

namespace first{
	auto x = 0;
	auto y = " hello ";
	auto z = 3.4;
}
namespace second{
	auto x = 1;
	auto y = " world ";
	auto z = 6.9;
}


using namespace std;
using namespace first;
int main(void)
{
	cout << x << y << z << endl;
}
