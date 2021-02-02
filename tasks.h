#ifndef ENVTRACK_TASKS_H
#define ENVTRACK_TASKS_H

#include <cstdint>
#include <thread>

namespace EnvTrack {
namespace Tasks {

using JobHandle = uint_fast16_t;

template<unsigned int thread_count>
struct Job {
    bool job_continue_;
    std::thread threads_[thread_count];
};

typedef struct {
    bool job_continue_;
    std::thread* threads_;
} Job_t;

template<const unsigned int total_thread_count>
class TaskManager {
public:
    TaskManager();
    ~TaskManager();

    JobHandle CreateTask(bool recurring = false, uint64_t timeout = 0);

    void EndTask(JobHandle job);

private:
    std::thread* job_threads_;


};

}  // namespace Tasks

}  // namespace EnvTrack

#endif