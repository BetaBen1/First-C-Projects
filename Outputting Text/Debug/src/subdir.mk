################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Outputting\ Text.cpp 

OBJS += \
./src/Outputting\ Text.o 

CPP_DEPS += \
./src/Outputting\ Text.d 


# Each subdirectory must supply rules for building sources it contributes
src/Outputting\ Text.o: ../src/Outputting\ Text.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Outputting Text.d" -MT"src/Outputting\ Text.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


