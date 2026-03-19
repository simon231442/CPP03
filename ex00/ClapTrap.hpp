#ifndef ClapTrap_hpp
# define ClapTrap_hpp

# include <iostream>
# include <string>

class ClapTrap{

	private:
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
	/*	
		void		setName(std::string name);
		void		setHitPoints(unsigned inthitPoints);
		void		setEnergyPoints(unsigned intenergiePoints);
		void		setAttackDammage_(unsigned intattackdammage);

		void		getName(std::string name);
		void		getHitPoints(unsigned inthitPoints);
		void		getEnergyPoints(unsigned intenergiePoints);
		void		getAttackDammage_(unsigned intattackdammage);
*/
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amout);
		void		beRepaired(unsigned int amout);
};

#endif
