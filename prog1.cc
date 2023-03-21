/**
 *   @file: prog1.cc
 * @author: Allison McKee
 *   @date: 02-07-2023
 *  @brief: bogus program
 */

// Example Program for lab3
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number;   // Be sure to add comments for each of these variables
		// that are declared!

  int answer;  // Don't forget this one.
  // this code makes it so the solution to getting out of the program is 12345

  do {
    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;
    switch (number) {
    case 42:
      cout << "You have the answer already!\n";
      answer = 42;
    case 0:
      answer = 0;
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      answer = number*2;
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      answer = -13;
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      answer = 22;
      cout << "Well, I'll give you one more, but it's still not enough.\n"
	   << "Try again.\n";
      break;
    // I changed the original default to the secret correct number 12345
    default:
      answer = 12345;
      cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";
      return (EXIT_SUCCESS);
    }
    
  } while (answer != 42);


  return (EXIT_SUCCESS);
}
