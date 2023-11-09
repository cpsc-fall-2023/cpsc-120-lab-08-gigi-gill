// Gigi Gill
// gillgigi@csu.fullerton.edu
// @gigi-07
// Partners:

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (argc != 4) {
    std::cout << "Error: Please provide exactly three arguments.\n";
    return 1;
  }

  std::string chosenProtein{arguments.at(1)};
  std::string chosenBread{arguments.at(2)};
  std::string chosenCondiment{arguments.at(3)};

  std::cout << "Your order: \n"
            << "A " << chosenProtein << " sandwich on " << chosenBread
            << " with " << chosenCondiment << ".\n";

  return 0;
}
