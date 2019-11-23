#ifndef OPENN_DATASETS_H
#define OPENN_DATASETS_H

namespace openn {
    namespace datasets {
        class Dataset {
            
        };

        Dataset cifar10();
        Dataset cifar100();
        Dataset imdb();
        Dataset reuters();
        Dataset mnist();
        Dataset fashion_mnist();
        Dataset boston_housing();
    };
};

#endif