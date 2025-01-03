#To avoid multiple installation
do_install_append() {
        if [ -f ${D}${sysconfdir}/udhcpc.vendor_specific ]; then
                rm -rf ${D}${sysconfdir}/udhcpc.vendor_specific
        fi
}
