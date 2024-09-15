# Use an official Ubuntu base image
FROM ubuntu:20.04

# Set environment variables to avoid prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Update the package list and install necessary packages
RUN apt-get update && apt-get install -y \
    build-essential \
    g++ \
    cmake \
    && rm -rf /var/lib/apt/lists/*

# Set the working directory inside the container
WORKDIR /app

# Copy your C++ source files to the container
COPY . .

# Compile the C++ program (assuming you have a main.cpp file)
RUN g++ main.cpp basic_operations.cpp trigonometric_operations.cpp exponential_operations.cpp -o scientific_calculator

# Command to run your compiled application
#CMD ["./myapp"]