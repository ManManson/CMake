CMAKE_EMULATOR
--------------

An emulator command for try_run execution and tests on generated
executables.

This variable is only used when :variable:`CMAKE_CROSSCOMPILING` is on. It should point to
a command on the host system that can run executables built for the target
system. The command will be used to run :command:`try_run` generated executables, which
avoids manual population of the TryRunResults.cmake file.  This command will
also be added as a prefix to :command:`add_test` test commands for built
target system executables.
