#ifndef CPP_OTP_LOGGER_H
#define CPP_OTP_LOGGER_H

#include <string>

using namespace std;

class Logger {

public:
    virtual void log(string msg) = 0;
};

#endif //CPP_OTP_LOGGER_H
