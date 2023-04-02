#include<iostream>
#include<cmath>
using namespace std;
const int N = 1000;
char a[N][N];
void draw(int x, int y, int n)
{

	if (n == 1) {
		a[x][y] = '+';  // 当 n == 1 时，只有一个点，赋值为 '+'
		return;
	}
	int cx = x + n / 2;
	int cy = y + n / 2;
	for (int j = y; j < y + n; j++) a[cx][j] = '-';  // 横线
	for (int i = x; i < x + n; i++) a[i][cy] = '|';  // 竖线
	a[cx][cy] = '+';  // 交点
	draw(x, y, n / 2);  // 左上角的矩阵
	draw(x, cy + 1, n / 2);  // 右上角的矩阵
	draw(cx + 1, y, n / 2);  // 左下角的矩阵
	draw(cx + 1, cy + 1, n / 2);  // 右下角的矩阵
}
int main()
{
	int n;
	cin >> n;
	n = (pow(2, n) - 1);
	draw(0, 0, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j];
		}
		cout << endl;
	}
	return 0;
}
