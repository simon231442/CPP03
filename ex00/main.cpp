#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap = ClapTrap("anpayot");

	clap.attack("Target");
	clap.takeDamage(5);
	clap.beRepaired(3);

	for (int i = 0; i < 11; i++)
		clap.attack("Target");
	
	clap.takeDamage(20);
	clap.beRepaired(5);

	return 0;
}


