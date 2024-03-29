cmake_minimum_required(VERSION 3.6)
project(OpenNN VERSION 1.0.0 LANGUAGES C CXX)

if(NOT CMAKE_BUILD_TYPE)
    message(STATUS "No build type specified. Default to -DCMAKE_BUILD_TYPE=Release.")
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Choice the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel" FORCE)
else()
    if(CMAKE_BUILD_TYPE STREQUAL "Debug")
        message(STATUS "Build type: Debug. Performance will be terrible.")
        message(STATUS "Add -DCMAKE_BUILD_TYPE=Release to the CMake command line to get optimized build.")
    endif()
endif()

# Define user options
option(OPENN_USE_SSE "Build open-nn with SSE library support" ON)
option(OPENN_USE_AVX "Build open-nn with AVX library support" ON)
option(OPENN_USE_AVX2 "Build open-nn with AVX2 library support" OFF)
option(OPENN_USE_TBB "Build open-nn with TBB library support" OFF)
option(OPENN_USE_OMP "Build open-nn with OMP library support" OFF)
option(OPENN_USE_NNPACK "Build open-nn with NNPACK library support" OFF)
option(OPENN_USE_CBLAS "Build open-nn with CBLAS library support" OFF)
option(OPENN_USE_INTEL_MKL "Build open-nn with Intel MKL library support" OFF)
option(OPENN_USE_OPENCL "Build open-nn with OpenCL library support" OFF)
option(OPENN_USE_LIBDNN "Build open-nn with GreenteaLibDNN library support" OFF)
option(OPENN_USE_SERIALIZER "Build open-nn with Serialization support" ON)
option(OPENN_USE_DOUBLE "Build open-nn with double precision computations" OFF)
option(OPENN_USE_IMAGE_API "Build open-nn with Image API support" ON)
option(OPENN_USE_GEMMLOWP "Build open-nn with gemmlowp support" OFF)

option(OPENN_BUILD_TESTS "Set to ON to build tests" OFF)
option(OPENN_BUILD_EXAMPLES "Set to ON to build examples" OFF)
option(OPENN_BUILD_DOCS "Set to ON to build documentation" OFF)
option(OPENN_BUILD_BRANCHMARKS "Set to ON to build branchmarks" OFF)

option(OPENN_COVERALLS "Set to ON to build with code coverage" OFF)
option(OPENN_PROFILE "Set to ON to build with profiling" OFF)
option(OPENN_USE_ASAN "Set to ON to build with ASan" OFF)