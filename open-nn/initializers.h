#ifndef OPENN_INITIALIZERS_H
#define OPENN_INITIALIZERS_H

namespace openn {
    namespace initializers {
        class Initializer {

        };
        
        class Zeros {

        };

        class Ones {

        };

        class Constant {

        };

        class RandomNormal {

        };

        class RandomUniform {

        };

        class TruncatedNormal {

        };

        class VarianceScaling {

        };

        class Orthogonal {

        };

        class Identity {

        };

        Initializer lecun_uniform(int seed = nullptr);

        Initializer glorot_normal(int seed = nullptr);

        Initializer glorot_uniform(int seed = nullptr);

        Initializer he_normal(int seed = nullptr);

        Initializer lecun_normal(int seed = nullptr);

        Initializer he_uniform(int seed = nullptr);

    };
};

#endif