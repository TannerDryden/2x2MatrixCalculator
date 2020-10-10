
#include <iostream>
#include <iomanip>

using namespace std;

const int M = 2, N = 2, R = 2;

void matrixMul(int arr[M][N], int arr2[N][R], int arrMM[M][R]);
void outputMatrix(int arr[M][N]);

int main()
{
	int arr[M][N];
	int arr2[N][R];
	int arrMM[M][R] = { 0 };

	cout << "INPUT FIRST (2X2) MATRIX:" << endl;
	cout << "Type int 2 values for row 1 separated by spaces: ";
	cin >> arr[0][0] >> arr[0][1];
	cout << "Type int 2 values for row 2 separated by spaces: ";
	cin >> arr[1][0] >> arr[1][1];

	cout << "INPUT SECOND (2X2) MATRIX:" << endl;
	cout << "Type int 2 values for row 1 separated by spaces: ";
	cin >> arr2[0][0] >> arr2[0][1];
	cout << "Type int 2 values for row 2 separated by spaces: ";
	cin >> arr2[1][0] >> arr2[1][1];

	cout << endl;

	matrixMul(arr, arr2, arrMM);

	cout << endl;
	outputMatrix(arr);
	cout << "Times\n";
	outputMatrix(arr2);
	cout << "Equals\n";
	outputMatrix(arrMM);

}

void matrixMul(int arr[M][N], int arr2[N][R], int arrMM[M][R]) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < R; j++) {
			for (int k = 0; k < N; k++) {
				arrMM[i][j] += arr[i][k] * arr2[k][j];
			}


		}
	}
}
void outputMatrix(int arr[M][N]) {
	for (int i = 0; i < M; i++) {
		cout << setw(5) << "";
		for (int j = 0; j < N; j++) {
			cout << setw(5) << arr[i][j];
		}
		cout << endl;
	}

}