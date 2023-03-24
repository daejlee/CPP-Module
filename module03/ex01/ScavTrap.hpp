#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap(std::string inputName);
	~ScavTrap(void);
	//복사생성자와 복사할당연산자는 다시 정의할 필요가 있는가?
	void	guardGate(void);
};

#endif