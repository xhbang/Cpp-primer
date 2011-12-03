#include <iostream>
#include <vector>
#include <string>
#include <cstring>		//在习题4.25用到

using namespace std;

int main(){

/*循环赋值
	const size_t array_size=10;
	int ia[array_size];

	for(size_t ix=0;ix!=array_size;ix++)
		ia[ix]=ix;

	如果是vector用vector<int>::size_type ix
*/

/*使用指针的注意事项
	c++不能检测指针是否初始化，是十分危险的
	指针保留0值(或者NULL)，表示不指向任何对象
	不能用int来，比如int i=0，但是const可以

	ip2-ip1 的类型是ptrdiff_t(可能是负数)

	p[1] means *(p+1)

	不能使用指向const的指针修改

*/
/*
指针是数组的迭代器
	const size_t arr_sz=5;
	int int_arr[arr_sz]={1,2,3,4,5};
	for(int *pbegin=int_arr, *pend=int_arr+arr_sz;pbegin!=pend; ++pbegin)
		cout<<*pbegin<<" ";

*/
/*
	问题：
	p1,p2 指向同一数组
	p1+=p2-p1 是什么意思

	int arr[5]={1,2,3,4,5};
	int *p1,*p2;
	p1=arr;
	p2=&arr[4];
	p1+=p2-p1;
	cout<<*p1<<*p2<<endl;
*/

/*
	const char*p ="some value";
	while(*p){
		//do something to p
		++P
	}
*/
/*
	strcpy,strcat 使用后字符串加null,数组元素多一位
	尽量使用strncpy,strncat
	特别是用string 标准库类型比较好，相应的是+=...
*/

/* 
	动态分配数组
	size_t n  = get_size();
	int *p = new arr[4];
	for( int *q=p; q!=p+n ;q++)
		//process

		如果size_t 返回0，一样可用


	释放空间
	delete [] p ,即是p指向的空间
*/
/*习题4.28 未能解决输入的问题,maybe ctrl+z
	vector<int> ivec;
	int n,len;
	cout<<"enter number,0 to end";
	while(cin>>n)
		ivec.push_back(n);
	len=ivec.size();

	int *p=new int[len];
	int i=0;
	for(int *q=p;q!=p+len;q++)
		*q=ivec[i++];
	for(int *q=p;q!=p+len;q++)
		cout<<*q<<" ";

*/
/*初始化vector
	vector<tpye> name(arr,arr+arr_sz) 复制数组全部
	用数组初始化vector
*/



/*********************习题4.31到4.35***************************/

/*	 数组到数组，vector 到vector

	const int arr_sz =10;
	int arr1[arr_sz] = {0,1,2,3,4,5,6,7,8,9};
	int arr2[arr_sz];
	
	for(size_t ix=0;ix!=arr_sz;ix++){
		arr2[ix]=arr1[ix];
		cout<<arr2[ix]<<" ";
	}
*/

/*	vector to vector

	vector<int> ivec1(10,30);
	vector<int> ivec2;

	for(vector::iterator iter=ivec1.begin(); iter!=ivec1.end(); iter++)
		ivec2[iter]=ivec1[iter];			//or ivec2.push_back(*iter)

*/

/*
	string word;
	vector<string> ivec;
	while(cin>>word)
		ivec.push_back(word);
	习题4.34 没解决
*/

/*	比较数组

	const int arr_sz  = 5;
	int arr1[arr_sz],arr2[arr_sz];
	size_t n=0;

	cout<<"enter to fill array one "<<endl;
	for(;n!=5;n++)
		cin>>arr1[n];

	cout<<"enter to fill array two"<<endl;
	for(n=0;n!=arr_sz;n++)
		cin>>arr2[n];

	for(n=0;n!=arr_sz;n++)
		if(arr1[n]!=arr2[n]){
			cout<<"array 1 is different from array 2"<<endl;
			return 0;
		}		
	cout<<"arr 1 is same with array 2";		//不用else

*/
	//比较vector

/*调试有错误
	vector<int> ivec,ivec2;
	int ival;

	cout<<"enter to fill vector 1,-1 to end"<<endl;	//经典或者ctrl +z to end ,while(cin>>ival)
	cin>>ival;
	while(ival != -1){
		ivec.push_back(ival);
		cin>>ival;
	}

	cout<<"enter to fill vector 2,-1 to end"<<endl;
	cin>>ival;
	while(ival!=-1){
		ivec2.push_back(ival);
		cin>>ival;
	}


		if(ivec.size()!=ivec2.size()){
			cout<<"different\n";
			return 0;
		}
		else if(ivec.size ()==0){
			cout<<"same"<<endl;
			return 0;
		}
		else{
			vector<int>::iterator iter1,iter2;		//不能是vector::iterator
			iter1=ivec.begin();
			iter2=ivec2.begin();

			while(*iter1==*iter2 && iter1 != ivec.end() && iter2 != ivec.end() ){
				++iter1;
				++iter2;
			}//这一段比较是经典之作
			
			if(iter1 == ivec.end())	//不要写成=
				cout<<"the same\n";
			else
				cout<<"different\n";
		}

*/
/*
	多维指针和数组，假比说是arr[row][col]

	typedef int int_arr[col];
	int_arr *p = arr;

	for(;*p!=arr+row;++*p)	//要不然就写int (*p)[col] = arr
		for(int *q=*p;q != *p +col ;++*q)	//里面分别是int 和q
			cout<<*q<<endl;

*/

/*************习题4.25*****************/

/*	//c++ style

	string str1,str2;
	cin>>str1>>str2;
	if( str1>str2 )
		cout<<"string 1 is bigger"<<endl;
	else if (str1< str2)
		cout<<"string 1 is smaller";
	else
		cout<<"same"<<endl;
*/

/*
	//c style
	const int arr_sz= 50;

	char *str1,*str2;			//为什么要用char?

	str1 =new char [arr_sz];			//new返回指向数组第一个元素的指针
	str2 =new char [arr_sz];


	if(str1 == NULL || str2==NULL){
		cout<<"no enough memory"<<endl;
		return -1;
	}

	cin>> str1 >> str2;

	int result=0;
	result=strcmp (str1,str2);

	if(result > 0)
		cout<<"string 1 bigger";
	else if(result < 0)
		cout<<"string 2 bigger";
	else
		cout<<"the same";

	delete [] str1;
	delete [] str2;

*/

/*vector 到 数组

	int *p = new int [ivec.size()]
	int *q=p;

	for(vector<int>::iterator iter=ivec.began();iter != ivec.end(); iter++)
		*q=*iter;		呵呵

	delete [] q;

*/
/*4.30链接两个c风格字符串
	
	char *p1 = "sonic love gq";
	char *p2= "bu gq don't like sonic";

	size_t len = strlen(p1) + strlen(p2);		//此处要用size_t

	char *p = new char[len];

	strcpy (p, p1);
	strcat (p1, p2);

	delete []p;

*/
/*4.27
	string in_str;//读入字符串
	const int arr_sz = 20 ;
	char arr[arr_sz+1];

	cout<<"enter a string\n";
	cin>>in_str;

	const char *p = in_str.c_str();
	int len = strlen(p);

	if(len>arr_sz){
		len=arr_sz;
		cout<<"only"<<len<<"charactor are stored";
	}

	strncpy(arr,p,len);

	arr[len+1]='\0';
*/


/*
//4.32用int初始化vector

	const size_t arr_sz = 10;	//这里用size_t
	int arr[arr_sz];

	//输入
	for(size_t ix=0;ix!=arr_sz;ix++)
		cin>>arr[ix];

	vector<int> ivec(arr,arr+arr_sz);

*/

/*
	//vector<int> to int

	vector<int> ivec;
	int ival;
	cout<<"enter to input,ctrl +z to end\n";

	while(cin>>ival)
		ivec.push_back(ival);

	int *p = new int[ivec.size()];
	
	size_t ix = 0;	//这句话是必需的

	for(vector<int>::iterator iter=ivec.begin();iter != ivec.end(); ix++,iter++){
		p[ix]=*iter;
		cout<<p[ix]<<" ";
	}

	delete [] p;

*/

/*
	//怎么来测试我的代码是对的
	//4-34.cpp
	//读入一组string 类型的数据，并将它们存储在vector 中。
	//接着，把该vector 对象复制给一个字符指针数组。
	//为vector 中的每个元素创建一个新的字符数组，
	//并把该vector 元素的数据复制到相应的字符数组中，
	//最后把指向该数组的指针插入字符指针数组
	//************这道题我有点问题****************

	//读入string到vector
	vector<string> ivec;
	string s;
	while(cin>>s)
		ivec.push_back(s);

	//创建字符指针数组
	char **pp = new char*[ivec.size()];

	//处理vector

	size_t ix =0;
	
	for(vector<string>::iterator iter = ivec.begin();iter != ivec.end(); iter++, ix++){		//用begin &end	vector的类型为string?
		//创建字符数组
		char *p = new char [(*iter).size()+1];		//为啥+1,strcpy会在后面加'\n'

		//开始赋值从vector 到 字符数组
		strcpy(p,(*iter).c_str());

		//字符数组的指针（地址）插入到字符指针数组
		pp[ix] =  p;		//一定要这么写！

	}
	
	//输出vector

	for(vector<string>::iterator iter2=ivec.begin(); iter2 != ivec.end(); iter2 ++)
		cout<<*iter2<<endl;

	//输出字符数组,这句我不太懂
	for(ix = 0; ix != ivec.size(); ix++)
		cout<<pp[ix]<<endl;

	//开始释放字符数组

	for(ix= 0;ix != ivec.size(); ix++)
		delete [] pp[ix];
	
	//释放字符指针数组

	delete [] pp;
*/

	//习题5.18
	//定义一个vector 对象，其每个元素都是指向string 类型的指针
	//读取该vector 对象，输出每个string 的内容及其相应的长度
	
	vector<string*>  spvec;

	//读取vector对象

	string str;

	cout<<"enter string , ctrl +z to end"<<endl;
	while(cin>>str){
		string *pstr = new string;
		*pstr = str;
		spvec.push_back(pstr);
	}

	//输出并且计算长度

	vector<string *>::iterator iter = spvec.begin();

	while(iter !=spvec.end()){
		cout<<**iter<<(**iter).size()<<endl;		//为什么是**iter??????????
	}

	//别忘了释放
	iter = spvec.begin();

	while(iter != spvec.end()){
		delete *iter;
		iter++;
	}

	return 0;
}