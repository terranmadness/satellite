#ifndef SATELLITE_COMPILER
#define SATELLITE_COMPILER

#include "satellite_header.hpp"

satellite_system satellite_compiler(satellite_system satellite)
{
  ofstream compiler_stream("my_bytecode_file.sate", ios::binary);

  compiler_stream << "0000000000000000000000000000000000000000000000000000000000000000" << endl;


  return(satellite);
}

#endif
