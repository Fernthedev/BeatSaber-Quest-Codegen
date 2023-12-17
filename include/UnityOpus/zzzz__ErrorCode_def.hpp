#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace UnityOpus {
struct ErrorCode;
}
// Write type traits
MARK_VAL_T(::UnityOpus::ErrorCode);
// Type: UnityOpus::ErrorCode
namespace UnityOpus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16218))
// CS Name: ::UnityOpus::ErrorCode
struct CORDL_TYPE ErrorCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ErrorCode_Unwrapped
enum struct __ErrorCode_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_BadArg = static_cast<int32_t>(0xffffffff),
__E_BufferTooSmall = static_cast<int32_t>(0xfffffffe),
__E_InternalError = static_cast<int32_t>(0xfffffffd),
__E_InvalidPacket = static_cast<int32_t>(0xfffffffc),
__E_Unimplemented = static_cast<int32_t>(0xfffffffb),
__E_InvalidState = static_cast<int32_t>(0xfffffffa),
__E_AllocFail = static_cast<int32_t>(0xfffffff9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::UnityOpus::ErrorCode const OK;

/// @brief Field BadArg value: static_cast<int32_t>(0xffffffff)
static ::UnityOpus::ErrorCode const BadArg;

/// @brief Field BufferTooSmall value: static_cast<int32_t>(0xfffffffe)
static ::UnityOpus::ErrorCode const BufferTooSmall;

/// @brief Field InternalError value: static_cast<int32_t>(0xfffffffd)
static ::UnityOpus::ErrorCode const InternalError;

/// @brief Field InvalidPacket value: static_cast<int32_t>(0xfffffffc)
static ::UnityOpus::ErrorCode const InvalidPacket;

/// @brief Field Unimplemented value: static_cast<int32_t>(0xfffffffb)
static ::UnityOpus::ErrorCode const Unimplemented;

/// @brief Field InvalidState value: static_cast<int32_t>(0xfffffffa)
static ::UnityOpus::ErrorCode const InvalidState;

/// @brief Field AllocFail value: static_cast<int32_t>(0xfffffff9)
static ::UnityOpus::ErrorCode const AllocFail;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorCode_Unwrapped () const noexcept {
return std::bit_cast<__ErrorCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ErrorCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ErrorCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ErrorCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::ErrorCode, 0x4>, "Size mismatch!");

} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::ErrorCode, "UnityOpus", "ErrorCode");
