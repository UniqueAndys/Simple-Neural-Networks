#include <iostream>
#include <random>

using namespace std;

int main()
{
	default_random_engine e;
	uniform_int_distribution<unsigned> u(0, 1);
	int n1, n2, n3;

  cout << "topology: 2 4 1" << endl;
	for (int i = 0; i < 1000; ++i) {
		n1 = u(e);
		n2 = u(e);
		n3 = n1 ^ n2;

		cout << n1 << " " << n2 << " " << n3 << endl;
	}

	return 0;
}
