#include "gmock/gmock.h"
#include "codigo1.h"
using namespace testing;

TEST(Codigo1tests, example1)
{
    ASSERT_THAT(codigo1(2,7), 7);
    ASSERT_THAT(codigo1(2,9), 9);
    ASSERT_THAT(codigo1(7,4), 7);
    ASSERT_THAT(codigo1(2,1), 2);
}