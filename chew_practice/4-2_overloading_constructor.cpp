/* -function overloading-
1 단계
자신과 타입이 정확히 일치하는 함수를 찾는다.

2 단계
정확히 일치하는 타입이 없는 경우 아래와 같은 형변환을 통해서 일치하는 함수를 찾아본다.

Char, unsigned char, short 는 int 로 변환된다.

Unsigned short 는 int 의 크기에 따라 int 혹은 unsigned int 로 변환된다.

Float 은 double 로 변환된다.

Enum 은 int 로 변환된다.

3 단계
위와 같이 변환해도 일치하는 것이 없다면 아래의 좀더 포괄적인 형변환을 통해 일치하는 함수를 찾는다.

임의의 숫자(numeric) 타입은 다른 숫자 타입으로 변환된다. (예를 들어 float -> int)

Enum 도 임의의 숫자 타입으로 변환된다 (예를 들어 Enum -> double)

0 은 포인터 타입이나 숫자 타입으로 변환된 0 은 포인터 타입이나 숫자 타입으로 변환된다

포인터는 void 포인터로 변환된다.

4 단계
유저 정의된 타입 변환으로 일치하는 것을 찾는다 (이 부분에 대해선 나중에 설명!) (출처)
*/
#include <iostream>
//Constructor
class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

 public:
  void SetDate(int year, int month, int date)
  {
	year_ = year;
	month_ = month;
	day_ = date;
  }
  void AddDay(int inc)
  {
	day_ += inc;
	if (day_ > 31)
	{
		day_ -= 31;
		AddMonth(1);
	}
  }
  void AddMonth(int inc)
  {
	month_ += inc;
	if (month_ > 12)
	{
		month_ -= 12;
		AddYear(1);
	}
  }
  void AddYear(int inc)
  {
	year_ += inc;
  }
  void ShowDate()
  {
	std::cout << year_ << "/" << month_ << "/" << day_ << std::endl;
  }
  Date() {
    std::cout << "기본 생성자 호출!" << std::endl;
    year_ = 2012;
    month_ = 7;
    day_ = 12;
  }//기본생성자

  Date(int year, int month, int day) {
    std::cout << "인자 3 개인 생성자 호출!" << std::endl;
    year_ = year;
    month_ = month;
    day_ = day;
  }//생성자 오버로딩

};

int	main()
{
	Date day;

	std::cout << "enter year: ";
	int	input_y;
	std::cin >> input_y;
	std::cout << "enter month: ";
	int	input_m;
	std::cin >> input_m;
	std::cout << "enter date: ";
	int	input_d;
	std::cin >> input_d;
	day.SetDate(input_y, input_m, input_d);
	day.ShowDate();

	std::cout << "increase year: ";
	std::cin >> input_y;
	day.AddYear(input_y);
	std::cout << "increase month: ";
	std::cin >> input_m;
	day.AddMonth(input_m);
	std::cout << "increase date: ";
	std::cin >> input_d;
	day.AddDay(input_d);
	day.ShowDate();
	return (0);
}
