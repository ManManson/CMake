include(RunCMake)

set(RunCMake_TEST_OPTIONS -DCMAKE_EMULATOR=${PSEUDO_EMULATOR})

run_cmake(TryRun)
run_cmake(AddTest)
