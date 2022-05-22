################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../sorces/pro2a.c \
../sorces/pro2a2.c 

OBJS += \
./sorces/pro2a.o \
./sorces/pro2a2.o 

C_DEPS += \
./sorces/pro2a.d \
./sorces/pro2a2.d 


# Each subdirectory must supply rules for building sources it contributes
sorces/%.o: ../sorces/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


