#include <iostream>
#include <vector>
#include <string>
#include <cstring>		//��ϰ��4.25�õ�

using namespace std;

int main(){

/*ѭ����ֵ
	const size_t array_size=10;
	int ia[array_size];

	for(size_t ix=0;ix!=array_size;ix++)
		ia[ix]=ix;

	�����vector��vector<int>::size_type ix
*/

/*ʹ��ָ���ע������
	c++���ܼ��ָ���Ƿ��ʼ������ʮ��Σ�յ�
	ָ�뱣��0ֵ(����NULL)����ʾ��ָ���κζ���
	������int��������int i=0������const����

	ip2-ip1 ��������ptrdiff_t(�����Ǹ���)

	p[1] means *(p+1)

	����ʹ��ָ��const��ָ���޸�

*/
/*
ָ��������ĵ�����
	const size_t arr_sz=5;
	int int_arr[arr_sz]={1,2,3,4,5};
	for(int *pbegin=int_arr, *pend=int_arr+arr_sz;pbegin!=pend; ++pbegin)
		cout<<*pbegin<<" ";

*/
/*
	���⣺
	p1,p2 ָ��ͬһ����
	p1+=p2-p1 ��ʲô��˼

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
	strcpy,strcat ʹ�ú��ַ�����null,����Ԫ�ض�һλ
	����ʹ��strncpy,strncat
	�ر�����string ��׼�����ͱȽϺã���Ӧ����+=...
*/

/* 
	��̬��������
	size_t n  = get_size();
	int *p = new arr[4];
	for( int *q=p; q!=p+n ;q++)
		//process

		���size_t ����0��һ������


	�ͷſռ�
	delete [] p ,����pָ��Ŀռ�
*/
/*ϰ��4.28 δ�ܽ�����������,maybe ctrl+z
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
/*��ʼ��vector
	vector<tpye> name(arr,arr+arr_sz) ��������ȫ��
	�������ʼ��vector
*/



/*********************ϰ��4.31��4.35***************************/

/*	 ���鵽���飬vector ��vector

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
	ϰ��4.34 û���
*/

/*	�Ƚ�����

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
	cout<<"arr 1 is same with array 2";		//����else

*/
	//�Ƚ�vector

/*�����д���
	vector<int> ivec,ivec2;
	int ival;

	cout<<"enter to fill vector 1,-1 to end"<<endl;	//�������ctrl +z to end ,while(cin>>ival)
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
			vector<int>::iterator iter1,iter2;		//������vector::iterator
			iter1=ivec.begin();
			iter2=ivec2.begin();

			while(*iter1==*iter2 && iter1 != ivec.end() && iter2 != ivec.end() ){
				++iter1;
				++iter2;
			}//��һ�αȽ��Ǿ���֮��
			
			if(iter1 == ivec.end())	//��Ҫд��=
				cout<<"the same\n";
			else
				cout<<"different\n";
		}

*/
/*
	��άָ������飬�ٱ�˵��arr[row][col]

	typedef int int_arr[col];
	int_arr *p = arr;

	for(;*p!=arr+row;++*p)	//Ҫ��Ȼ��дint (*p)[col] = arr
		for(int *q=*p;q != *p +col ;++*q)	//����ֱ���int ��q
			cout<<*q<<endl;

*/

/*************ϰ��4.25*****************/

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

	char *str1,*str2;			//ΪʲôҪ��char?

	str1 =new char [arr_sz];			//new����ָ�������һ��Ԫ�ص�ָ��
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

/*vector �� ����

	int *p = new int [ivec.size()]
	int *q=p;

	for(vector<int>::iterator iter=ivec.began();iter != ivec.end(); iter++)
		*q=*iter;		�Ǻ�

	delete [] q;

*/
/*4.30��������c����ַ���
	
	char *p1 = "sonic love gq";
	char *p2= "bu gq don't like sonic";

	size_t len = strlen(p1) + strlen(p2);		//�˴�Ҫ��size_t

	char *p = new char[len];

	strcpy (p, p1);
	strcat (p1, p2);

	delete []p;

*/
/*4.27
	string in_str;//�����ַ���
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
//4.32��int��ʼ��vector

	const size_t arr_sz = 10;	//������size_t
	int arr[arr_sz];

	//����
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
	
	size_t ix = 0;	//��仰�Ǳ����

	for(vector<int>::iterator iter=ivec.begin();iter != ivec.end(); ix++,iter++){
		p[ix]=*iter;
		cout<<p[ix]<<" ";
	}

	delete [] p;

*/

/*
	//��ô�������ҵĴ����ǶԵ�
	//4-34.cpp
	//����һ��string ���͵����ݣ��������Ǵ洢��vector �С�
	//���ţ��Ѹ�vector �����Ƹ�һ���ַ�ָ�����顣
	//Ϊvector �е�ÿ��Ԫ�ش���һ���µ��ַ����飬
	//���Ѹ�vector Ԫ�ص����ݸ��Ƶ���Ӧ���ַ������У�
	//����ָ��������ָ������ַ�ָ������
	//************��������е�����****************

	//����string��vector
	vector<string> ivec;
	string s;
	while(cin>>s)
		ivec.push_back(s);

	//�����ַ�ָ������
	char **pp = new char*[ivec.size()];

	//����vector

	size_t ix =0;
	
	for(vector<string>::iterator iter = ivec.begin();iter != ivec.end(); iter++, ix++){		//��begin &end	vector������Ϊstring?
		//�����ַ�����
		char *p = new char [(*iter).size()+1];		//Ϊɶ+1,strcpy���ں����'\n'

		//��ʼ��ֵ��vector �� �ַ�����
		strcpy(p,(*iter).c_str());

		//�ַ������ָ�루��ַ�����뵽�ַ�ָ������
		pp[ix] =  p;		//һ��Ҫ��ôд��

	}
	
	//���vector

	for(vector<string>::iterator iter2=ivec.begin(); iter2 != ivec.end(); iter2 ++)
		cout<<*iter2<<endl;

	//����ַ�����,����Ҳ�̫��
	for(ix = 0; ix != ivec.size(); ix++)
		cout<<pp[ix]<<endl;

	//��ʼ�ͷ��ַ�����

	for(ix= 0;ix != ivec.size(); ix++)
		delete [] pp[ix];
	
	//�ͷ��ַ�ָ������

	delete [] pp;
*/

	//ϰ��5.18
	//����һ��vector ������ÿ��Ԫ�ض���ָ��string ���͵�ָ��
	//��ȡ��vector �������ÿ��string �����ݼ�����Ӧ�ĳ���
	
	vector<string*>  spvec;

	//��ȡvector����

	string str;

	cout<<"enter string , ctrl +z to end"<<endl;
	while(cin>>str){
		string *pstr = new string;
		*pstr = str;
		spvec.push_back(pstr);
	}

	//������Ҽ��㳤��

	vector<string *>::iterator iter = spvec.begin();

	while(iter !=spvec.end()){
		cout<<**iter<<(**iter).size()<<endl;		//Ϊʲô��**iter??????????
	}

	//�������ͷ�
	iter = spvec.begin();

	while(iter != spvec.end()){
		delete *iter;
		iter++;
	}

	return 0;
}