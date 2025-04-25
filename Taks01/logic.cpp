#include "logic.h"

//get_extreme_position(int* array, int n, int m, int* imax, int* jmax); {
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (array[i * m + j] > array[*imax * m + *jmax]) {
//				*imax = i;
//				*jmax = j;
//			}
//		}
//	}
//}

void get_extreme_position(int* array, int n, int m, int& imax, int& jmax) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (array[i * m + j] > array[imax * m + jmax]) {
				imax = i;
				jmax = j;
			}
		}
	}
}