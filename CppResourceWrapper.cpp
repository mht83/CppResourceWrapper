//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <cstdio>

class SimpleHandle {
private:
    FILE* handle;

public:
    
    SimpleHandle(const char* filename) {
        if (fopen_s(&handle, filename, "r") == 1) {
            perror("File opening failed");
        }
    }

    
    ~SimpleHandle() {
        if (handle) {
            fclose(handle);
            std::cout << "file closed\n";
        }
    }

    
    bool isOpen() const {
        return handle != nullptr;
    }

    
    SimpleHandle(SimpleHandle&& other) : handle(other.handle) {
        other.handle = nullptr;
    }

};

int main() {
    SimpleHandle file("example.txt");
    if (file.isOpen()) {
        printf("File is open.\n");
    }
    else {
        printf("File is not open.\n");
    }

    
    SimpleHandle movedFile(std::move(file));
    if (!file.isOpen() && movedFile.isOpen()) {
        printf("File ownership has been transferred.\n");
    }

    return 0;
}
