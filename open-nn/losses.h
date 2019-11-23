#ifndef OPENN_LOSSES_H
#define OPENN_LOSSES_H

namespace openn {
    namespace losses {
        template<typename T_Input, typename T_Output>
        T_Output mean_squared_error(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output mean_absolute_error(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output mean_absolute_percentage_error(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output mean_squared_logarithmic_error(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output squared_hinge(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output hinge(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output categorical_hinge(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output logcosh(T_Input y_true, T_Output y_pred);

        template<typename T_Input, typename T_Output>
        T_Output huber_loss(T_Input y_true, T_Output y_pred);

        template<typename T_Input, typename T_Output>
        T_Output categorical_crossentropy(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output sparse_categorical_crossentropy(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output binary_crossentropy(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output kullback_leibler_divergence(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output poisson(T_Input y_true, T_Input y_pred);

        template<typename T_Input, typename T_Output>
        T_Output cosine_proximity(T_Input y_true, T_Input y_pred);
    };
};

#endif