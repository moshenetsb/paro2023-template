add_library(ScrabbleScore SHARED
  src/get-score.cpp
)

target_include_directories (ScrabbleScore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(ut)
