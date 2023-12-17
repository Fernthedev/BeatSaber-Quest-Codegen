#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackStatus)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidAssetPackStatus);
// Type: UnityEngine.Android::AndroidAssetPackStatus
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14920))
// CS Name: ::UnityEngine.Android::AndroidAssetPackStatus
struct CORDL_TYPE AndroidAssetPackStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AndroidAssetPackStatus_Unwrapped
enum struct __AndroidAssetPackStatus_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Pending = static_cast<int32_t>(0x1),
__E_Downloading = static_cast<int32_t>(0x2),
__E_Transferring = static_cast<int32_t>(0x3),
__E_Completed = static_cast<int32_t>(0x4),
__E_Failed = static_cast<int32_t>(0x5),
__E_Canceled = static_cast<int32_t>(0x6),
__E_WaitingForWifi = static_cast<int32_t>(0x7),
__E_NotInstalled = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::UnityEngine::Android::AndroidAssetPackStatus const Unknown;

/// @brief Field Pending value: static_cast<int32_t>(0x1)
static ::UnityEngine::Android::AndroidAssetPackStatus const Pending;

/// @brief Field Downloading value: static_cast<int32_t>(0x2)
static ::UnityEngine::Android::AndroidAssetPackStatus const Downloading;

/// @brief Field Transferring value: static_cast<int32_t>(0x3)
static ::UnityEngine::Android::AndroidAssetPackStatus const Transferring;

/// @brief Field Completed value: static_cast<int32_t>(0x4)
static ::UnityEngine::Android::AndroidAssetPackStatus const Completed;

/// @brief Field Failed value: static_cast<int32_t>(0x5)
static ::UnityEngine::Android::AndroidAssetPackStatus const Failed;

/// @brief Field Canceled value: static_cast<int32_t>(0x6)
static ::UnityEngine::Android::AndroidAssetPackStatus const Canceled;

/// @brief Field WaitingForWifi value: static_cast<int32_t>(0x7)
static ::UnityEngine::Android::AndroidAssetPackStatus const WaitingForWifi;

/// @brief Field NotInstalled value: static_cast<int32_t>(0x8)
static ::UnityEngine::Android::AndroidAssetPackStatus const NotInstalled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidAssetPackStatus_Unwrapped () const noexcept {
return std::bit_cast<__AndroidAssetPackStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidAssetPackStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidAssetPackStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidAssetPackStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackStatus, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackStatus, "UnityEngine.Android", "AndroidAssetPackStatus");
