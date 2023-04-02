//用模板实现选择法排序，要求能够对整数、浮点数、指针进行从小到大的排序
#include <iostream>
using namespace std;
template <typename T>
void Sort(T arr[], int n) {//n为元素个数
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(arr[i], arr[min]);
		}
	}
}


