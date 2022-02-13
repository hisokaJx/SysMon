#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"

using std::string;
using std::to_string;
using std::vector;

Process::Process(int p, string u, string cmd, float cpu, string r, long int up) :
    pid_{p},
    user_{u},
    cmd_{cmd},
    cpu_{cpu},
    ram_{r},
    uptime_{up} {}

// TODO: Return this process's ID
int Process::Pid() {
    return pid_;

}

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() {
    return cpu_;
}

// TODO: Return the command that generated this process
string Process::Command() {
    return cmd_;
}

// TODO: Return this process's memory utilization
string Process::Ram() {
    return ram_;
}

// TODO: Return the user (name) that generated this process
string Process::User() {
    return user_;
}

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() {
    return uptime_;
}

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a[[maybe_unused]]) const {
    return true;
}
