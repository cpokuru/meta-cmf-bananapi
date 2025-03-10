DISTRO_FEATURES_append = " halVersion3"

#rdk-wifi-libhostap support for broadband
DISTRO_FEATURES_append = " HOSTAPD_2_10"

# OneWifi feature
#DISTRO_FEATURES_append = " OneWifi"

# MacFilter Feature
DISTRO_FEATURES_append = " acl_nl_support"

#No Moca Support
DISTRO_FEATURES_append = " no_moca_support"

DISTRO_FEATURES_append = " referencepltfm "

MACHINEOVERRIDES_append = "${@bb.utils.contains('DISTRO_FEATURES', 'OneWifi', ':onewifi', '' ,d)}"

#Dac Feature support for BPIR4 device.
DISTRO_FEATURES_append = " dac"

DISTRO_FEATURES_append = " partner_default_ext"

# Define extender feature
DISTRO_FEATURES_append = " extender"
