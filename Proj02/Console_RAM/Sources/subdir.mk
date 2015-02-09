################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/Dipsw.c" \
"../Sources/Lights.c" \
"../Sources/MCF52259_sysinit.c" \
"../Sources/PButt.c" \
"../Sources/Timer.c" \
"../Sources/console_io_cf.c" \
"../Sources/exceptions.c" \
"../Sources/main.c" \
"../Sources/uart_support.c" \

C_SRCS += \
../Sources/Dipsw.c \
../Sources/Lights.c \
../Sources/MCF52259_sysinit.c \
../Sources/PButt.c \
../Sources/Timer.c \
../Sources/console_io_cf.c \
../Sources/exceptions.c \
../Sources/main.c \
../Sources/uart_support.c \

OBJS += \
./Sources/Dipsw_c.obj \
./Sources/Lights_c.obj \
./Sources/MCF52259_sysinit_c.obj \
./Sources/PButt_c.obj \
./Sources/Timer_c.obj \
./Sources/console_io_cf_c.obj \
./Sources/exceptions_c.obj \
./Sources/main_c.obj \
./Sources/uart_support_c.obj \

OBJS_QUOTED += \
"./Sources/Dipsw_c.obj" \
"./Sources/Lights_c.obj" \
"./Sources/MCF52259_sysinit_c.obj" \
"./Sources/PButt_c.obj" \
"./Sources/Timer_c.obj" \
"./Sources/console_io_cf_c.obj" \
"./Sources/exceptions_c.obj" \
"./Sources/main_c.obj" \
"./Sources/uart_support_c.obj" \

C_DEPS += \
./Sources/Dipsw_c.d \
./Sources/Lights_c.d \
./Sources/MCF52259_sysinit_c.d \
./Sources/PButt_c.d \
./Sources/Timer_c.d \
./Sources/console_io_cf_c.d \
./Sources/exceptions_c.d \
./Sources/main_c.d \
./Sources/uart_support_c.d \

OBJS_OS_FORMAT += \
./Sources/Dipsw_c.obj \
./Sources/Lights_c.obj \
./Sources/MCF52259_sysinit_c.obj \
./Sources/PButt_c.obj \
./Sources/Timer_c.obj \
./Sources/console_io_cf_c.obj \
./Sources/exceptions_c.obj \
./Sources/main_c.obj \
./Sources/uart_support_c.obj \

C_DEPS_QUOTED += \
"./Sources/Dipsw_c.d" \
"./Sources/Lights_c.d" \
"./Sources/MCF52259_sysinit_c.d" \
"./Sources/PButt_c.d" \
"./Sources/Timer_c.d" \
"./Sources/console_io_cf_c.d" \
"./Sources/exceptions_c.d" \
"./Sources/main_c.d" \
"./Sources/uart_support_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/Dipsw_c.obj: ../Sources/Dipsw.c
	@echo 'Building file: $<'
	@echo 'Executing target #1 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/Dipsw.args" -o "Sources/Dipsw_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/%.d: ../Sources/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/Lights_c.obj: ../Sources/Lights.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/Lights.args" -o "Sources/Lights_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/MCF52259_sysinit_c.obj: ../Sources/MCF52259_sysinit.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/MCF52259_sysinit.args" -o "Sources/MCF52259_sysinit_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/PButt_c.obj: ../Sources/PButt.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/PButt.args" -o "Sources/PButt_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/Timer_c.obj: ../Sources/Timer.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/Timer.args" -o "Sources/Timer_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/console_io_cf_c.obj: ../Sources/console_io_cf.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/console_io_cf.args" -o "Sources/console_io_cf_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/exceptions_c.obj: ../Sources/exceptions.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/exceptions.args" -o "Sources/exceptions_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/main_c.obj: ../Sources/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/main.args" -o "Sources/main_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/uart_support_c.obj: ../Sources/uart_support.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ColdFire Compiler'
	"$(CF_ToolsDirEnv)/mwccmcf" @@"Sources/uart_support.args" -o "Sources/uart_support_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


