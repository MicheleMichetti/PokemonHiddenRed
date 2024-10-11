#include <fstream>

class BinaryFileRW {
   private:
    std::string filename;
    std::fstream stream;

    BinaryFileRW();

   public:
    static void getFile(std::string filename);
    ~BinaryFileRW();
    template <class T>
    T readBitsAtPosition(uint64_t position);
    template <class T, class Z>
    void writeBitsAtPosition(T target, Z bitmask, uint64_t position);
    template <class T, class Z>
    void writeBitsInPipeline(T target, Z bitmask);
    void resetPermission();
};