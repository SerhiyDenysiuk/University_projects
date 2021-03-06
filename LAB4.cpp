// LAB4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <math.h>

using namespace std;
const short N = 5;

class Matrix {
	int matrix[N][N];
private:
	int i, j;
public:
	void inputMatrix();
	void writeMatrix();
	void makeArithmeticAverage();
	void Sort();
};

void Matrix::inputMatrix() {
	cout << "Write matrix:" << endl;

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}

	cout << "\n\nInput matrix:" << endl;

	for (i = 0; i < N; i++, cout << endl) {
		for (j = 0; j < N; j++) {
			printf("%5d ", matrix[i][j]);
		}
	}
}

void Matrix::Sort()


{
	int i, k, j, c;
	for (i = 0; i < N; i++)
	{
		for (k = N - 1; k >= 0; k--)
		{
			for (j = 0; j < k; j++)
			{
				if (matrix[i][j] < matrix[i][j + 1])
				{
					c = matrix[i][j];
					matrix[i][j] = matrix[i][j + 1];
					matrix[i][j + 1] = c;
				}
			}
		}
	}
}

void Matrix::writeMatrix()
{
	cout << endl << "Sorted matrix:" << endl;

	for (i = 0; i < 5; i++, cout << endl) {
		for (j = 0; j < 5; j++) {
			printf("%5d ", matrix[i][j]);
		}
	}
}


void Matrix::makeArithmeticAverage() {
	double sum = 0;
	double gm, GeometricAverage = 1;
	int j, i;
	double counter;
	for (j = 0; j < N; j++) {
		counter = 0;
		double sum = 0;
		for (i = 0; i < N; i++) {
			sum += matrix[i][j];
		}
		counter = sum / N;
		cout << "Arithmetic mean: " << counter << endl;
		GeometricAverage = GeometricAverage * counter;
	}
	gm = pow(fabs(GeometricAverage), 1.0 / N);
	cout << "Geometric Mean: " << gm << endl;
}








int main(void) {
	Matrix M;

	M.inputMatrix();
	M.Sort();

	M.writeMatrix();
	M.makeArithmeticAverage();



	system("PAUSE");
	return 0;
}

