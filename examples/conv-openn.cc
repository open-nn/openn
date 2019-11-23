#include <open-nn/openn.h>
#include <open-nn/models.h>
#include <open-nn/layers.h>
#include <open-nn/activations.h>
#include <open-nn/optimizers.h>
#include <open-nn/metrics.h>

using namespace openn;

template<typename T_Input, typename T_Output>
class Generator: public openn::Sequence {
private:
    unsigned int batch_size = 16;
    openn::data::Data data;
public:
    unsigned short int num_classes;
    Generator(const char* path, unsigned int batch_size = 16){
        this->batch_size = batch_size;
        this->data.read_csv(path);
        this->num_classes = this->data.get("class").size();
    }

    openn::data::Batch<T_Input, T_Output> at(unsigned int index){
        openn::data::Batch<T_Input, T_Output> batch;
        unsigned int start = this->batch_size * index;
        for(unsigned int i = start; i < start + batch_size; i++){
            openn::Image image(28, 28, 1);
            image.read(this->data.get("image_path"));
            batch.x.push_back(image);
            batch.y.push_back(this->data.get("class"));
        }
        return batch;
    }

    unsigned int size(){
        return this->data.rows / this->batch_size;
    }
}

int main() {
    Generator<openn::Images, openn::Categories> generator("data/train");
    models::Sequential net;
    net.add(layers::Conv2D<activation::ReLu>(32, 3, 3)->input(-1, 28, 28, 1));
    net.add(layers::MaxPooling2D(2, 2));
    net.add(layers::Conv2D<activation::ReLu>(64, 3, 3));
    net.add(layers::MaxPooling2D(2, 2));
    net.add(layers::Conv2D<activation::ReLu>(128, 3, 3));
    net.add(layers::MaxPooling2D(2, 2));
    net.add(layers::Flatten());
    net.add(layers::Dense<activation::ReLu>(128));
    net.add(layers::Dense<activation::ReLu>(64));
    net.add(layers::Dense<activation::ReLu>(32));
    net.add(layers::Dense<activation::Softmax>(generator.num_classes));

    optimizers::Adam adam;
    net.train<adam, accuracy>(generator);
    net.save("snapshots/conv2d-model.nn");
    net.save_weights("snapshots/conv2d-model/weights.w");
    net.save_model("snapshots/conv2d-model/model.m");

    return 0;
}