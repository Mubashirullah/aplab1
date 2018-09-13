#include "MatrixLib.h"

using namespace MatrixLib;
using namespace std;
#include <vector>

vector <vector <double>> Class1::Multiply(vector<vector<double>> A, vector<vector<double>> B)
{
	int columnA = A[0].size;
	int rowB = B.size;

	if (columnA != rowB)
	{
		cout << "Dimension not compatible" << endl;
		return -1;
	}
}
