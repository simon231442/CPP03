#ifndef ClapTrap_hpp
# define ClapTrap_hpp

# include <iostream>
# include <string>

class ClapTrap{

	protected:
		std::string	Name_;
		unsigned int	HitPoints_;
		unsigned int	EnergyPoints_;
		unsigned int	AttackDamage_;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& src);
		~ClapTrap();

		ClapTrap&	operator=(ClapTrap const& src);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amout);
		void		beRepaired(unsigned int amout);
};

#endif
