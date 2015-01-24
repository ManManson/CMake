set(CMAKE_CROSSCOMPILING 1)

try_run(run_result compile_result
  ${CMAKE_CURRENT_BINARY_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/try_run_src.cxx
  RUN_OUTPUT_VARIABLE run_output
  )

message(STATUS "run_output: ${run_output}")
message(STATUS "run_result: ${run_result}")
