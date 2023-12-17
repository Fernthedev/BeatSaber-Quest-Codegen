#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidAssetPackError)
// Forward declare root types
namespace UnityEngine::Android {
struct AndroidAssetPackError;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Android::AndroidAssetPackError);
// Type: UnityEngine.Android::AndroidAssetPackError
namespace UnityEngine::Android {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14921))
// CS Name: ::UnityEngine.Android::AndroidAssetPackError
struct CORDL_TYPE AndroidAssetPackError : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AndroidAssetPackError_Unwrapped
enum struct __AndroidAssetPackError_Unwrapped : int32_t {
__E_NoError = static_cast<int32_t>(0x0),
__E_AppUnavailable = static_cast<int32_t>(0xffffffff),
__E_PackUnavailable = static_cast<int32_t>(0xfffffffe),
__E_InvalidRequest = static_cast<int32_t>(0xfffffffd),
__E_DownloadNotFound = static_cast<int32_t>(0xfffffffc),
__E_ApiNotAvailable = static_cast<int32_t>(0xfffffffb),
__E_NetworkError = static_cast<int32_t>(0xfffffffa),
__E_AccessDenied = static_cast<int32_t>(0xfffffff9),
__E_InsufficientStorage = static_cast<int32_t>(0xfffffff6),
__E_PlayStoreNotFound = static_cast<int32_t>(0xfffffff5),
__E_NetworkUnrestricted = static_cast<int32_t>(0xfffffff4),
__E_AppNotOwned = static_cast<int32_t>(0xfffffff3),
__E_InternalError = static_cast<int32_t>(0xffffff9c),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoError value: static_cast<int32_t>(0x0)
static ::UnityEngine::Android::AndroidAssetPackError const NoError;

/// @brief Field AppUnavailable value: static_cast<int32_t>(0xffffffff)
static ::UnityEngine::Android::AndroidAssetPackError const AppUnavailable;

/// @brief Field PackUnavailable value: static_cast<int32_t>(0xfffffffe)
static ::UnityEngine::Android::AndroidAssetPackError const PackUnavailable;

/// @brief Field InvalidRequest value: static_cast<int32_t>(0xfffffffd)
static ::UnityEngine::Android::AndroidAssetPackError const InvalidRequest;

/// @brief Field DownloadNotFound value: static_cast<int32_t>(0xfffffffc)
static ::UnityEngine::Android::AndroidAssetPackError const DownloadNotFound;

/// @brief Field ApiNotAvailable value: static_cast<int32_t>(0xfffffffb)
static ::UnityEngine::Android::AndroidAssetPackError const ApiNotAvailable;

/// @brief Field NetworkError value: static_cast<int32_t>(0xfffffffa)
static ::UnityEngine::Android::AndroidAssetPackError const NetworkError;

/// @brief Field AccessDenied value: static_cast<int32_t>(0xfffffff9)
static ::UnityEngine::Android::AndroidAssetPackError const AccessDenied;

/// @brief Field InsufficientStorage value: static_cast<int32_t>(0xfffffff6)
static ::UnityEngine::Android::AndroidAssetPackError const InsufficientStorage;

/// @brief Field PlayStoreNotFound value: static_cast<int32_t>(0xfffffff5)
static ::UnityEngine::Android::AndroidAssetPackError const PlayStoreNotFound;

/// @brief Field NetworkUnrestricted value: static_cast<int32_t>(0xfffffff4)
static ::UnityEngine::Android::AndroidAssetPackError const NetworkUnrestricted;

/// @brief Field AppNotOwned value: static_cast<int32_t>(0xfffffff3)
static ::UnityEngine::Android::AndroidAssetPackError const AppNotOwned;

/// @brief Field InternalError value: static_cast<int32_t>(0xffffff9c)
static ::UnityEngine::Android::AndroidAssetPackError const InternalError;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidAssetPackError_Unwrapped () const noexcept {
return std::bit_cast<__AndroidAssetPackError_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidAssetPackError(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidAssetPackError(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidAssetPackError()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Android::AndroidAssetPackError, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Android
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Android::AndroidAssetPackError, "UnityEngine.Android", "AndroidAssetPackError");
