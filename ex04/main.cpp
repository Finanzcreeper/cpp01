#include "cpyfrplstr.hpp"

int main (int argc, char *argv[])
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		new_name;
	size_t			repl = 0;

	if ( argc != 4)
	{
		std::cout << "incorrect amout of arguments!" << std::endl;
		return (1);
	}
	if (strlen(argv[2]) < 1)
	{
		std::cout << "cant replace nothing!" << std::endl;
		return (1);
	}
	new_name += argv[1];
	new_name += ".replace";
	output.open(new_name.c_str(), std::ios::trunc);
	input.open(argv[1], std::ios::in);
	std::string content((std::istreambuf_iterator<char>(input)), (std::istreambuf_iterator<char>()));
	repl = content.find(argv[2]);
	while (repl != std::string::npos)
	{
		content.erase(repl, strlen(argv[2]));
		content.insert(repl, argv[3]);
		repl = content.find(argv[2], repl + strlen(argv[3]));
	}
	output << content;
}
