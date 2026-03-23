# Digital Clock - Multi-Timezone Display

A C++ console application that displays the current time across multiple time zones in real-time.

## Features

- 🕐 Real-time clock display
- 🌍 Support for 8 different time zones (UTC, EST, CST, MST, PST, JST, IST, CET)
- ⏱️ Updates every second
- 🎯 Object-oriented design with Timezone class
- 📦 CMake build system

## Building the Project

### Prerequisites
- C++ compiler (g++, clang, or MSVC)
- CMake 3.10 or higher

### Build Steps

```bash
# Clone the repository
git clone https://github.com/THE-hun-maker最快学习c++项目/digital-clock.git
cd digital-clock

# Create build directory
mkdir build
cd build

# Build the project
cmake ..
make

# Run the application
./digital-clock
```

## Usage

Simply run the executable:
```bash
./digital-clock
```

The clock will display the current time in all supported time zones and update every second. Press `Ctrl+C` to exit.

## Supported Time Zones

| Zone | Offset | City |
|------|--------|------|
| UTC  | +0     | London |
| EST  | -5     | New York |
| CST  | -6     | Chicago |
| MST  | -7     | Denver |
| PST  | -8     | Los Angeles |
| JST  | +9     | Tokyo |
| IST  | +5     | India |
| CET  | +1     | Paris/Berlin |

## Project Structure

```
digital-clock/
├── CMakeLists.txt
├── README.md
└── main.cpp
```

## Learning Objectives

This project teaches:
- ✅ C++ class design and OOP principles
- ✅ Time/date handling with `<chrono>` library
- ✅ Container usage with `std::map`
- ✅ Standard library utilities
- ✅ CMake build configuration
- ✅ Professional code organization

## How to Extend

You can enhance this project by:
- Adding GUI with Qt or SFML
- Reading time zones from a configuration file
- Adding ability to add/remove time zones dynamically
- Creating a web interface
- Adding alarm functionality

## License

MIT License

## Author

THE-hun-maker最快学习c++项目