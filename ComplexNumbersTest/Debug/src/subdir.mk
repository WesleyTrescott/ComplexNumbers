################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/wesley/workspace/ComplexNumbersProject/Complex\ Numbers/src/ComplexNumber.cpp 

OBJS += \
./src/ComplexNumber.o 

CPP_DEPS += \
./src/ComplexNumber.d 


# Each subdirectory must supply rules for building sources it contributes
src/ComplexNumber.o: /home/wesley/workspace/ComplexNumbersProject/Complex\ Numbers/src/ComplexNumber.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/wesley/workspace/ComplexNumbersProject/ComplexNumbersTest/cute" -I"/home/wesley/workspace/ComplexNumbersProject/ComplexNumbersTest/boost" -O0 -g3 -ftest-coverage -fprofile-arcs -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


