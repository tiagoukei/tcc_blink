################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../FreeRTOS/portable/CortexM0p_GCC/port.c 

OBJS += \
./FreeRTOS/portable/CortexM0p_GCC/port.o 

C_DEPS += \
./FreeRTOS/portable/CortexM0p_GCC/port.d 


# Each subdirectory must supply rules for building sources it contributes
FreeRTOS/portable/CortexM0p_GCC/%.o: ../FreeRTOS/portable/CortexM0p_GCC/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale_Projects\tcc_blink\Application\Includes" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\include" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\portable\CortexM0p_GCC" -I"C:\Freescale_Projects\tcc_blink\Startup_Code\Includes" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


