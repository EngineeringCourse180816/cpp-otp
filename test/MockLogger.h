#ifndef CPP_OTP_MOCKLOGGER_H
#define CPP_OTP_MOCKLOGGER_H

#include "../main/Logger.h"
#include "gmock/gmock.h"

class MockLogger : public Logger {

public:
    MOCK_METHOD1(log, void(string));
};

#endif //CPP_OTP_MOCKLOGGER_H
