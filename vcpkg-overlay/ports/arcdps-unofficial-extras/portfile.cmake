vcpkg_check_linkage(ONLY_STATIC_LIBRARY)

# Overlay port: use the m21248074 fork (adds Language::TChinese) instead of the upstream release.
vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO m21248074/arcdps_unofficial_extras_releases
    REF 5191229f6f4422a911da3621d56b79462bab7091
    SHA512 4e3dc94c8a019eb27e46cbfa8a46028bb882747a8332b243d9cac04bd129843af87dde7eb392c21e8420cf3293ca06f260bd10f7a9c1e7bd74ad81a502e155b3
    HEAD_REF master
)

vcpkg_check_features(OUT_FEATURE_OPTIONS FEATURE_OPTIONS
    FEATURES
    magic-enum				ARCPDS_UNOFFICIAL_EXTRAS_MAGIC_ENUM
    cpp11					ARCPDS_UNOFFICIAL_EXTRAS_CPP_11
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
    OPTIONS
        ${FEATURE_OPTIONS}
)

vcpkg_cmake_install()
vcpkg_cmake_config_fixup(PACKAGE_NAME ArcdpsUnofficialExtras)

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include")
file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/share")

file(INSTALL "${SOURCE_PATH}/LICENSE" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}" RENAME copyright)
