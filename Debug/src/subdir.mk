################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BossUfoEnemyShip.cpp \
../src/EnemyShip.cpp \
../src/EnemyShipFactory.cpp \
../src/Main.cpp \
../src/RocketEnemyShip.cpp \
../src/UfoEnemyShip.cpp 

OBJS += \
./src/BossUfoEnemyShip.o \
./src/EnemyShip.o \
./src/EnemyShipFactory.o \
./src/Main.o \
./src/RocketEnemyShip.o \
./src/UfoEnemyShip.o 

CPP_DEPS += \
./src/BossUfoEnemyShip.d \
./src/EnemyShip.d \
./src/EnemyShipFactory.d \
./src/Main.d \
./src/RocketEnemyShip.d \
./src/UfoEnemyShip.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


