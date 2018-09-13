#include "MatrixLib.h"
#include "Stdafx.h"

using namespace MatrixLib;
using namespace std;
#include <vector>
#include <iostream>

vector <vector <double> >Class1::Multiply(vector<vector<double> > A, vector<vector<double> > B)
{
	int columnA = A[0].size();									//Saving variables to check dimensions.
	int rowB = B.size();

	int rowA = A.size();
	int colB = B[0].size();                                    //Dimensions for the new matrix. rowA * colB.
	vector<vector<double> > C(rowA, vector<double>(colB));

	if (columnA != rowB)
	{
		cout << "Dimension not compatible" << endl;
	}
	else
	{					
		for (int i = 0; i < rowA; i++)
		{
			for (int k = 0; k < colB; k++)
			{
				for (int inner = 0; inner < columnA; inner++)
				{
					C[i][k] += A[i][inner] * B[inner][k];
				}
			}
		}
	}
	return C;
}
