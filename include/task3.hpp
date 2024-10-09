#ifndef TASK_3
#define TASK_3

class BaseConverter {
    double celsius;
    int scale_id;
    double result;
    char label;
public:
    BaseConverter();
    double convert() noexcept;
    void printResult() noexcept;
};

#endif /* TASK_3 */