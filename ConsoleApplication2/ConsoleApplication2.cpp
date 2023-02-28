
#include <iostream>
using namespace std;
int main()
{
	int x[3][3], i, j, cont = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			cout << "adad bezan ";
			cin >> x[i][j];
		}
	cont = x[0][0] * ((x[1][1] * x[2][2]) - (x[1][2] * x[2][1])) - x[0][1] * ((x[1][0] * x[2][2]) - (x[1][2] * x[2][0])) + x[0][2] * ((x[1][0] * x[2][1]) - (x[2][0] * x[1][1]));
	cout << "javab = " << cont;
}

