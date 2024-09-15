#include <fstream>

class BinaryFileRW {
   private:
    std::ofstream ouput_stream;
    std::ifstream input_stream;

   public:
    BinaryFileRW(std::ofstream ouput_stream);
    BinaryFileRW(std::ifstream input_stream);
    BinaryFileRW(std::ofstream ouput_stream, std::ifstream input_stream);
    ~BinaryFileRW();
    template <class T>
    T readBitsAtPosition();
    void writeBitsAtPosition();
    void writeBitsInPipeline();
};