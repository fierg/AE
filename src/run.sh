#!/bin/bash

# Iterate over each directory in the current directory
for dir in */; do
    # Enter the directory
    cd "$dir"

    # Check if CMakeLists.txt exists in the directory
    if [ -f "CMakeLists.txt" ]; then
        echo "Processing directory: $dir"

        # Create a build directory and navigate into it
        mkdir -p build && cd build

        # Run CMake to generate the build files
        cmake ..

        # Compile the project with Make
        make

        # Check if the executable exists
        if [ -f "output_program" ]; then
            echo "Running program..."

            # Run the output program
            ./output_program
        else
            echo "Executable not found. Make sure the project compiled successfully."
        fi

        # Return to the parent directory
        cd ..
    fi

    # Return to the original directory
    cd ..
done