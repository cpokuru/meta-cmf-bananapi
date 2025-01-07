SUMMARY = "Custom core image package group for easymesh AP"

LICENSE = "MIT"

inherit packagegroup
PACKAGES = " \
          packagegroup-filogic-mt76 \
          packagegroup-ap-extender \
        "

RDEPENDS_packagegroup-rdk-ccsp-broadband_remove = " rdk-wifi-hal"

RDEPENDS_packagegroup-rdk-ccsp-broadband_append = " \
           ${@bb.utils.contains('DISTRO_FEATURES', 'OneWifi', 'rdk-wifi-hal', '' ,d)} \
           "
