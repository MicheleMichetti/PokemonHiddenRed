#include <BinaryFileRW.hpp>

BinaryFileRW::BinaryFileRW(std::string filename, std::ofstream ouput_stream) {
    File output_file(filename);
    this->output_stream = output_file.read;
}
BinaryFileRW::BinaryFileRW(std::string filename, std::ifstream input_stream) {}
BinaryFileRW::BinaryFileRW(std::string filename, std::ofstream ouput_stream, std::ifstream input_stream) {}
~BinaryFileRW::BinaryFileRW() {}
template <class T>
T BinaryFileRW::readBitsAtPosition(uint64_t position) {}
template <class T, class Z>
void BinaryFileRW::writeBitsAtPosition(T target, Z bitmask, uint64_t position) {}
template <class T, class Z>
void BinaryFileRW::writeBitsInPipeline(T target, Z bitmask) {}