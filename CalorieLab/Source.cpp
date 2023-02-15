#include <iostream>
#include <iomanip>

int main() {
	
	int age, heartRate, minutes, weight;

	//std::cout << "Enter your age: ";
	std::cin >> age;
	//std::cout << "Enter your weight in pounds: ";
	std::cin >> weight;
	//std::cout << "Enter heartRate during workout: ";
	std::cin >> heartRate;
	//std::cout << "Enter the length of your workout in minutes: ";
	std::cin >> minutes;
	

	float calories = ((age * 0.2757) + (weight * 0.03295) + (heartRate * 1.0781) - 75.4991) * minutes / 8.368;

	std::cout << std::fixed << std::setprecision(2) << "Calories: " << calories << " calories" << std::endl;

	return 0;
}