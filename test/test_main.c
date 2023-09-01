#include <unity.h>
#include <stdio.h>
#include <esp_system.h>

void test_dummy(void)
{
  TEST_ASSERT_EQUAL(1, 1);
}

void app_main()
{
  __attribute__((unused)) int result;
  UNITY_BEGIN();

  RUN_TEST(test_dummy);
  RUN_TEST(test_dummy);
  RUN_TEST(test_dummy);

  result = UNITY_END();
  esp_restart();
}