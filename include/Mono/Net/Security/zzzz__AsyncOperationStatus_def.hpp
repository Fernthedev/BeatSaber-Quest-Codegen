#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationStatus)
// Forward declare root types
namespace Mono::Net::Security {
struct AsyncOperationStatus;
}
// Write type traits
MARK_VAL_T(::Mono::Net::Security::AsyncOperationStatus);
// Type: Mono.Net.Security::AsyncOperationStatus
namespace Mono::Net::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8817))
// CS Name: ::Mono.Net.Security::AsyncOperationStatus
struct CORDL_TYPE AsyncOperationStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AsyncOperationStatus_Unwrapped
enum struct __AsyncOperationStatus_Unwrapped : int32_t {
__E_Initialize = static_cast<int32_t>(0x0),
__E_Continue = static_cast<int32_t>(0x1),
__E_ReadDone = static_cast<int32_t>(0x2),
__E_Complete = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Initialize value: static_cast<int32_t>(0x0)
static ::Mono::Net::Security::AsyncOperationStatus const Initialize;

/// @brief Field Continue value: static_cast<int32_t>(0x1)
static ::Mono::Net::Security::AsyncOperationStatus const Continue;

/// @brief Field ReadDone value: static_cast<int32_t>(0x2)
static ::Mono::Net::Security::AsyncOperationStatus const ReadDone;

/// @brief Field Complete value: static_cast<int32_t>(0x3)
static ::Mono::Net::Security::AsyncOperationStatus const Complete;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AsyncOperationStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsyncOperationStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsyncOperationStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AsyncOperationStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AsyncOperationStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncOperationStatus, 0x4>, "Size mismatch!");

} // namespace end def Mono::Net::Security
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncOperationStatus, "Mono.Net.Security", "AsyncOperationStatus");
