#include "Sales_Item.h"
#include <iosteam>

using namespace std;

int main(){
/*	Sales_Item item;
	cout<<"plsase enter the data,ctrl +z to end";

	while(item.input(cin)){
		cout<<"the transaction readed is:";
		item.output(cout);
		out<<endl;
	}
*/
	Sales_Item total,trans;

	cout<<"enter some tranactions!"<<endl;

	if(total.input(cin)){
		while(trans.input(cin))
			if(total.same_isbn(tran))
				total.ads(trans);
			else{
				total.output(out);
				total = trans;
			}
			total.output(cout)<<endl;
	}
	else{
		cout<<"NO DATA!"<<endl;
		return -1;
	}
	
	return 0;
}
