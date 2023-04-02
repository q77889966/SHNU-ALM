#include<iostream>
using namespace std;
int main() {
	char m[] = "Hello.";

	char* n = "Shanghai";



	char* p;

	p = m;

	p[2] = 'x';

	puts(m);

	p = n;

	p[2] = 'x';

	puts(n);
}
//	“Shanghai”为const char常量， p=n把指针p指向指针n指向的地址，所以第二次p[2] = 'x'; 尝试修改了常量字符串“shanghai”不通过