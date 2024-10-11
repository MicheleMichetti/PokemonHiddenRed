#include <fstream>

class BinaryFileRW {
   private:
    std::ofstream ouput_stream;
    std::ifstream input_stream;

   public:
    BinaryFileRW(std::string filename, std::ofstream ouput_stream);
    BinaryFileRW(std::string filename,std::ifstream input_stream);
    BinaryFileRW(std::string filename,std::ofstream ouput_stream, std::ifstream input_stream);
    ~BinaryFileRW();
    template <class T>
    T readBitsAtPosition(uint64_t position);
    template <class T, class Z>
    void writeBitsAtPosition(T target, Z bitmask, uint64_t position);
    template <class T, class Z>
    void writeBitsInPipeline(T target, Z bitmask);
};