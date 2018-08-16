#ifndef CPP_OTP_AUTHENTICATIONSERVICE_H
#define CPP_OTP_AUTHENTICATIONSERVICE_H

#include <string>
#include "RsaTokenDao.h"
#include "ProfileDao.h"
#include "Logger.h"

class AuthenticationService {

public:
    AuthenticationService(RsaTokenDao &rsaTokenDao, ProfileDao &profileDao, Logger &logger);
    bool isValid(const std::string userName, const std::string password);

private:
    RsaTokenDao& rsaTokenDao;
    ProfileDao& profileDao;
    Logger& logger;
};


#endif //CPP_OTP_AUTHENTICATIONSERVICE_H
