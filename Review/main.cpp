#include <iostream>
#include <climits>

using namespace std;

int main(){

/*注意事项
	cout<<string 可以显示string
	操作符重载

	换行用\n和endl

	赋值从右到做
	a=b=v=23

	拼接
	cout << "abcdef"
			<<"efg";
	换行符和空格可替换

	调用函数calling function

	return 0 返回给操作系统

	处理数据

	3个基本属性：
	存储在哪儿
	是什么值
	类型

	多个单词的名称两种方式来表示：sonic_money or sonicMoney
	可以用前缀名来表示eg:	intSonicMoney
	others: str sz p b c

	1字节表示：8位 0-255 or -128-127
	2字节表示：16位	0-65535 or -32768-32767

	

*/
/*观察int short long 和bit

	int n=INT_MAX;
	short n_short=SHRT_MAX;
	long n_long=LONG_MAX;

	cout<<"int is "<<sizeof (n)<<"bytes"<<endl;
	cout<<"short is "<<sizeof (n_short)<<"bytes"<<endl;
	cout<<"long is "<<sizeof (n_long)<<"bytes"<<endl;

	cout<<"max of int is "<<n<<endl;
	cout<<"max of short is "<<n_short<<endl;
	cout<<"max of long is "<<n_long<<endl;

	cout<<"min of int is "<<INT_MIN<<endl;
	cout<<"bits per byte is "<<CHAR_BIT<<endl;

	c++prime page 55 in details
*/
/*进制,默认情况下cout用十进制来表示数,可以用cout<<hex 等来改变

	int dec=34;	//十进制
	int hex=0x34;	//十六进制
	int oct=034;	//八进制

	cout << "value of 34:\n"
			<<"in dec "<<dec<<endl
			<<"in hex "<<hex<<endl
			<<"in oct "<<oct<<endl;
*/

/*可以使用cout.put()，是ostream类的一个成员函数
	原因：早期c++,字符变量为char,常量为short or int;
	所以对于cout他们是不一样的

	转义字符 \ 为 \"

	退格为 \b

	回车 \r

	宽字符wchar_t,对应wcin,wcout

	应在声明中对const 初始化

	cout << int('q')




*/

	return 0;
}