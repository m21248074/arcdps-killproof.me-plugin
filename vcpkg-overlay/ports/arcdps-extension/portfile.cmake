vcpkg_check_linkage(ONLY_STATIC_LIBRARY)

# Overlay port: use the m21248074 fork (adds UE_TRANSLATIONS_TCHINESE) instead of Zinn-o-Matics/arcdps-extension.
vcpkg_from_github(
    OUT_SOURCE_PATH SOURCE_PATH
    REPO m21248074/arcdps-extension
    REF 08b7411ab205a24ca61c7d2d1e8c3dce89d68bab
    SHA512 a97b3ae6b031b2f85b6e830892eab18ed926d75942f34ad0af8c5dd5a32843c952f6dbf0f9d518b2a5ee9ebc58d5def87e217df0239692aaac4e869ae236baba
    HEAD_REF main
)

vcpkg_check_features(OUT_FEATURE_OPTIONS FEATURE_OPTIONS
    FEATURES
	imgui				ARCDPS_EXTENSION_IMGUI
	unofficial-extras	ARCDPS_EXTENSION_UNOFFICIAL_EXTRAS
	curl                ARCDPS_EXTENSION_CURL
)

vcpkg_cmake_configure(
    SOURCE_PATH "${SOURCE_PATH}"
	OPTIONS
        ${FEATURE_OPTIONS}
)

vcpkg_cmake_install()
vcpkg_cmake_config_fixup(PACKAGE_NAME ArcdpsExtension)

file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/include")
file(REMOVE_RECURSE "${CURRENT_PACKAGES_DIR}/debug/share")

file(INSTALL "${SOURCE_PATH}/LICENSE" DESTINATION "${CURRENT_PACKAGES_DIR}/share/${PORT}" RENAME copyright)
