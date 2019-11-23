#ifndef OPENN_CALLBACKS_H
#define OPENN_CALLBACKS_H

namespace openn {
    namespace callbacks {
        class Callback {

        };

        class BaseLogger : public Callback {

        };

        class TerminateOnNaN : public Callback {

        };

        class ProgbarLogger : public Callback {

        };

        class History : public Callback {

        };

        class ModelCheckpoint : public Callback {

        };

        class EarlyStopping : public Callback {

        };

        class RemoteMonitor : public Callback {

        };

        class LearningRateScheduler : public Callback {

        };

        class ReduceLROnPlateau : public Callback {

        };

        class CSVLogger : public Callback {

        };

        class LambdaCallback : public Callback {

        };
    };
};

#endif