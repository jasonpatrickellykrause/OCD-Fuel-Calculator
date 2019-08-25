#include <iostream>
#include <iomanip>

int main()
{
	double fuelRemainingGallons = NULL;
	double fuelRemainingPercentage = NULL;
	double maxGallons = NULL;
	double possibleGallons = NULL;
	double pricePerGallon = NULL;

    std::cout << "OCD Gas Calculator" << std::endl;

	std::cout << "Enter price of fuel per gallon: ";
	std::cin >> pricePerGallon;

	std::cout << "Enter maximum tank size in gallons: ";
	std::cin >> maxGallons;

	std::cout << "Enter fuel remaining in tank in percentage: ";
	std::cin >> fuelRemainingPercentage;

	fuelRemainingGallons = maxGallons * fuelRemainingPercentage / 100.00;
	possibleGallons = maxGallons - fuelRemainingGallons;

	std::cout << std::endl << "Maximum Gallons (approximate): " << possibleGallons << std::endl;
	std::cout << std::endl << std::right << "Currency" << std::setw(15) << "Gallons" << std::endl;
	std::cout << std::setfill('-') << std::setw(30) << "-" << std::setfill(' ') << std::endl;

	for (double i = 0.100; i < possibleGallons; i = i + (.100))
	{
		double cost = std::floor(pricePerGallon * i * 100.00) / 100.00;
		double digitsAfterDecimal = cost - std::floor(cost);

		if (digitsAfterDecimal == 0.00)
		{
			std::cout << std::fixed;
			std::cout << std::setprecision(2) << cost;
			std::cout  << std::setw(16) << std::setprecision(3) << i << std::endl;
		}
	}
	return 0;
}