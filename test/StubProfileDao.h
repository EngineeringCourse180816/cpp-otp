#ifndef CPP_OTP_STUBPROFILEDAO_H
#define CPP_OTP_STUBPROFILEDAO_H

#include "../main/ProfileDao.h"
#include "gmock/gmock.h"
#include <string>

using namespace std;

class StubProfileDao : public ProfileDao {

public:
    MOCK_METHOD1(getPassword, string(string));
};

#endif //CPP_OTP_STUBPROFILEDAO_H
