#include "FragTrap.hpp"


int	main(void)
{
	FragTrap	frag = FragTrap("anpayot");

	frag.attack("Target");
	frag.takeDamage(5);
	frag.beRepaired(3);
	frag.highFivesGuys();

	for (int i = 0; i < 11; i++)
		frag.attack("Target");
	
	frag.takeDamage(200);
	frag.beRepaired(5);
	frag.highFivesGuys();

	return 0;
}


