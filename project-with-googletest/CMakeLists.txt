cmake_minimum_required(VERSION 3.14)
project(MyProject)

# ===== Fetch GoogleTest =====
# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
	  googletest
	  # Specify the commit hash you depend on and update it regularly.
	  URL https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings.
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# ===== Executable =====
add_executable(MyProject start.cc)
target_include_directories(
    MyProject
    PUBLIC "${PROJECT_BINARY_DIR}"
           "${PROJECT_SOURCE_DIR}/MathFunctions"
)

# ===== Enable GoogleTest =====
# Building the GoogleTest test binaries
enable_testing()

add_executable(start_test start_test.cc)
target_link_libraries(start_test gtest_main)

include(GoogleTest)
gtest_discover_tests(start_test)
