#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRSettingsError)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRSettingsError;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRSettingsError);
// Type: OVR.OpenVR::EVRSettingsError
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8636))
// CS Name: ::OVR.OpenVR::EVRSettingsError
struct CORDL_TYPE EVRSettingsError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EVRSettingsError_Unwrapped
enum struct __EVRSettingsError_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IPCFailed = static_cast<int32_t>(0x1),
__E_WriteFailed = static_cast<int32_t>(0x2),
__E_ReadFailed = static_cast<int32_t>(0x3),
__E_JsonParseFailed = static_cast<int32_t>(0x4),
__E_UnsetSettingHasNoDefault = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::OVR::OpenVR::EVRSettingsError const None;

/// @brief Field IPCFailed value: static_cast<int32_t>(0x1)
static ::OVR::OpenVR::EVRSettingsError const IPCFailed;

/// @brief Field WriteFailed value: static_cast<int32_t>(0x2)
static ::OVR::OpenVR::EVRSettingsError const WriteFailed;

/// @brief Field ReadFailed value: static_cast<int32_t>(0x3)
static ::OVR::OpenVR::EVRSettingsError const ReadFailed;

/// @brief Field JsonParseFailed value: static_cast<int32_t>(0x4)
static ::OVR::OpenVR::EVRSettingsError const JsonParseFailed;

/// @brief Field UnsetSettingHasNoDefault value: static_cast<int32_t>(0x5)
static ::OVR::OpenVR::EVRSettingsError const UnsetSettingHasNoDefault;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRSettingsError_Unwrapped () const noexcept {
return std::bit_cast<__EVRSettingsError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRSettingsError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EVRSettingsError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EVRSettingsError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRSettingsError, 0x4>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRSettingsError, "OVR.OpenVR", "EVRSettingsError");
