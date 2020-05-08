#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "CUnit.h"
#include "Basic.h"
#include "fda.h"


void runFileTest0() {/*test for count func*/
  char * filename = "2018Recalls.xml";
  int actual = 291;//counted every product in 2018Recalls.xml; total is 291
  int expected = count(filename);
  CU_ASSERT_EQUAL(expected, actual);
}

                                                                
void runFileTest1() {/*test for */                
  
}
                              
void test_00(void) { runFileTest0(); }
void test_01(void) { runFileTest1(); }

int init_suite1(void) { return 0; }    /* The suite initialization function. */
int clean_suite1(void) { return 0; }   /* The suite cleanup function. */

/* The main() function for setting up and running the tests.
 * Returns a CUE_SUCCESS on successful running, another
 * CUnit error code on failure.
 */
int main()
{
  CU_pSuite pSuite = NULL;

  /* initialize the CUnit test registry */
  if (CUE_SUCCESS != CU_initialize_registry()) { return CU_get_error(); }

  /* add a suite to the registry */
  pSuite = CU_add_suite("Suite_1", init_suite1, clean_suite1);
  if (NULL == pSuite) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* add the tests to the suite */
  if (
      (NULL == CU_add_test(pSuite, "test on count func", test_00))
      || (NULL == CU_add_test(pSuite, "test on ", test_01))
      )
    {
      CU_cleanup_registry();
      return CU_get_error();
    }

  /* Run all tests using the CUnit Basic interface */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}
