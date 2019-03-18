INCLUDE(CMakeForceCompiler)

# CROSS COMPILER SETTING
SET(CMAKE_SYSTEM_NAME Generic)
CMAKE_MINIMUM_REQUIRED (VERSION 2.6)

# THE VERSION NUMBER
SET (Tutorial_VERSION_MAJOR 1)
SET (Tutorial_VERSION_MINOR 0)

# ENABLE ASM
ENABLE_LANGUAGE(ASM)

SET(CMAKE_STATIC_LIBRARY_PREFIX)
SET(CMAKE_STATIC_LIBRARY_SUFFIX)

SET(CMAKE_EXECUTABLE_LIBRARY_PREFIX)
SET(CMAKE_EXECUTABLE_LIBRARY_SUFFIX)
SET(ARMGCC_DIR "/usr/local/gcc-arm-none-eabi-7-2018-q2-update")
 
# CURRENT DIRECTORY
SET(ProjDirPath ${CMAKE_CURRENT_SOURCE_DIR})

# DEBUG LINK FILE
set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -T${ProjDirPath}/MCIMX6X_M4_ocram.ld  -static")

# RELEASE LINK FILE
set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -T${ProjDirPath}/MCIMX6X_M4_ocram.ld  -static")

# DEBUG ASM FLAGS
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG} -g  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99")

# DEBUG C FLAGS
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g  -O0  -fno-strict-aliasing  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -MMD  -MP  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99")

# DEBUG CXX FLAGS
SET(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g  -O0  -fno-strict-aliasing  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -MMD  -MP  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu++11 -fno-exceptions -fno-rtti")

# DEBUG LD FLAGS
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} -g  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  --specs=nano.specs  -lm  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -Os  -mthumb  -mapcs  -Xlinker --gc-sections  -Xlinker -static  -Xlinker -z  -Xlinker muldefs")

# RELEASE ASM FLAGS
SET(CMAKE_ASM_FLAGS_RELEASE "${CMAKE_ASM_FLAGS_RELEASE} -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99")

# RELEASE C FLAGS
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -Os  -fno-strict-aliasing  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -MMD  -MP  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu99")

# RELEASE CXX FLAGS
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Os  -fno-strict-aliasing  -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  -mthumb  -MMD  -MP  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -mapcs  -std=gnu++11  -fno-exceptions -fno-rtti")

# RELEASE LD FLAGS
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} -mcpu=cortex-m4  -mfloat-abi=softfp  -mfpu=fpv4-sp-d16  --specs=nano.specs  -lm  -Wall  -fno-common  -ffunction-sections  -fdata-sections  -ffreestanding  -fno-builtin  -Os  -mthumb  -mapcs  -Xlinker --gc-sections  -Xlinker -static  -Xlinker -z  -Xlinker muldefs")

# ASM MACRO
SET(CMAKE_ASM_FLAGS_DEBUG "${CMAKE_ASM_FLAGS_DEBUG}  -D__DEBUG")

# C MACRO
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}  -D__DEBUG")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}  -DCPU_MCIMX6X_M4")
SET(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG}  -DERPC_THREADS_ZEPHYR")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}  -D__NDEBUG")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}  -DCPU_MCIMX6X_M4")
SET(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE}  -DERPC_THREADS_ZEPHYR")

# CXX MACRO

# INCLUDE_DIRECTORIES
IF(CMAKE_BUILD_TYPE MATCHES Debug)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../..)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/examples/imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/CMSIS/Include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices/MCIMX6X/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices/MCIMX6X/startup)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/drivers/inc)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/rtos/FreeRTOS/Source/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/utilities/inc)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/examples/imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/rpmsg-lite/lib/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/rpmsg-lite/lib/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/rpmsg-lite/lib/include/platform/imx6sx_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/config)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/transports)
#    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_zephyr)
#    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_arch_arm)
#    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_ztest)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../service)
ELSEIF(CMAKE_BUILD_TYPE MATCHES Release)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../..)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/examples/imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/rtos/FreeRTOS/Source/portable/GCC/ARM_CM4F)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/CMSIS/Include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices/MCIMX6X/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/devices/MCIMX6X/startup)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/drivers/inc)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/rtos/FreeRTOS/Source/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/platform/utilities/inc)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/imx-hal/examples/imx6sx_sdb_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/rpmsg-lite/lib/include)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/rpmsg-lite/lib/include/platform/imx6sx_m4)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/config)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/transports)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_zephyr)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_arch_arm)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../../../middleware/erpc/erpc_c/include_ztest)
    INCLUDE_DIRECTORIES(${ProjDirPath}/../../../service)
