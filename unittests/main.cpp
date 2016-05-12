#include "gtest/gtest.h"

#if defined(WIN32) && defined(_DEBUG)
	// Detect memory leaks
	#define _CRTDBG_MAP_ALLOC
	#include <stdlib.h>
	#include <crtdbg.h>
#endif

int main(int argc, char** argv)
{
#ifdef _CRTDBG_MAP_ALLOC
	// Dump memory leaks at exit point
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	printf("Running main()\n");
    //::testing::FLAGS_gtest_output = "xml";
    //::testing::FLAGS_gtest_filter = "*";
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
