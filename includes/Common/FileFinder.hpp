//
// Created by Paweł Jarosz on 02.11.25.
//

#pragma once
#include <string>
#include <vector>

namespace cpp_tools::common {
    class IPathAcceptor {
    public:
        virtual ~IPathAcceptor() = default;
        virtual bool accept(std::string filename);
    };

    class FileCollector : public IPathAcceptor {
    public:
        FileCollector();
        bool accept(std::string filename) override;
    private:
        std::vector<std::string> collected_files_;
    };

    class FileFinder {
    public:
        FileFinder();
        void collect(File)
    };

}

