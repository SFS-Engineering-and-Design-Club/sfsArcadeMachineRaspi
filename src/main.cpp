#define SFSARCADEMACHINERASPI_VERSION_MAJOR 0 // TODO (Everyone): New version = bump this before merging
#define SFSARCADEMACHINERASPI_VERSION_MINOR 1 //                  New version = bump this before merging
#define SFSARCADEMACHINERASPI_VERSION_PATCH 0 //                  New version = bump this before merging

#include "main.hpp"

MainClass mainClass;

int main(int argc, char* argv[])
{
	mainClass.startupScreen();
	return 0;
}

void MainClass::startupScreen()
{
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Welcome to the Raspberry Pi Arcade Entertainment System v" << SFSARCADEMACHINERASPI_VERSION_MAJOR << "." << SFSARCADEMACHINERASPI_VERSION_MINOR << "." << SFSARCADEMACHINERASPI_VERSION_PATCH << "\n";
	std::cout << "---------------------------------------------------------------\n";
	std::cout << "Created by the SFS Engineering and Design Club:\n";
	std::cout << "CMDR-JohnAlex      John Alexander Le Roux\n";
	std::cout << "Phenkdotgif        Philip\n";
	std::cout << "---------------------------------------------------------------\n";
}
