#ifndef TASK_1
#define TASK_1

class RandomArray {
    double *array;
    int arrSize;
    const double F_MIN{0.0};
    const double F_MAX{1.0};
    double min;
    double max;
    double sum;
public:
    double f_rand() noexcept;
    RandomArray();
    void printValues();
    ~RandomArray();
};

#endif /* TASK_1 */