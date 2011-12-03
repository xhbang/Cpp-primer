#ifndef SALESITEM_H
#define SALESITEM_H

#include<iostream>
#include <string>
//using namespace std;

class Sale_item{
public:
	//add two fun to handle in&out
	std::istream& input(std::istream& in);

	std::ostream& output(std::ostream & out) const;

	double avg_price() const;

	bool same_isbn(const Sales_Item.isbn &rhs) const{
		return isbn == rhs.isbn;
	}

	Sales_Item& add(Sales_Item & other);
//construct and init
	Sales_Item::Sales_Item(): units_sold(0), revenue(0.0)	{
	}

private:
	std::string isbn;	
	unsigned units_sold;
	double revenue;

};

#endif
