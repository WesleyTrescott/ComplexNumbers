################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/wesley/workspace/Complex\ Numbers/Test/src/ComplexTest.cpp 

OBJS += \
./Complex\ Numbers/Test/src/ComplexTest.o 

CPP_DEPS += \
./Complex\ Numbers/Test/src/ComplexTest.d 


# Each subdirectory must supply rules for building sources it contributes
Complex\ Numbers/Test/src/ComplexTest.o: /home/wesley/workspace/Complex\ Numbers/Test/src/ComplexTest.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/wesley/workspace/ComplexNumbersTest/cute" -I"/home/wesley/workspace/ComplexNumbersTest/boost" -I"/home/wesley/workspace/Complex Numbers" -include"/home/wesley/workspace/Complex Numbers/ComplexNumber.h" -O0 -g3 -Wall -c -fmessage-length=0 -fprofile-arcs -ftest-coverage -MMD -MP -MF"Complex Numbers/Test/src/ComplexTest.d" -MT"Complex\ Numbers/Test/src/ComplexTest.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


