#include <iostream>
#include <vector>
#include <string>
// #include <cstring>

using namespace std;

int main(){

/*	合法性,vector<string>::iterator
	*iter++		合法
	(*iter)++
	*iter.empty()	
	iter->empty();合法
	++*iter
	iter++->empty()		合法

*/

/*
	//输出类型长度
	cout << "type\t\t\t" << "size" << endl
		<< "bool\t\t\t" << sizeof(bool) << endl
		<< "char\t\t\t" << sizeof(char) << endl
		<< "signed char\t\t" << sizeof(signed char) << endl
		<< "unsigned char\t\t" << sizeof(unsigned char) << endl
		<< "wchar_t\t\t\t" << sizeof(wchar_t) << endl
		<< "short\t\t\t" << sizeof(short) << endl
		<< "signed short\t\t" << sizeof(signed short) << endl
		<< "unsigned short\t\t" << sizeof(unsigned short) << endl
		<< "int\t\t\t" << sizeof(int) << endl
		<< "signed int\t\t" << sizeof(signed int) << endl
		<< "unsigend int\t\t" << sizeof(unsigned int) << endl
		<< "long\t\t\t" << sizeof(long) << endl
		<< "sigend long\t\t" << sizeof(signed long) << endl
		<< "unsigned long\t\t" << sizeof(unsigned long) << endl
		<< "float\t\t\t" << sizeof(float) << endl
		<< "double\t\t\t" << sizeof(double) << endl
		<< "long double\t\t" << sizeof(long double) << endl;


	int x[10],* p =x;
	cout<<sizeof(x)/sizeof(*x)<<endl;
	cout<<sizeof(p)/sizeof(*p);		//p的空间 和p指向的int型空间
*/
/*	
	string s="word";

	//string pl = s+s[s.size() - 1] == 's' ? "":"s";			前者是string型，不能和's'相比较，改为

	string pl = s + (s[s.size() - 1] == 's'? "":"s");

	cout<<pl<<endl;
*/
/*
	求值顺序在c++中不能保证
	if(a[ix++]<a[ix])
	如果ix=0,可能有两种结果
	a[0]<a[0];right to left
	a[0]<a[1];left to right

	一种安全机制:
	a[ix] < a[ix+1]  ok!
*/

/*关于是否初始化的问题

对于有默认构造函数的e.g:

	string *ps = new string();
	是否有括号无所谓

对于没有默认的;
	int *pi = new int();	//初始化为0
	int *pi2 = new int;		//没有初始化
	
*/

/*delete p(point) 之后，p 是悬垂指针，还是指向原来的地址，但是原来指向的对象的
	内存已经被释放了，是很危险的，最好重设p为0
*/

/*习题5.30是个好问题
	vector<string> **pvec2 = new vector<string>[10];
	这句话我有点不懂哦
	分析下面两句话的返回值:
	new vector<string> ivec(10);
	new vector<string> ivec2[10];
*/

/*强制转换是危险的
	int *pi;
	char *pc = reinterpret_cast<char *>(ip);
	string str(pc);		//一个有趣的错误
*/





	return 0;
}