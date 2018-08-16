#include "gtest/gtest.h"
#include "../main/AuthenticationService.h"
#include "StubRsaTokenDao.h"
#include "StubProfileDao.h"
#include "MockLogger.h"

using ::testing::Return;

namespace {

    TEST(AuthenticationService, IsValid) {
        StubRsaTokenDao stubRsaTokenDao;
        StubProfileDao stubProfileDao;
        MockLogger mockLogger;
        AuthenticationService target(stubRsaTokenDao, stubProfileDao, mockLogger);
        ON_CALL(stubRsaTokenDao, getRandom("joey")).WillByDefault(Return("000000"));
        ON_CALL(stubProfileDao, getPassword("joey")).WillByDefault(Return("91"));

        EXPECT_CALL(mockLogger, log("authentication is valid"));

        bool actual = target.isValid("joey", "91000000");

        ASSERT_TRUE(actual);
    }

}