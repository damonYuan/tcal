if(EXISTS "/Volumes/CaseSensitive/tcal/cmake-build-debug/tcal_test[1]_tests.cmake")
  include("/Volumes/CaseSensitive/tcal/cmake-build-debug/tcal_test[1]_tests.cmake")
else()
  add_test(tcal_test_NOT_BUILT tcal_test_NOT_BUILT)
endif()
