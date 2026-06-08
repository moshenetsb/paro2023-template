add_executable(ScrabbleTests
  get-score-tests.cpp)

target_link_libraries (ScrabbleTests PUBLIC GetScore gtest_main)

add_test(NAME ScrabbleScore
    COMMAND ScrabbleTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise2.junit.xml)
