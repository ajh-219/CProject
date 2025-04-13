//#include "Header.h"
//
//// 책 클래스를 기반으로 Ebook 클래스를 정의합니다.
//// 책에는 기본적으로 책의 제목과, 책의 가격이 주어지며,
//// Ebook에서는 추가적으로 보안 키를 넣어주려고 합니다.
//
//// 책의 정보를 확인할 수 있는 메소드 bookInfo를 만들고,
//// Ebook의 정보를 확인할 수 있는 메도드 ebookInfo도 구현하시오.
//class Book
//{
//private :
//	
//public :
//	int bookPrice;
//	string bookName;
//	void bookInfo()
//	{
//		cout << bookName << " " << bookPrice << endl;
//	}
//};
//
//class Ebook : public Book
//{
//private:
//	string bookCode;
//public :
//	Ebook(string bookName, int bookPrice, string bookCode)
//	{
//		this->bookName = bookName;
//		this->bookPrice = bookPrice;
//		this->bookCode = bookCode;
//	}
//	void ebookInfo()
//	{
//		cout << bookName << " " << bookPrice << " " << bookCode << endl;
//	}
//
//	/*void getBookName(string name)
//	{
//		bookName = name;
//	}
//	void getBookPrice(int price)
//	{
//		bookPrice = price;
//	}
//	void getBookCode(string code)
//	{
//		bookCode = code;
//	}
//	
//	string setBookName()
//	{
//		return bookName;
//	}
//	int setBookPrice()
//	{
//		return bookPrice;
//	}
//	string setBookCode()
//	{
//		return bookCode;
//	}*/
//};
//
//int main()
//{
//	Ebook ebook("Welcome to C++", 17900, "adsx0icfe");
//	ebook.ebookInfo();
//
//	// Welcome to C++ 17900 adsx0icfe
//
//	return 0;
//}