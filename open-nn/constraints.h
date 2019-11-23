#ifndef OPENN_CONSTRAINTS_H
#define OPENN_CONSTRAINTS_H

namespace openn {
    namespace constraints {
        class Constraint {

        };

        class MaxNorm : public Constraint {
        public:
            MaxNorm(float max_value = 2.0, int axis = 0);
        };

        class NonNeg : public Constraint {

        };

        class UnitNorm : public Constraint {
        public:
            UnitNorm(int axis = 0);
        };

        class MinMaxNorm : public Constraint {
        public:
            MinMaxNorm(float min_value = 0.0, float max_value = 1.0, int axis = 2);
        };
    };
};

#endif