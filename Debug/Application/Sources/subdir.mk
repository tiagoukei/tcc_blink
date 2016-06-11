################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Sources/Task1.c \
../Application/Sources/Task2.c \
../Application/Sources/led_driver.c \
../Application/Sources/main.c 

OBJS += \
./Application/Sources/Task1.o \
./Application/Sources/Task2.o \
./Application/Sources/led_driver.o \
./Application/Sources/main.o 

C_DEPS += \
./Application/Sources/Task1.d \
./Application/Sources/Task2.d \
./Application/Sources/led_driver.d \
./Application/Sources/main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Sources/%.o: ../Application/Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -I"C:\Freescale_Projects\tcc_blink\Application\Includes" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\include" -I"C:\Freescale_Projects\tcc_blink\FreeRTOS\portable\CortexM0p_GCC" -I"C:\Freescale_Projects\tcc_blink\Startup_Code\Includes" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


