#ifndef OPENN_ACTIVATIONS_H
#define OPENN_ACTIVATIONS_H

namespace openn {
    namespace activations {
        template<typename T_Input, typename T_Output>
        T_Output elu(T_Input x, float alpha = 0.1);

        template<typename T_Input, typename T_Output>
        T_Output softmax(T_Input x, int axis = -1);

        template<typename T_Input, typename T_Output>
        T_Output selu(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output softplus(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output softsign(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output relu(T_Input x, float alpha = 0.0, float max_value = nullptr, float threshold = 0.0);

        template<typename T_Input, typename T_Output>
        T_Output tanh(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output sigmoid(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output hard_sigmoid(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output exponential(T_Input x);

        template<typename T_Input, typename T_Output>
        T_Output linear(T_Input x);
    };
};

#endif