#include <iostream>
#include <grpcpp/grpcpp.h>

using grpc::ServerBuilder;

int main() {
    std::cout << "Hello, World!" << std::endl; // Set breakpoint on this line
    ServerBuilder builder; // If you comment this line, the debugger works
    return 0;
}