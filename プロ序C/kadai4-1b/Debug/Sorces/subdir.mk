################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sorces/kadai4-1b.c 

OBJS += \
./Sorces/kadai4-1b.o 

C_DEPS += \
./Sorces/kadai4-1b.d 


# Each subdirectory must supply rules for building sources it contributes
Sorces/%.o: ../Sorces/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


