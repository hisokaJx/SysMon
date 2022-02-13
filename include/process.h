#ifndef PROCESS_H
#define PROCESS_H

#include <string>
using std::string;
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
public:
    Process(int, string, string, float, string, long int);
    int Pid();                               // TODO: See src/process.cpp
    std::string User();                      // TODO: See src/process.cpp
    std::string Command();                   // TODO: See src/process.cpp
    float CpuUtilization();                  // TODO: See src/process.cpp
    std::string Ram();                       // TODO: See src/process.cpp
    long int UpTime();                       // TODO: See src/process.cpp
    bool operator<(Process const& a) const;  // TODO: See src/process.cpp

// TODO: Declare any necessary private members
private:
    int pid_;
    string user_;
    string cmd_;
    float cpu_;
    string ram_;
    long int uptime_;
};

#endif
