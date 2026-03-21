#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	HitPoints_ = 100;
	EnergyPoints_ = 100;
	AttackDamage_ = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const& name) : ClapTrap(name)
{
	HitPoints_ = 100;
	EnergyPoints_ = 100;
	AttackDamage_ = 30;
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

void		FragTrap::highFivesGuys(void)
{
	if (HitPoints_ > 0)
		std::cout << "FragTrap " << Name_ << " requests a positive high five! ✋" << std::endl;
	else
		std::cout << "FragTrap " << Name_ << " is dead and cannot high five." << std::endl;
}


