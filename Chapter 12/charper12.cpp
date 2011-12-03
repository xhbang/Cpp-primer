//Exercises Section 12.1.1
Person{
private:
	string name,address;
public:
	Person(std::string &nm,std::string &ad):name(nm),address(ad);
	Getname() const { return name;	}
	Getaddress() const { return address;}
};

//使用类型别名来简化类,是一个更好的抽象

class Screen {
public:
	// interface member functions
	typedef std::string::size_type index;
private:
	std::string contents;
	index cursor;
	index height, width;
};

//Class Screnn
Screen{
private:
	std::string content;
	index cursor;
	index length,width;
public:
	typedef std::string::size_type index;
	inline char getchar() const {return content[cursor]};
	inline char getchar(index w,index h) const;
	index getcursor const ;
};

char Screen::getchar(index w,index h) const{
	index row=h*width;
	return content[row+w];
}

inline Screen::index Screen::getcursor() const{
	return cursor
}
