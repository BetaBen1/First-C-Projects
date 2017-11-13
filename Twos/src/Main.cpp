/*
 * Twos
 */

#include <iostream>

int main(){

	char value = 127;

	std::cout << (int)value << std::endl;

	value++;

	std::cout << (int)value << std::endl;

	return 0;
}


/*
 * 	000 = 0
 *  001 = 1
 *  010 = 2
 *  011 = 3
 *  100 = -0
 *  101 = -1
 *  110 = -2
 *  111 = -3
 *
 *  However, addition is difficult with this method.
 *
 *  001 (1) +
 *  101 (-1) =
 *  110 (-2) WRONG ANSWER!
 *
 *
 *  -------------------
 *   One's Complement:
 *  -------------------
 *
 *  000 = 0
 *  001 = 1
 *  010 = 2
 *  011 = 3
 *  100 = -3
 *  101 = -2
 *  110 = -1
 *  111 = -0
 *
 *  This version allows addition to become easier
 *
 *  001 (1) +
 *  110 (-1) =
 *  111 (-0) RIGHT ANSWER!
 *
 *  0011 (3) +
 *  0101 (-2) =
 *  1000 (-0) WRONG ANSWER, BUT WAIT!
 *  Add overflow bit to the right: 000 + 1 =
 *  001 RIGHT ANSWER!
 *
 *  -------------------
 *   Two's Complement:
 *  -------------------
 *
 *  000 = 0
 *  001 = 1
 *  010 = 2
 *  011 = 3
 *  100 = -4
 *  101 = -3
 *  110 = -2
 *  111 = -1
 *
 *  This allows us not to have two versions of 0 and addition to become easier.
 *
 *  0010 (2) +
 *  0110 (-2) =
 *  1000 -> Discard overflow bit -> 000 RIGHT ANSWER!
 *
 *  010 (2) +
 *  101 (-3) =
 *  111 RIGHT ANSWER!
 */
