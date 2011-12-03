#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cassert>
using namespace std;

/*
void swap(int *x, int *y){
	int temp = *y;
	*y = *x;
	*x = temp;
}
*/
	
/*	//从输入流读取数据，在某个元素前不执行特定操作
	while(cin>>s && s !=sought )
		;		//空语句
*/
/*条件表达式中定义的值必须初始化
	e.g:
	if( int i = compute_value());		//convert to bool
	其他条件，部分类可以用在条件表达式中e.g : io
*/

/*
	//if 语句有潜在的二义性，小心悬垂else

	//下面两中表达

	if( minVal < arr[ix])
		{}
	else if(minVal = arr [ix]){
		occur++;
	}
	else {
		minVal = arr[ix];
		occur = 1;
	}

	if (minVal <= arr[ix]){
		if(minVal = arr[ix])
			occur++;
	}
	else {
		minVal = arr[ix];
		occur = 1;
	}

*/
/*bitset to_ulong 的error捕捉
	bitset<100> bs;
	for(size_t ix=0;ix != bs.size(); ix ++)
		bs[ix] = 1;
	try{
		bs.to_ulong();			//产生runtime error
	}
	catch(runtime_error err){
		cout<<err.what()<<endl;
	}
	return 0;
*/
/*这是哪里的问题哦，好好研究
	string currword,preword;
	cout<<"enter words until ctrl+z:"<<endl;

	while(cin>>currword){
		#ifndef  NDEBUG
		cout<<currword<<endl;
		#endif

		if(! isupper(currword[0]))
			continue;
		if(currword == preword)
			break;
		else
			preword = currword;
	}
	if( currword == preword &&! currword.empty())
		cout<<"the repeated word is :"<<currword<endl;
	else
		cout<<"there is no word"<<endl;

*/
/*
我还是不太明白这句话
	string s;
	while (cin>>s && s != "abc")  {}		//empty body
	assert(cin);

	return 0;
/*

/* x的y 次幂的一个算法

	for(int loop = 0;loop != y; ++loop)
		result * = x;

	返回绝对值的一个写法
	return x>0?x:-x;

	指针形参那部分还是有点问题
	主要是const的问题，恼火
*/

//习题7.6

/*	cout<<"please enter two int:"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"before swap:"<<endl;
	cout<<"x is "<<x<<endl<<"y is "<<y;

	swap(&x,&y);
	cout<<"after swap"<<endl;
	cout<<"x is "<<x<<endl<<"y is "<<y;
*/	
/*关于指针的参数传递
依赖指向的对象是CONST OR 不是，不是的话可以改变值

const形参：副本传递
引用形参
1.返回额外的值（信息）
2.利用const避免复制
3.不能传递右值，可改为const
4.下面的调用不能实现

问题：什么时候该使用指针形参，什么时候使用引用形参
*/
/*
这是一个关于const的看法
string::size_type find_char(string &s,char c){
		string::size_type i = 0;
		while(i != s.size() && s[i] != c){
			i++;
		}
		return i;
}

	bool is_sencence(const string &s)
		return (find_char(s,'.')== s.size() -1);
}
*/

/*	
	使用迭代器来引用vector
vector<int> ivec(10,9);

void print_vector(vector<int>::const_iterator beg, vector<int>::const_iterator end){
	while(beg != end){
		cout<<*beg++;
		if(beg != end) cout<<" ";
	}
	cout<<endl;
	
	}

int main(){
	print_vector(ivec.begin(),ivec.end());
	return 0;
}

*/

/*
三种数组形参以int为例：
(int *),(int []),(int [n]),都是int* 型

数组长度的检查会被编译器忽略,
但是在引用时会检查
方式：void f(int (&a)[10])		这里的()是必须的

不需要修改数组时，定义;
void f(const int *)

多维数组的传递;
void (int (matrix *)[vol], int row_size)
void(int matric[][vol], int row_size)

编译器忽略第一维的长度，最好不写


下面的区别:
int *matrix [10];
int (*matrix)[10];

*/
//防止越界的三种方法

//1.标准库规范解决:
/*
void print_arr(int *beg,int *end){
	while(*beg != *end)
		cout<<*beg++<<endl;

}
*/

/*显示展示数组个数
void print_arr(const int arr[], size_t size){
	for(int i = 0; i !=size; i++ ){
		cout<<arr[i]<<endl;
	}

}
*/

