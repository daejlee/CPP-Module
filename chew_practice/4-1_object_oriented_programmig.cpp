//객체란, 변수들과 참고 자료들로 이루어진 소프트웨어 덩어리 이다.

#include <iostream>

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
};

int	main()
{
	Date Date;

	std::cout << "enter year: ";
	int	input_y;
	std::cin >> input_y;
	std::cout << "enter month: ";
	int	input_m;
	std::cin >> input_m;
	std::cout << "enter date: ";
	int	input_d;
	std::cin >> input_d;
	Date.SetDate(input_y, input_m, input_d);
	Date.ShowDate();

	std::cout << "increase year: ";
	std::cin >> input_y;
	Date.AddYear(input_y);
	std::cout << "increase month: ";
	std::cin >> input_m;
	Date.AddMonth(input_m);
	std::cout << "increase date: ";
	std::cin >> input_d;
	Date.AddDay(input_d);
	Date.ShowDate();
	return (0);
}
