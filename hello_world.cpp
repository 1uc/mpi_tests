#include <iostream>
#include <string>
#include <sstream>
#include "mpi.h"

int main(int argc, char *argv[]){
  MPI_Init(&argc, &argv);

  int rank = -1;
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);

  std::stringstream msg;
  msg <<  "Hi, this is PE " << rank << "\n";
  std::cout << msg.str();

  MPI_Finalize();
  return 0;
}
