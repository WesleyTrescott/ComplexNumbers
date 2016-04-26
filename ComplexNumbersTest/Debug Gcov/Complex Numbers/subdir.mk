################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/wesley/workspace/Complex\ Numbers/src/ComplexNumber.cpp 

OBJS += \
./Complex\ Numbers/ComplexNumber.o 

CPP_DEPS += \
./Complex\ Numbers/ComplexNumber.d 


# Each subdirectory must supply rules for building sources it contributes
Complex\ Numbers/ComplexNumber.o: /home/wesley/workspace/Complex\ Numbers/src/ComplexNumber.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/wesley/workspace/ComplexNumbersTest/cute" -I"/home/wesley/workspace/ComplexNumbersTest/boost" -I"/home/wesley/workspace/Complex Numbers" -O0 -g3 -Wall -c -fmessage-length=0 -fprofile-arcs -ftest-coverage -MMD -MP -MF"Complex Numbers/ComplexNumber.d" -MT"Complex\ Numbers/ComplexNumber.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


