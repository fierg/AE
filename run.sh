#!/bin/bash

# Iterate over each directory in the current directory
cd "src"

for dir in */; do
    # Enter the directory
    cd "$dir"

    # Check if CMakeLists.txt exists in the directory
    if [ -f "CMakeLists.txt" ]; then
        echo "Processing directory: $dir"

        # Check if the build folder exists
        if [ -d "build" ]; then
            echo "Build folder exists. Clearing it..."

            # Remove the contents of the build folder
            rm -rf "build"/*
        else
            echo "Build folder not found."
        fi

        # Create a build directory and navigate into it
        mkdir -p build && cd build

        # Run CMake to generate the build files
        cmake -DCMAKE_RULE_MESSAGES=OFF --log-level=ERROR ..

        # Compile the project with Make
        make

        cmake --build .

        # Check if the executable exists
        if [ -f "run" ]; then
            echo "Running program..."

            # Run the output program
            ./run
        else
            echo "Executable not found. Make sure the project compiled successfully."
        fi
        cd ..
    fi
    cd ..
done