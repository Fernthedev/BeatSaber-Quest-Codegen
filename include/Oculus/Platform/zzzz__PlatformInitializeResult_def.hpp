#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInitializeResult)
// Forward declare root types
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PlatformInitializeResult);
// Type: Oculus.Platform::PlatformInitializeResult
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13373))
// CS Name: ::Oculus.Platform::PlatformInitializeResult
struct CORDL_TYPE PlatformInitializeResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlatformInitializeResult_Unwrapped
enum struct __PlatformInitializeResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_Uninitialized = static_cast<int32_t>(0xffffffff),
__E_PreLoaded = static_cast<int32_t>(0xfffffffe),
__E_FileInvalid = static_cast<int32_t>(0xfffffffd),
__E_SignatureInvalid = static_cast<int32_t>(0xfffffffc),
__E_UnableToVerify = static_cast<int32_t>(0xfffffffb),
__E_VersionMismatch = static_cast<int32_t>(0xfffffffa),
__E_Unknown = static_cast<int32_t>(0xfffffff9),
__E_InvalidCredentials = static_cast<int32_t>(0xfffffff8),
__E_NotEntitled = static_cast<int32_t>(0xfffffff7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Success value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::PlatformInitializeResult const Success;

/// @brief Field Uninitialized value: static_cast<int32_t>(0xffffffff)
static ::Oculus::Platform::PlatformInitializeResult const Uninitialized;

/// @brief Field PreLoaded value: static_cast<int32_t>(0xfffffffe)
static ::Oculus::Platform::PlatformInitializeResult const PreLoaded;

/// @brief Field FileInvalid value: static_cast<int32_t>(0xfffffffd)
static ::Oculus::Platform::PlatformInitializeResult const FileInvalid;

/// @brief Field SignatureInvalid value: static_cast<int32_t>(0xfffffffc)
static ::Oculus::Platform::PlatformInitializeResult const SignatureInvalid;

/// @brief Field UnableToVerify value: static_cast<int32_t>(0xfffffffb)
static ::Oculus::Platform::PlatformInitializeResult const UnableToVerify;

/// @brief Field VersionMismatch value: static_cast<int32_t>(0xfffffffa)
static ::Oculus::Platform::PlatformInitializeResult const VersionMismatch;

/// @brief Field Unknown value: static_cast<int32_t>(0xfffffff9)
static ::Oculus::Platform::PlatformInitializeResult const Unknown;

/// @brief Field InvalidCredentials value: static_cast<int32_t>(0xfffffff8)
static ::Oculus::Platform::PlatformInitializeResult const InvalidCredentials;

/// @brief Field NotEntitled value: static_cast<int32_t>(0xfffffff7)
static ::Oculus::Platform::PlatformInitializeResult const NotEntitled;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PlatformInitializeResult_Unwrapped () const noexcept {
return std::bit_cast<__PlatformInitializeResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlatformInitializeResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlatformInitializeResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlatformInitializeResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PlatformInitializeResult, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PlatformInitializeResult, "Oculus.Platform", "PlatformInitializeResult");
