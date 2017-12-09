/*
 * Bit Shifting
 */

#include <iostream>
#include <iomanip>

int main(){

	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char blue = 0x34;
	unsigned char green = 0x56;

	unsigned int color = 0;

	color += alpha;
	color <<= 8;
	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;

	std::cout << std::setfill('0') << std::setw(8) << std::hex << color << std::endl;

	return 0;
}
