#include "gmock/gmock.h"
#include "codigo3.h"
using namespace testing;

TEST(Codigo3tests, intento_correcto)
{
    ASSERT_THAT(codigo3(), Eq(0)); //verifico que la retorno 0 por suma correcta
}