ENDIF()

# ADD_EXECUTABLE
ADD_EXECUTABLE(erpc_mcu_mpu_hello_world 

    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_common.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_version.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_crc16.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_framed_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_config_internal.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port_zephyr.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_threading_zephyr.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_setup_serial.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_mbf_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_transport_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/transports/erpc_serial_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/config/erpc_config.h"
)
SET_TARGET_PROPERTIES(erpc_mcu_mpu_hello_world PROPERTIES OUTPUT_NAME "erpc_mcu_mpu_hello_world.elf")

add_library(erpc_server STATIC
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_client_manager.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_common.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_version.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_crc16.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_framed_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_config_internal.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port_zephyr.cpp"
#    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_threading_zephyr.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_client_setup.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_setup_serial.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_setup_mbf_static.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_mbf_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_transport_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/transports/erpc_serial_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/config/erpc_config.h"

#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_server.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_server.cpp"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_client.cpp"

#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_server.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_server.cpp"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_client.cpp"

    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api.h"
    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_server.h"
    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_server.cpp"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_client.cpp"
)

add_library(erpc_client STATIC
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_simple_server.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_client_manager.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_common.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_basic_codec.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_codec.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_version.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_message_buffer.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_crc16.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/infra/erpc_framed_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_config_internal.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_port_zephyr.cpp"
#    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/port/erpc_threading_zephyr.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_server_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_client_setup.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_setup_serial.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_setup_mbf_static.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_mbf_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/setup/erpc_transport_setup.h"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/transports/erpc_serial_transport.cpp"
    "${ProjDirPath}/../../../../../middleware/erpc/erpc_c/config/erpc_config.h"

#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_server.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_server.cpp"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_matrix_multiply_client.cpp"

#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_server.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_server.cpp"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_client_api_client.cpp"

    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api.h"
    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_server.h"
#    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_server.cpp"
    "${ProjDirPath}/../../../../../MCU/example_erpc/service/erpc_psa_api_client.cpp"
)

TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world -Wl,--start-group)
# LIBRARIES
IF(CMAKE_BUILD_TYPE MATCHES Debug)
ELSEIF(CMAKE_BUILD_TYPE MATCHES Release)
ENDIF()

# SYSTEM LIBRARIES
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world m)
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world c)
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world c) #keep twice, for CXX
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world gcc)
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world nosys)
TARGET_LINK_LIBRARIES(erpc_mcu_mpu_hello_world -Wl,--end-group)

# MAP FILE
SET(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG}  -Xlinker -Map=debug/erpc_mcu_mpu_hello_world.map")
SET(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE}  -Xlinker -Map=release/erpc_mcu_mpu_hello_world.map")

# BIN AND HEX
ADD_CUSTOM_COMMAND(TARGET erpc_mcu_mpu_hello_world POST_BUILD COMMAND ${CMAKE_OBJCOPY} -Oihex ${EXECUTABLE_OUTPUT_PATH}/erpc_mcu_mpu_hello_world.elf ${EXECUTABLE_OUTPUT_PATH}/erpc_mcu_mpu_hello_world.hex)
ADD_CUSTOM_COMMAND(TARGET erpc_mcu_mpu_hello_world POST_BUILD COMMAND ${CMAKE_OBJCOPY} -Obinary ${EXECUTABLE_OUTPUT_PATH}/erpc_mcu_mpu_hello_world.elf ${EXECUTABLE_OUTPUT_PATH}/erpc_mcu_mpu_hello_world.bin)
