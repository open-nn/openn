#ifndef OPENN_METRICS_H
#define OPENN_METRICS_H

namespace openn {
    namespace metrics {
        template<typename T_Input, typename T_Output>
        T_Output accuracy(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output binary_accuracy(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output categorical_accuracy(T_Input y_true, T_Output y_pred);

        template<typename T_input, typename T_Output>
        T_Output sparse_categorical_accuracy(T_Input y_true, T_Output y_pred);

        template<typename T_Input, typename T_Output>
        T_Output top_k_categorical_accuracy(T_input y_true, T_Output y_pred);

        template<typename T_input, typename T_Output>
        T_Output sparse_top_k_categorical_accuracy(T_input y_true, T_Output y_pred);

        template<typename T_input, typename T_Output>
        T_Output cosine_proximity(T_input y_true, T_Output y_pred);
    };
};

#endif