if(EXISTS "/Users/heron/projects/design-patterns/creational/factory/tests[1]_tests.cmake")
  include("/Users/heron/projects/design-patterns/creational/factory/tests[1]_tests.cmake")
else()
  add_test(tests_NOT_BUILT tests_NOT_BUILT)
endif()