// repl.cpp

#include "repl.h"
#include <iostream>
#include <string>

void REPL::start() {
  std::string input;
  while (true) {
    std::cout << "OpenPark> ";
    std::getline(std::cin, input);

    if (input == "exit") {
      std::cout << "System Shutown Commencing" << std::endl;
      break;
    }

    processCommand(input);
  }
}

void REPL::processCommand(const std::string &command) {
  if (command == "start") {
    std::cout << "Booting Park System\n";
    std::cout << "System Ready\n";
  } else {
    std::cout << "Unknown command: " << command << std::endl;
  }
}
