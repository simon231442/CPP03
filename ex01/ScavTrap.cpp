#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	*this = src;
}


ScavTrap::~ScavTrap() : ~ClapTrap()
{
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& src)
{
	if (this != &src)
	{
		this->ClapTrap::operator=(src); //src is implicitely casted in ClapTrap
	}
	return *this;
}

void		ScavTrap::attack(const std::string& target)
{
	if (HitPoints_ > 0 && EnergyPoints_ > 0)
	{
		EnergyPoints_--;
	}
	else
	{
		;
	}
}

void		ScavTrap::guardGate(void)
{
	;
}


