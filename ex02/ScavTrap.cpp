#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name)
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
	std::cout << "ScavTrap " << Name_ << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name_ << " Destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& src)
{
	std::cout << "ScavTrap Assignment Operator called" << std::endl;
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
		std::cout << "ScavTrap " << Name_ << " attacks " << target 
				<< ", causing " << AttackDamage_ << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << Name_ << " has no energy or hit points left to attack!" << std::endl;
	}
}

void		ScavTrap::guardGate(void)
{
	if (HitPoints_ > 0)
		std::cout << "ScavTrap " << Name_ << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << Name_ << " is dead and cannot guard the gate." << std::endl;
}


