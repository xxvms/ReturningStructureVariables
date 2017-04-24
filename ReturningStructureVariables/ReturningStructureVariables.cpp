// ReturningStructureVariables.cpp : Defines the entry point for the console application.
//

#include <iostream>
struct distance
{
	int feet;
	double inches;
};

distance addEngl(distance, distance);
void englDisp(distance);

int main()
{
	distance d1, d2, d3;	// define 3 lenghts
							//get lenght from user
	std::cout << "1st user Enter feet: ";
	std::cin >> d1.feet;
	std::cout << "1st user Enter inches: ";
	std::cin >> d1.inches;
	//same for 2nd user

	std::cout << "2nd user Enter feet: ";
	std::cin >> d2.feet;
	std::cout << "2nd user Enter inches: ";
	std::cin >> d2.inches;

	d3 = addEngl(d1, d2); //d3 is sum of d1 and d2
	std::cout << std::endl;
	englDisp(d1); //display all lenghts
	std::cout << " + ";
	englDisp(d2);
	std::cout << " = ";
	englDisp(d3);
	std::cout << std::endl;

	system("pause");
    return 0;
}
// addEngl()
// adds two structures of tyep Distance, returns sum

distance addEngl(distance dd1, distance dd2)
{
	distance dd3; // define a new structure for sum

	dd3.inches = dd1.inches + dd2.inches; // add the inches
	dd3.feet = 0; // for possible carry (i think if inches go over size 12 then it will be converted to 1 feet for each 12 inches
	if (dd3.inches >= 12.0) //if inches >= 12.0,
	{
		dd3.inches -= 12.0; // decrease inches by 12.0 and increase
		dd3.feet++; // feet by 1
	}
	dd3.feet += dd1.feet + dd2.feet; // add the feet dd3.feet = dd3.fett + dd1.feet + dd2.feet;
	return dd3;
}
//englDisp()
// display structures of type Distance in feet and inches
void englDisp(distance dd)
{
	std::cout << dd.feet << "\' - " << dd.inches << "\" ";
}
