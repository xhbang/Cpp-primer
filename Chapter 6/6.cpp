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
	
/*	//����������ȡ���ݣ���ĳ��Ԫ��ǰ��ִ���ض�����
	while(cin>>s && s !=sought )
		;		//�����
*/
/*�������ʽ�ж����ֵ�����ʼ��
	e.g:
	if( int i = compute_value());		//convert to bool
	������������������������������ʽ��e.g : io
*/

/*
	//if �����Ǳ�ڵĶ����ԣ�С������else

	//�������б��

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
/*bitset to_ulong ��error��׽
	bitset<100> bs;
	for(size_t ix=0;ix != bs.size(); ix ++)
		bs[ix] = 1;
	try{
		bs.to_ulong();			//����runtime error
	}
	catch(runtime_error err){
		cout<<err.what()<<endl;
	}
	return 0;
*/
/*�������������Ŷ���ú��о�
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
�һ��ǲ�̫������仰
	string s;
	while (cin>>s && s != "abc")  {}		//empty body
	assert(cin);

	return 0;
/*

/* x��y ���ݵ�һ���㷨

	for(int loop = 0;loop != y; ++loop)
		result * = x;

	���ؾ���ֵ��һ��д��
	return x>0?x:-x;

	ָ���β��ǲ��ֻ����е�����
	��Ҫ��const�����⣬�ջ�
*/

//ϰ��7.6

/*	cout<<"please enter two int:"<<endl;
	int x,y;
	cin>>x>>y;
	cout<<"before swap:"<<endl;
	cout<<"x is "<<x<<endl<<"y is "<<y;

	swap(&x,&y);
	cout<<"after swap"<<endl;
	cout<<"x is "<<x<<endl<<"y is "<<y;
*/	
/*����ָ��Ĳ�������
����ָ��Ķ�����CONST OR ���ǣ����ǵĻ����Ըı�ֵ

const�βΣ���������
�����β�
1.���ض����ֵ����Ϣ��
2.����const���⸴��
3.���ܴ�����ֵ���ɸ�Ϊconst
4.����ĵ��ò���ʵ��

���⣺ʲôʱ���ʹ��ָ���βΣ�ʲôʱ��ʹ�������β�
*/
/*
����һ������const�Ŀ���
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
	ʹ�õ�����������vector
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
���������β���intΪ����
(int *),(int []),(int [n]),����int* ��

���鳤�ȵļ��ᱻ����������,
����������ʱ����
��ʽ��void f(int (&a)[10])		�����()�Ǳ����

����Ҫ�޸�����ʱ������;
void f(const int *)

��ά����Ĵ���;
void (int (matrix *)[vol], int row_size)
void(int matric[][vol], int row_size)

���������Ե�һά�ĳ��ȣ���ò�д


���������:
int *matrix [10];
int (*matrix)[10];

*/
//��ֹԽ������ַ���

//1.��׼��淶���:
/*
void print_arr(int *beg,int *end){
	while(*beg != *end)
		cout<<*beg++<<endl;

}
*/

/*��ʾչʾ�������
void print_arr(const int arr[], size_t size){
	for(int i = 0; i !=size; i++ ){
		cout<<arr[i]<<endl;
	}

}
*/

//�����о���ͬһָ�����int begin*;int *end;
/*int main(){
	int arr[9] = {10,29,34,231,32,23,1,313,31};
//	print_arr(arr,arr+9);
	print_arr(arr, sizeof(arr)/sizeof(*arr));
	
	return 0;


}

*/
/*�������ᱨ��Ŀ���Ƿ���vector<double> �ĺ�
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
//Ϊʲô������������?
int main(int argc,char **argv){
	if(argc != 3){
		cout<<"3 arguments!"<<endl;
		return -1;
	}
	cout<<"sum of"<<argv[1]<<"and"
		<<argv[2]<<"is:"<<(atof(argv[1])+ atof(argv[2]))<<endl;
}
*/

//void f(...) or void f(list,...)�оٲ���ȷ���β�

//cstdlib��������ྫȷ����ֵ

//����Ҫ���ؾֲ�����������

/*
//��������ǰ��&��ʲô��˼
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

//�ݹ�
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

//Ĭ���βε�һ���÷���ϰ��7-26

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
�Զ�����ÿ�ε��ú���ʱ�����ͳ���
�β�Ҳ���Զ�����

��̬�ֲ����󣺼�static
������һ����ʵ��
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
//�����Ǹ�const�ı���������this�βε�����,this��const Sales_item *,ָ��˭��ʵ�����Ķ���
	bool same_isbn(const Sales_item &rhs)	const{
		return isbn == rhs.isbn;
	}
//����һ�����캯�������г�ʼ���б�
	Sales_item(): units_sold(0),revenue(0.0) { }
//private:
	std::string isbn;
	unsigned units_sold;
	double revenue;

};
*/

//e.g : if(total.same_isbn(trans))����˼�ǰ�trans��total��isbn��Ƚ�

//��������涨�����ָ��������ĳ�Աe.g:

/*
double Sales_item::avg_price() const{
//�����Ƿ�ֹunits_sold Ϊ0,Ҳ�����׳��쳣��������ô����
//��һ����񲻶ԣ�����
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

/*����try-catch��
int main(){
	Sales_item abc;
	abc.units_sold = 0;
	abc.revenue = 34;
	abc.avg_price();
	return 0;
}

*/

//7.31 - 7.33 ����û�����������ϵ�Ҫ����ȥ������������������������������������������

//�ֲ�����������ʹ�ⲿ����������Ч,��������ʱ�ı�constȴ���µĺ���

//ָ�����صĺ��������Ǿ�ȷƥ��

