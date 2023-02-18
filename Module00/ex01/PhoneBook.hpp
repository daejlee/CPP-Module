#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Contact {
	private:
		string	fst_name;
		string	lst_name;
		string	nickname;
		string	phone_num;
		string	dkst_secret;
	public:
		void	AddContact()
		{
			cout << "enter fst_name: ";
			getline(cin, fst_name);
			cout << "enter lst_name: ";
			getline(cin, lst_name);
			cout << "enter nickname: ";
			getline(cin, nickname);
			cout << "enter phone_num: ";
			getline(cin, phone_num);
			cout << "enter dkst_secret: ";
			getline(cin, dkst_secret);
		}
		void	PrintContact(int idx)
		{
			cout << setfill(' ') << setw(10) << idx << "|";
			if (fst_name.size() > 9)
				cout << fst_name.substr(0, 9) << "." << "|";
			else
				cout << setfill(' ') << setw(10) << fst_name << "|";
			if (lst_name.size() > 9)
				cout << lst_name.substr(0, 9) << "."  << "|";
			else
				cout << setfill(' ') << setw(10) << lst_name << "|";
			if (nickname.size() > 9)
				cout << nickname.substr(0, 9) << "." << "|";
			else
				cout << setfill(' ') << setw(10) << nickname << endl;
		}
		void	PrintContactLine() {
			cout << "fst_name: " << fst_name << endl;
			cout << "lst_name: " << lst_name << endl;
			cout << "nickname: " << nickname << endl;
			cout << "phone_num: " << phone_num << endl;
			cout << "dkst_secret: " << dkst_secret << endl;
		}
};


class PhoneBook {
	private:
		int	cnt;
		Contact Contact[8];
	public:
		void	init()
		{
			cnt = 0;
		}
		void	Add()
		{
			if (cnt > 7)
			{
				int	tmp = cnt;
				while (tmp > 7)
					tmp -= 7;
				Contact[tmp].AddContact();
			}
			Contact[cnt].AddContact();
			cnt++;
		}
		void	Search()
		{
			if (cnt < 8)
			{
				for (int i = 0; i < cnt; i++)
					Contact[i].PrintContact(i);
			}
			else
			{
				for (int i = 0; i < 8; i++)
					Contact[i].PrintContact(i);
			}
			int	idx;
			cout << "enter idx to display: ";
			cin >> idx;
			char	c;
			cin >> noskipws >>c;
			if (idx < 0 || idx > cnt)
				cout << "idx out of range !" << endl;
			else
				Contact[idx].PrintContactLine();
		}
		void	Exit()
		{
			exit(0);
		}
};