//还有中就是同一指向城里int begin*;int *end;
/*int main(){
	int arr[9] = {10,29,34,231,32,23,1,313,31};
//	print_arr(arr,arr+9);
	print_arr(arr, sizeof(arr)/sizeof(*arr));
	
	return 0;


}

*/
/*这个程序会报错，目的是返回vector<double> 的和
double print_vector(vector<double>::const_iterator beg,vector<double>::const_iterator end){
	double sum = 0.0;
	while(*beg != *end)
		sum += *beg++;
	return sum;
}

int main(){
	cout<<"please enter numbers,ctrl+z to end:"<<endl;
	vector<double> dvec;
	double dval = 0;
	while(cin>>dval)
		dvec.push_back(dval);

	cout<<"the sum is:"
			<<print_vector(dvec.begin(),dvec.end())<<endl;
}

*/

/*
//7-15.cpp
//为什么参数是这样的?
int main(int argc,char **argv){
	if(argc != 3){
		cout<<"3 arguments!"<<endl;
		return -1;
	}
	cout<<"sum of"<<argv[1]<<"and"
		<<argv[2]<<"is:"<<(atof(argv[1])+ atof(argv[2]))<<endl;
}
*/

//void f(...) or void f(list,...)列举不明确的形参

//cstdlib定义了许多精确返回值

//！不要返回局部变量的引用

/*
//这里名字前的&是什么意思
char &c_str(string &s,string::size_type ix){
	return s[ix];
}
int main(){
	string s("this is sonic");
	cout<<s<<endl;
	c_str(s,0) = 'A';
	cout<<s<<endl;
	return 0;
}

*/

//递归
/*
int factorial(int val){
	if(val > 1)
		return factorial(val - 1)*val;
	return 1;
}
*/
/*
int rgcd(int v1,int v2){
	if(v2)
		return rgcd(v2,v1%v2);
	return v1;
}
*/

//默认形参的一个用法，习题7-26

/*
string make_plural(size_t flag,const string &word,const string &ending = "s"){
	return (flag == 1)?word+ending:word;
}
int main(){
	cout<<make_plural(1,"success","es")<<endl
		<<make_plural(0,"success")<<endl
		<<make_plural(1,"failure","s")<<endl
		<<make_plural(0,"failure")<<endl;

}

*/

/*
自动对象：每次调用函数时创建和撤销
形参也是自动对象

静态局部对象：即static
下面是一个是实例
*/

/*
int fn(int val){
	static int result = 1;
	return result *=val;
}

int main(){
	cout<<"please enter the num to calculate:"<<endl;
	int i = 0;
	cin>>i;
	for(int j = 1;j != i+1;j++)
		cout<<fn(j)<<endl;
	return 0;
}

*/

/*
size_t call_back(){
	static int call = -1;
	return ++call;
}

int main(){
	cout<<"enter the number u want to call:"<<endl;
	int i =0,j =0;
	cin>>i;
	while(j != i){
		cout<<call_back()<<endl;
		j++;
	}
	return 0;
}

*/
/*
class Sales_item{
public:
	double avg_price() const;
//后面那个const改变了隐含的this形参的类型,this是const Sales_item *,指向谁看实例化的对象
	bool same_isbn(const Sales_item &rhs)	const{
		return isbn == rhs.isbn;
	}
//定义一个构造函数，还有初始化列表
	Sales_item(): units_sold(0),revenue(0.0) { }
//private:
	std::string isbn;
	unsigned units_sold;
	double revenue;

};
*/

//e.g : if(total.same_isbn(trans))的意思是把trans和total的isbn相比较

//在类的外面定义必须指定他是类的成员e.g:

/*
double Sales_item::avg_price() const{
//这里是防止units_sold 为0,也可以抛出异常来做，怎么做？
//这一块好像不对，留下
//	try{ return revenue / units_sold;}
//	catch(runtime_error err){
//		cout<<err.what()<<"units_sold can't be 0!"<<endl;
//	}
//
//
//	if(units_sold)
//		return revenue/units_sold;
//	else
//		return 0;
//
}
*/

/*测试try-catch用
int main(){
	Sales_item abc;
	abc.units_sold = 0;
	abc.revenue = 34;
	abc.avg_price();
	return 0;
}

*/

//7.31 - 7.33 的题没做，看了书上的要求再去做！！！！！！！！！！！！！！！！！！！！

//局部函数声明将使外部函数重载无效,但是引用时改变const却是新的函数

//指向重载的函数必须是精确匹配

