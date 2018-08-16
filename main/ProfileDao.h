#ifndef CPP_OTP_PROFILEDAO_H
#define CPP_OTP_PROFILEDAO_H

#include <string>

class ProfileDao {

public:
    virtual std::string getPassword(std::string userName);
};

#endif //CPP_OTP_PROFILEDAO_H
