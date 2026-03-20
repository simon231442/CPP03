#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
	HitPoints_ = 100;
	EnergyPoints_ = 50;
	AttackDamage_ = 20;
	std::cout << "FragTrap " << Name_ << " Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name_ << " Destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& src)
{
	std::cout << "FragTrap Assignment Operator called" << std::endl;
	if (this != &src)
	{
		this->ClapTrap::operator=(src); //src is implicitely casted in ClapTrap
	}
	return *this;
}

void		FragTrap::attack(const std::string& target)
{
	if (HitPoints_ > 0 && EnergyPoints_ > 0)
	{
		EnergyPoints_--;
		std::cout << "FragTrap " << Name_ << " attacks " << target 
				<< ", causing " << AttackDamage_ << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "FragTrap " << Name_ << " has no energy or hit points left to attack!" << std::endl;
	}
}

void		FragTrap::guardGate(void)
{
	if (HitPoints_ > 0)
		std::cout << "FragTrap " << Name_ << " is now in Gate keeper mode." << std::endl;
	else
		std::cout << "FragTrap " << Name_ << " is dead and cannot guard the gate." << std::endl;
}


