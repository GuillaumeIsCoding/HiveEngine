//
// Created by guill on 2024-09-27.
//

#ifndef PROFILER_H
#define PROFILER_H

#include <easy/profiler.h>

namespace hive
{
    #define FUNCTION_NAME __func__

    #define INIT_PROFILING          \
        EASY_PROFILER_ENABLE;       \
        profiler::startListen();

    #define FUNCTION_PROFILING(...) EASY_BLOCK(FUNCTION_NAME, ## __VA_ARGS__);

    #define BLOCK_PROFILING(name) EASY_BLOCK(name)

    #define END_BLOCK_PROFILING EASY_END_BLOCK

    #define DUMP_PROFILING(path) profiler::dumpBlocksToFile(path);

}

#endif //PROFILER_H