################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Soeces/pro7.c 

OBJS += \
./Soeces/pro7.o 

C_DEPS += \
./Soeces/pro7.d 


# Each subdirectory must supply rules for building sources it contributes
Soeces/%.o: ../Soeces/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


