#include <iostream>
using namespace std;

int main() {
	int n, m;
	int** matrix;

	cout << "Input size of the matrix(n and m): ";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		//matric[i] = new int[m];
		*(matrix + 1) = new int[m];
	}

	/*int size = n * m;*/


	for (int i = 0; i < n * m; i++)
	{

		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int ilocal = -1;
	int jlocal = -1;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < m - 1; j++) {
			if (matrix[i][j] < matrix[i - 1][j] && matrix[i][j] < matrix[i + 1][j] &&
				matrix[i][j] < matrix[i][j - 1] && matrix[i][j] < matrix[i][j + 1]) {
				ilocal = i;
				jlocal = j;
				goto label1;
			}

		}
	}

label1:


	if (matrix[0][0] < matrix[0][1] && matrix[0][0] < matrix[1][0]) {
		ilocal = 0;
		jlocal = 0;
	}
	else if (matrix[0][m - 1] < matrix[0][m - 2] && matrix[0][m - 1] < matrix[1][m - 2]) {
		ilocal = 0;
		jlocal = m - 1;
	}
	else if (matrix[n-1][m - 1] < matrix[0][m - 2] && matrix[0][m - 1] < matrix[1][m - 2]) {
		ilocal = 0;
		jlocal = m - 1;
	}



	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	////logic
	//int imax = 0;
	//int jmax = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++)
	//	{
	//		if (matrix[m * i + j] > matrix[m * imax + jmax]) {
	//			imax = i;
	//			jmax = j;
	//		}
	//	}

	//}
	//cout << "Max element - matrix[" << imax + 1 << "][" << jmax + 1 <<
	//	"]" << endl;

	delete[] matrix;

	return 0;
}
