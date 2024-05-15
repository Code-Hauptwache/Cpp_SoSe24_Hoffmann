# Cpp_SoSe24_Hoffman

This repository contains C++ exercises and examples created for the summer semester 2024. It serves as a central platform for organizing and managing tasks and exercises.

## Table of Contents

- [Project Overview](#project-overview)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [CI/CD](#cicd)
- [Contributors](#contributors)

## Project Overview

This repository is a collection of C++ examples and tasks created for the summer semester 2024. Each task is located in its own folder, and there are special folders for examples from various lectures.

## Project Structure

The project structure is as follows:
```sh
Cpp_SoSe24_Hoffman/
│
├── .github/
│ └── workflows/
│ └── ci.yml
├── examplePrograms/
│ ├── lecture02/
│ ├── lecture03/
│ ├── lecture04/
│ └── ... (more lectures)
├── student1/
│ └── worksheetX/
│ └── taskY/
│ ├── *.cpp
│ └── Makefile
└── student2/
└── worksheetX/
└── taskY/
├── *.cpp
└── Makefile
```
## Installation

1. **Clone the repository**:
    ```sh
    git clone https://github.com/Code-Hauptwache/Cpp_SoSe24_Hoffman.git
    cd Cpp_SoSe24_Hoffman
    ```

2. **Install dependencies**:
    - Install a C++ compiler (g++ recommended).
    - Install `make` (if not already installed).

    On Ubuntu:
    ```sh
    sudo apt-get update
    sudo apt-get install -y g++ make
    ```

## Usage

1. **Compile and run tasks**:
    - Navigate to the folder of the respective task and run the build command.

    Example:
    ```sh
    cd student1/worksheet01/task1
    make
    ./helloworld
    ```

2. **Compile individual `.cpp` files**:
    - You can also compile individual `.cpp` files directly.

    Example:
    ```sh
    g++ -Wall -g -std=c++20 -o helloworld helloworld.cpp
    ./helloworld
    ```

## CI/CD

This repository uses GitHub Actions for CI/CD. The CI workflow is defined in `.github/workflows/ci.yml` and runs on every push and pull request. It compiles and tests all `.cpp` and `.c` files as well as any existing Makefiles.

### CI Workflow File

```yaml
name: CI

on:
  push:
    branches: [main]
  pull_request:
    branches: [main]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v2

      - name: Install dependencies
        run: sudo apt-get update && sudo apt-get install -y g++ gcc make

      - name: Compile all .cpp and .c files and run Makefiles
        run: |
          # Find and compile all .cpp and .c files in /task[nummer] directories
          find . -regex '.*/task[0-9]+' -type d | while read task_dir; do
            echo "Processing directory: $task_dir"
            makefile="$task_dir/Makefile"
            if [ -f "$makefile" ]; then
              echo "Found Makefile in $task_dir, running make..."
              make -C "$task_dir"
            else
              # Compile all .cpp files
              find "$task_dir" -maxdepth 1 -name '*.cpp' | while read cpp_file; do
                echo "Compiling $cpp_file"
                g++ -Wall -g -std=c++20 -o "${cpp_file%.cpp}" "$cpp_file"
              done
              # Compile all .c files
              find "$task_dir" -maxdepth 1 -name '*.c' | while read c_file; do
                echo "Compiling $c_file"
                gcc -Wall -g -std=c11 -o "${c_file%.c}" "$c_file"
              done
            fi
          done
```

## Contributors

- **Hauptwache Code Team**: Management and organization of the repository.
- **Students from Frankfurt UAS**: Contributors to the tasks and examples.
