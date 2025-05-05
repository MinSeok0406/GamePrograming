//#include <iostream>
//#include <string>
//using namespace std;
//
//class Car
//{
//public:
//	Car(int gasoline) : _gasolineGauge(gasoline)
//	{
//
//	}
//
//	~Car()
//	{
//
//	}
//
//	int GetGasGauge() noexcept { return _gasolineGauge; }
//
//private:
//	int _gasolineGauge;
//};
//
//class HybridCar : public Car
//{
//public:
//	HybridCar(int gasoline, int electric) : Car(gasoline), _electricGauge(electric)
//	{
//
//	}
//
//	~HybridCar()
//	{
//
//	}
//
//	int GetElecGauge() noexcept { return _electricGauge; }
//
//private:
//	int _electricGauge;
//};
//
//class HybridWaterCar : public HybridCar
//{
//public:
//	HybridWaterCar(int gasoline, int electric, int water) : HybridCar(gasoline, electric), _waterGauge(water)
//	{
//
//	}
//
//	~HybridWaterCar()
//	{
//
//	}
//
//	void ShowCurrentGauge() noexcept 
//	{  
//		cout << "잔여 가솔린: " << GetGasGauge() << endl;
//		cout << "잔여 전기량: " << GetElecGauge() << endl;
//		cout << "잔여 워터량: " << _waterGauge << endl;
//	}
//
//private:
//	int _waterGauge;
//};
//
//class MyFriendInfo
//{
//public:
//	MyFriendInfo(string name, int age) : _name(name), _age(age)
//	{
//
//	}
//
//	~MyFriendInfo()
//	{
//
//	}
//
//	void ShowMyFriendInfo() const noexcept
//	{
//		cout << "이름: " << _name << endl;
//		cout << "나이: " << _age << endl;
//	}
//
//protected:
//	string _name;
//	int _age;
//};
//
//class MyFriendDetailInfo : public MyFriendInfo
//{
//public:
//	MyFriendDetailInfo(string name, int age, string addr, string phone) : MyFriendInfo(name, age), _addr(addr), _phone(phone)
//	{
//
//	}
//
//	~MyFriendDetailInfo()
//	{
//
//	}
//
//	void ShowMyFriendDetailInfo() const noexcept
//	{
//		ShowMyFriendInfo();
//		cout << "주소: " << _addr << endl;
//		cout << "전화: " << _phone << endl;
//	}
//
//private:
//	string _addr;
//	string _phone;
//};
//
//class Rectangle
//{
//public:
//	Rectangle() { }
//
//	Rectangle(int x, int y) : _x(x), _y(y)
//	{
//
//	}
//
//	~Rectangle()
//	{
//
//	}
//
//	virtual void ShowAreaInfo() const noexcept
//	{
//		cout << "면적: " << _x * _y << endl;
//	}
//
//private:
//	int _x{ 0 };
//	int _y{ 0 };
//};
//
//class Square : public Rectangle
//{
//public:
//	Square(int r) : _r(r)
//	{
//
//	}
//
//	~Square()
//	{
//
//	}
//
//	void ShowAreaInfo() const noexcept override
//	{
//		cout << "면적: " << _r * _r << endl;
//	}
//
//private:
//	int _r{ 0 };
//};
//
//class Book
//{
//public:
//	Book() { }
//
//	Book(string title, string isbn, int price) : _title(title), _isbn(isbn), _price(price)
//	{
//
//	}
//
//	~Book()
//	{
//
//	}
//
//	void ShowBookInfo() const noexcept
//	{
//		cout << "제목: " << _title << endl; 
//		cout << "ISBN: " << _isbn << endl; 
//		cout << "가격: " << _price << endl;
//	}
//
//private:
//	string _title;
//	string _isbn;
//	int _price{ 0 };
//};
//
//class EBook : public Book
//{
//public:
//	EBook(string title, string isbn, int price, string DRMKey) : Book(title, isbn, price), _DRMKey(DRMKey)
//	{
//
//	}
//
//	~EBook()
//	{
//
//	}
//
//	void ShowEBookInfo() const noexcept
//	{
//		ShowBookInfo();
//		cout << "인증키: " << _DRMKey << endl;
//	}
//
//private:
//	string _DRMKey;
//};
//
//int main(void)
//{
//#pragma region 문제1
//	/*HybridWaterCar* hwc = new HybridWaterCar(100, 300, 500);
//
//	hwc->ShowCurrentGauge();*/
//#pragma endregion
//
//#pragma region 문제2
//	/*MyFriendDetailInfo* mfdi = new MyFriendDetailInfo("장민석", 100, "경기도", "010~~");
//
//	mfdi->ShowMyFriendDetailInfo();*/
//#pragma endregion
//
//#pragma region 문제3
//	/*Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();*/
//#pragma endregion
//
//#pragma region 문제4
//	/*Book book("좋은 C++", "555-12345-890-0", 20000);
//	book.ShowBookInfo();
//	cout << endl;
//	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
//	ebook.ShowEBookInfo();*/
//#pragma endregion
//
//	return 0;
//}