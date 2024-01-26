// repl.h

#ifndef REPL_H
#define REPL_H

#include <string>

class REPL {
public:
    void start();
private:
    void processCommand(const std::string& command);
};

#endif // REPL_H
