################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Startup_Code/Sources/system_MKL25Z4.c 

S_UPPER_SRCS += \
../Startup_Code/Sources/startup_MKL25Z4.S 

OBJS += \
./Startup_Code/Sources/startup_MKL25Z4.o \
./Startup_Code/Sources/system_MKL25Z4.o 

C_DEPS += \
./Startup_Code/Sources/system_MKL25Z4.d 

S_UPPER_DEPS += \
./Startup_Code/Sources/startup_MKL25Z4.d 


# Each subdirectory must supply rules for building sources it contributes
Startup_Code/Sources/%.o: ../Startup_Code/Sources/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Startup_Code/Sources/%.o: ../Startup_Code/Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale_Projects\tcc_blink\Application\Includes" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\include" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\portable\CortexM0p_GCC" -I"C:\Freescale_Projects\tcc_blink\Startup_Code\Includes" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


