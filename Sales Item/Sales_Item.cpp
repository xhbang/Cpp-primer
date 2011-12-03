#include "Sales_Item.h"
//implement of sales.h file

std::istream& input(std::istream & in){
	double price;
	in>>isbn>>units_sold>>price;
	if(in)
		revenue = units_sold * price;
	else{
		units_sold = 0;
		revenue = 0.0;
	}
	return in;	
}

std::ostream& ouput(std::ostream out) const {
	out<<isbn<<"\t"<<units_sold<<"\t"<<revenue<<"\t"<<avg price();
	return out;
}

//there is another way to do this,using try/catch
double avg_price(){
	if(units != 0)
		return  revenue / unit_sold;
	else
		return 0;
}
	

Sales_Item Sales_Item::add(Sales_Item & other){
	revenue = this->revenue + other.revenue;
	units_sold = this->units_sold + other.units_sold;
//why return this kind type?
	return *this;
}

