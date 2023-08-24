#include "Harl.hpp"

void insignificant(void)
{
	std::cout << "insignificant stuff not even worth a report" << std::endl;
}

int main (int argc, char *argv[])
{
	Harl	karen;
	int		level = 0;
	const char	*existinglevels[4] = {"info", "debug", "warning", "error"};

	if (argc != 2)
	{
		insignificant();
		return (1);
	}
	while (level < 4)
	{
		if (strcmp(argv[1], existinglevels[level]) == 0)
			break;
		level++;
	}
	switch (level)
	{
	case 0:
		karen.complain("info");
		karen.complain("debug");
		karen.complain("warning");
		karen.complain("error");
		break;
	case 1:
		karen.complain("debug");
		karen.complain("warning");
		karen.complain("error");
		break;
	case 2:
		karen.complain("warning");
		karen.complain("error");
		break;
	case 3:
		karen.complain("error");
		break;
	default:
		insignificant();
		break;
	}
	return (0);
}
