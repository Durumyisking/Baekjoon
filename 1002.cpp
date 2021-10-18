#include <iostream>
#include <math.h>


using namespace std;


int main()
{

	int x1, y1, r1;
	int x2, y2, r2;

	int tcase;
	float pita;
	cin >> tcase;

	float *result = new float[tcase];
	int bigr, smallr;

	for (int i = 0; i < tcase; ++i)
	{
		cin >> x1, cin >> y1, cin >> r1;
		cin >> x2, cin >> y2, cin >> r2;

		bigr = r1 > r2 ? r1 : r2;
		smallr = r1 < r2 ? r1 : r2;

		pita = sqrt(fabs(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

		if (r1 + r2 < pita)
			result[i] = 0;
		else if (pita == 0 && r1 == r2)
			result[i] = -1;
		else if (r1 + r2 == pita)
			result[i] = 1;
		else if (pita + smallr == bigr)
			result[i] = 1;
		else if (pita<bigr && pita+smallr < bigr)
			result[i] = 0;
		else
			result[i] = 2;

	}
	
	for (int i = 0; i < tcase; ++i)
		cout << result[i] << endl;


}