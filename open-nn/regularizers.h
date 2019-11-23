#ifndef OPENN_REGULARIZERS_H
#define OPENN_REGULARIZERS_H

namespace openn {
    namespace regularizers {
        class Regularizer {
        private:
            float l1;
            float l2;
        public:
            Regularizer(float l1 = 0.01, float l2 = 0.02);
        };

        Regularizer l1(float l = 0.01);
        Regularizer l2(float l = 0.01);
        Regularizer l1_l2(float l1 = 0.01, float l2 = 0.01);
    };
};

#endif