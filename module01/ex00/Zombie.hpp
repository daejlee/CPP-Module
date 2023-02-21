#include <iostream>
#include <string>

using namespace	std;

class Zombie {
	private:
		string	name;
	public:
		void	init(string input_name)
		{
			name = input_name;
		}
		void	announce(void)
		{
			cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
		}
};
