#include "gmock/gmock.h"
#include "codigo2.h"
using namespace testing;

TEST(Codigo2tests, intento_correcto)
{
    ASSERT_THAT(codigo2(), Eq(0)); //verifico que la multiplicacion dio correcta
}
