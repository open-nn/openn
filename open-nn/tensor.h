#ifndef OPENN_TENSOR_H
#define OPENN_TENSOR_H

#include <vector>

namespace openn {
    template<typename T>
    class Tensor {
    private:
        T *array;
    public:
        Tensor();
    }
}

#endif