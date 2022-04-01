//# include "acutest.c"
#include "online_banking_system.h"
#include<stdio.h>
//#include "unity.h"
#define PROJECT_NAME   "online_banking_system"

void Adding_Fund();
void Withdrawn_amount();

void setUp()
{}
void tearDown()
{}
int main()
{
   UNITY_BEGIN();
   //rUN tEST functions for addingamount and withdrawn amount
   RUN_TEST(Adding_Fund);
   RUN_TEST(Withdrawn_amount);

   return UNITY_END();
}
 void Adding_fund()
 {
    TEST_ASSERT_EQUAL(1000);
    TEST_ASSER_EQUAL(1100);
 }
 void Withdrawn_amount()
 {
   TEST_ASSER_EQUAL(100);
   TEST_ASSER_EQUAL(200);
 }
