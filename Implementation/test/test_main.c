#include <unity.h>
#include<test_unitconv.h>

/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

int main(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

    // Check primality function
    test_is_unitconv();

	/* Close the Unity Test Framework */
	return UNITY_END();
}
