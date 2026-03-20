#include "ScavTrap.hpp"


int	main(void)
{
	ScavTrap	scav = ScavTrap("anpayot");

	scav.attack("Target");
	scav.takeDamage(5);
	scav.beRepaired(3);
	scav.guardGate();

	for (int i = 0; i < 11; i++)
		scav.attack("Target");
	
	scav.takeDamage(200);
	scav.beRepaired(5);
	scav.guardGate();

	return 0;
}


