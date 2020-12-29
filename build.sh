# build all the templates and clean afterwards
#!/bin/bash
make -j18 PROJECT=minunit_tests_PC CONFIG=release
make -j18 PROJECT=minunit_tests_PC CONFIG=debug
make -j18 PROJECT=minunit_tests_PC doc
make -j18 PROJECT=minunit_tests_bare_metal CONFIG=release
make -j18 PROJECT=minunit_tests_bare_metal CONFIG=debug
make -j18 PROJECT=minunit_tests_bare_metal doc

