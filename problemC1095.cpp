// CPP program to find the
// blocks for given number.
#include <bits/stdc++.h>
using namespace std;

int block(long int x)
{
	vector<long int> v;

	// Converting the decimal number
	// into its binary equivalent.
	cout << "Blocks for " << x << " : ";
	while (x > 0)
	{
		v.push_back(x % 2);
		x = x / 2;
	}

	// Displaying the output when
	// the bit is '1' in binary
	// equivalent of number.
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] == 1)
		{
			cout << i;
			if (i != v.size() - 1)
				cout << ", ";
		}
	}
	cout << endl;
}

// Driver Function
int main()
{
	block(7);
	block(1213);
	block(29);
	block(100);
	return 0;
}

