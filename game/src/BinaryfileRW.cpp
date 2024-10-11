#include <BinaryFileRW.hpp>

/***
fstream class flags.

in:input	File open for reading: the internal stream buffer supports input operations.
out: output	File open for writing: the internal stream buffer supports output operations.
binary: 	binary	Operations are performed in binary mode rather than text.
ate: at end	The output position starts at the end of the file.
app: append	All output operations happen at the end of the file, appending to its existing contents.
trunc: truncate	Any contents that existed in the file before it is open are discarded.
*/

BinaryFileRW::BinaryFileRW(std::string filename) {
    stream.open(filename, std::fstream::in);  // ios_base::openmode or std::fstream::openmode to change the mode laeer, at any time. It requires type above, like ios::out etc
}

static void BinaryFileRW::getFile(std::string filename) { BinaryFileRW(filename); }

BinaryFileRW::~BinaryFileRW() {}
template <class T>
T BinaryFileRW::readBitsAtPosition(uint64_t position) {}
template <class T, class Z>
void BinaryFileRW::writeBitsAtPosition(T target, Z bitmask, uint64_t position) {}
template <class T, class Z>
void BinaryFileRW::writeBitsInPipeline(T target, Z bitmask) {}

void BinaryFile::resetPermission() { stream.openmode(std::fstream::in); }