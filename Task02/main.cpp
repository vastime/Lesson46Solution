#include <iostream>
using namespace std;

int main() {
	int n, m;
	int** matrix;

	cout << "Input size of the matrix(n and m): ";
	cin >> n >> m;

	matrix = new int*[n];

	for (int  i = 0; i < n; i++)
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
	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

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
