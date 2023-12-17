#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKApplicationOutput)
namespace LIV::SDK::Unity {
struct FEATURES;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKApplicationOutput);
// Type: LIV.SDK.Unity::SDKApplicationOutput
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15114))
// CS Name: ::LIV.SDK.Unity::SDKApplicationOutput
struct CORDL_TYPE SDKApplicationOutput : public ::bs_hook::ValueTypeWrapper<0x48> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field supportedFeatures offset 0x0
 __declspec(property(get=__get_supportedFeatures, put=__set_supportedFeatures)) ::LIV::SDK::Unity::FEATURES  supportedFeatures;

/// @brief Field engineName offset 0x8
 __declspec(property(get=__get_engineName, put=__set_engineName)) ::StringW  engineName;

/// @brief Field engineVersion offset 0x10
 __declspec(property(get=__get_engineVersion, put=__set_engineVersion)) ::StringW  engineVersion;

/// @brief Field applicationName offset 0x18
 __declspec(property(get=__get_applicationName, put=__set_applicationName)) ::StringW  applicationName;

/// @brief Field applicationVersion offset 0x20
 __declspec(property(get=__get_applicationVersion, put=__set_applicationVersion)) ::StringW  applicationVersion;

/// @brief Field xrDeviceName offset 0x28
 __declspec(property(get=__get_xrDeviceName, put=__set_xrDeviceName)) ::StringW  xrDeviceName;

/// @brief Field graphicsAPI offset 0x30
 __declspec(property(get=__get_graphicsAPI, put=__set_graphicsAPI)) ::StringW  graphicsAPI;

/// @brief Field sdkID offset 0x38
 __declspec(property(get=__get_sdkID, put=__set_sdkID)) ::StringW  sdkID;

/// @brief Field sdkVersion offset 0x40
 __declspec(property(get=__get_sdkVersion, put=__set_sdkVersion)) ::StringW  sdkVersion;

constexpr void __set_supportedFeatures(::LIV::SDK::Unity::FEATURES  value) ;

constexpr ::LIV::SDK::Unity::FEATURES& __get_supportedFeatures() ;

constexpr ::LIV::SDK::Unity::FEATURES const& __get_supportedFeatures() const;

constexpr void __set_engineName(::StringW  value) ;

constexpr ::StringW& __get_engineName() ;

constexpr ::StringW const& __get_engineName() const;

constexpr void __set_engineVersion(::StringW  value) ;

constexpr ::StringW& __get_engineVersion() ;

constexpr ::StringW const& __get_engineVersion() const;

constexpr void __set_applicationName(::StringW  value) ;

constexpr ::StringW& __get_applicationName() ;

constexpr ::StringW const& __get_applicationName() const;

constexpr void __set_applicationVersion(::StringW  value) ;

constexpr ::StringW& __get_applicationVersion() ;

constexpr ::StringW const& __get_applicationVersion() const;

constexpr void __set_xrDeviceName(::StringW  value) ;

constexpr ::StringW& __get_xrDeviceName() ;

constexpr ::StringW const& __get_xrDeviceName() const;

constexpr void __set_graphicsAPI(::StringW  value) ;

constexpr ::StringW& __get_graphicsAPI() ;

constexpr ::StringW const& __get_graphicsAPI() const;

constexpr void __set_sdkID(::StringW  value) ;

constexpr ::StringW& __get_sdkID() ;

constexpr ::StringW const& __get_sdkID() const;

constexpr void __set_sdkVersion(::StringW  value) ;

constexpr ::StringW& __get_sdkVersion() ;

constexpr ::StringW const& __get_sdkVersion() const;

/// @brief Method get_empty addr 0x220e4f8 size 0x80 virtual false final false
static inline ::LIV::SDK::Unity::SDKApplicationOutput get_empty() ;

/// @brief Method ToString addr 0x2214ff0 size 0x244 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "supportedFeatures", ty: "::LIV::SDK::Unity::FEATURES", modifiers: "", def_value: None }, CppParam { name: "engineName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "engineVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "applicationName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "xrDeviceName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "graphicsAPI", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sdkVersion", ty: "::StringW", modifiers: "", def_value: None }]
constexpr SDKApplicationOutput(::LIV::SDK::Unity::FEATURES  supportedFeatures, ::StringW  engineName, ::StringW  engineVersion, ::StringW  applicationName, ::StringW  applicationVersion, ::StringW  xrDeviceName, ::StringW  graphicsAPI, ::StringW  sdkID, ::StringW  sdkVersion) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKApplicationOutput(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x48>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKApplicationOutput()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKApplicationOutput, 0x48>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKApplicationOutput, "LIV.SDK.Unity", "SDKApplicationOutput");
