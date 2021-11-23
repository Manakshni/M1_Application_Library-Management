#include "unity.h"
#include <speed.h>



/* Required by the unity test framework */
void setUp()
{

}
/* Required by the unity test framework */
void tearDown()
{

} 
void test_vehicle(void){
    int speed=80;
    TEST_ASSERT_EQUAL_string(speed,"over speed");
 
  
}
int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_vehicle);
    return UNITY_END();
}
