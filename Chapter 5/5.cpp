#include <iostream>
#include <vector>
#include <string>
// #include <cstring>

using namespace std;

int main(){

/*	�Ϸ���,vector<string>::iterator
	*iter++		�Ϸ�
	(*iter)++
	*iter.empty()	
	iter->empty();�Ϸ�
	++*iter
	iter++->empty()		�Ϸ�

*/

/*
	//������ͳ���
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
	cout<<sizeof(p)/sizeof(*p);		//p�Ŀռ� ��pָ���int�Ϳռ�
*/
/*	
	string s="word";

	//string pl = s+s[s.size() - 1] == 's' ? "":"s";			ǰ����string�ͣ����ܺ�'s'��Ƚϣ���Ϊ

	string pl = s + (s[s.size() - 1] == 's'? "":"s");

	cout<<pl<<endl;
*/
/*
	��ֵ˳����c++�в��ܱ�֤
	if(a[ix++]<a[ix])
	���ix=0,���������ֽ��
	a[0]<a[0];right to left
	a[0]<a[1];left to right

	һ�ְ�ȫ����:
	a[ix] < a[ix+1]  ok!
*/

/*�����Ƿ��ʼ��������

������Ĭ�Ϲ��캯����e.g:

	string *ps = new string();
	�Ƿ�����������ν

����û��Ĭ�ϵ�;
	int *pi = new int();	//��ʼ��Ϊ0
	int *pi2 = new int;		//û�г�ʼ��
	
*/

/*delete p(point) ֮��p ������ָ�룬����ָ��ԭ���ĵ�ַ������ԭ��ָ��Ķ����
	�ڴ��Ѿ����ͷ��ˣ��Ǻ�Σ�յģ��������pΪ0
*/

/*ϰ��5.30�Ǹ�������
	vector<string> **pvec2 = new vector<string>[10];
	��仰���е㲻��Ŷ
	�����������仰�ķ���ֵ:
	new vector<string> ivec(10);
	new vector<string> ivec2[10];
*/

/*ǿ��ת����Σ�յ�
	int *pi;
	char *pc = reinterpret_cast<char *>(ip);
	string str(pc);		//һ����Ȥ�Ĵ���
*/





	return 0;
}