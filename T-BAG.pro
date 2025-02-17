# Add required Qt modules
QT += core gui widgets

# Define the target executable
TARGET = T-BAG

# Set the template type
TEMPLATE = app

# Include source files
SOURCES += \
    src/main.cpp \
    src/Game.cpp

# Include header files
HEADERS += \
    include/Game.hpp