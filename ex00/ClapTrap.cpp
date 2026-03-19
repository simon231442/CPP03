#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name_("default"), HitPoints_(10), EnergyPoints_(10), AttackDamage_(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): Name_(name), HitPoints_(10), EnergyPoints_(10), AttackDamage_(0)
{
	std::cout << "ClapTrap " << Name_ << " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << Name_ << " Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& src)
{
	std::cout << "ClapTrap Assignment Operator called" << std::endl;
	if (this != &src)
	{
		this->Name_ = src.Name_;
		this->HitPoints_ = src.HitPoints_;
		this->EnergyPoints_ = src.EnergyPoints_;
		this->AttackDamage_ = src.AttackDamage_;
	}
	return *this;
}

void		ClapTrap::attack(const std::string& target)
{
	if (HitPoints_ > 0 && EnergyPoints_ > 0)
	{
		EnergyPoints_--;
		std::cout << "ClapTrap " << Name_ << " attacks " << target 
				  << ", causing " << AttackDamage_ << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name_ << " has no energy or hit points left to attack!" << std::endl;
	}
}

void		ClapTrap::takeDamage(unsigned int amout)
{
	if (HitPoints_ == 0)
	{
		std::cout << "ClapTrap " << Name_ << " is already dead!" << std::endl;
		return ;
	}
	
	if (amout >= HitPoints_)
		HitPoints_ = 0;
	else
		HitPoints_ -= amout;
		
	std::cout << "ClapTrap " << Name_ << " takes " << amout << " damage! Current HP: " << HitPoints_ << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amout)
{
	if (HitPoints_ > 0 && EnergyPoints_ > 0)
	{
		EnergyPoints_--;
		HitPoints_ += amout;
		std::cout << "ClapTrap " << Name_ << " repairs itself, getting " << amout << " hit points back! Current HP: " << HitPoints_ << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << Name_ << " has no energy or hit points left to repair!" << std::endl;
	}
}

