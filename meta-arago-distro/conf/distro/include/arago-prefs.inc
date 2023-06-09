# Set preferred Qt5 versions. Different namespace from Qt4, so no conflict
include conf/distro/include/qt5-versions.inc

# Use the latest version of ltp-ddt for kernel versions 3.8+
PREFERRED_PROVIDER_ltp-ddt = "ltp-ddt"

PREFERRED_PROVIDER_virtual/gettext = "gettext"

# OpenGLES/EGL/GBM preferences
# Most of existing TI platforms have SGX GPU core
PREFERRED_PROVIDER_virtual/egl = "ti-sgx-ddk-um"
PREFERRED_PROVIDER_virtual/libgles1 = "ti-sgx-ddk-um"
PREFERRED_PROVIDER_virtual/libgles2 = "ti-sgx-ddk-um"
PREFERRED_PROVIDER_virtual/libgbm = "ti-sgx-ddk-um"
PREFERRED_PROVIDER_virtual/gpudriver = "ti-sgx-ddk-km"

# J7 has a Rogue GPU core
PREFERRED_PROVIDER_virtual/egl_j7 = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgles1_j7 = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgles2_j7 = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgbm_j7 = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/gpudriver_j7 = "ti-img-rogue-driver"

# am62xx has a Rogue GPU core
PREFERRED_PROVIDER_virtual/egl_am62xx = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgles1_am62xx = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgles2_am62xx = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/libgbm_am62xx = "ti-img-rogue-umlibs"
PREFERRED_PROVIDER_virtual/gpudriver_am62xx = "ti-img-rogue-driver"

# This is required to use am62axx with graphical support such as QT5
PREFERRED_PROVIDER_virtual/egl_am62axx = "mesa"
PREFERRED_PROVIDER_virtual/libgles1_am62axx = "mesa"
PREFERRED_PROVIDER_virtual/libgles2_am62axx = "mesa"
PREFERRED_PROVIDER_virtual/libgbm_am62axx = "mesa"
PREFERRED_PROVIDER_virtual/gpudriver_am62axx = "mesa"

# This is required when using keystone devices with graphical support
# such as Qt5
PREFERRED_PROVIDER_virtual/egl_keystone = "mesa"
PREFERRED_PROVIDER_virtual/libgles1_keystone = "mesa"
PREFERRED_PROVIDER_virtual/libgles2_keystone = "mesa"
PREFERRED_PROVIDER_virtual/libgbm_keystone = "mesa"
PREFERRED_PROVIDER_virtual/libgl_keystone = "mesa"
PREFERRED_PROVIDER_virtual/mesa_keystone = "mesa"

PREFERRED_PROVIDER_virtual/kernel = "linux-ti-staging${ARAGO_KERNEL_SUFFIX}"

# For TI devices with only baremetal/TI RTOS support
PREFERRED_PROVIDER_virtual/kernel_c66x = "linux-dummy"
PREFERRED_PROVIDER_virtual/kernel_omapl137 = "linux-dummy"

PREFERRED_PROVIDER_jpeg = "libjpeg-turbo"

# Setting PREFERRED_VERSIONS due to selecting a specific version of a library or
# application that does not have a GPLv3 license
PREFERRED_VERSION_crda = "3.18"
PREFERRED_VERSION_obex = "0.34"

PREFERRED_PROVIDER_libnl-xfrm = "libnl"

PREFERRED_PROVIDER_wpa-supplicant = "wpa-supplicant"
#PREFERRED_PROVIDER_wpa-supplicant_ti33x = "wpa-supplicant-wl18xx"
#PREFERRED_PROVIDER_wpa-supplicant_ti43x = "wpa-supplicant-wl18xx"
#PREFERRED_PROVIDER_wpa-supplicant_omap-a15 = "wpa-supplicant-wl18xx"
