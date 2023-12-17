#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncDisconnectReason)
// Forward declare root types
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::NetSyncDisconnectReason);
// Type: Oculus.Platform::NetSyncDisconnectReason
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13339))
// CS Name: ::Oculus.Platform::NetSyncDisconnectReason
struct CORDL_TYPE NetSyncDisconnectReason : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetSyncDisconnectReason_Unwrapped
enum struct __NetSyncDisconnectReason_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_LocalTerminated = static_cast<int32_t>(0x1),
__E_ServerTerminated = static_cast<int32_t>(0x2),
__E_Failed = static_cast<int32_t>(0x3),
__E_Lost = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::NetSyncDisconnectReason const Unknown;

/// @brief Field LocalTerminated value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::NetSyncDisconnectReason const LocalTerminated;

/// @brief Field ServerTerminated value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::NetSyncDisconnectReason const ServerTerminated;

/// @brief Field Failed value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::NetSyncDisconnectReason const Failed;

/// @brief Field Lost value: static_cast<int32_t>(0x4)
static ::Oculus::Platform::NetSyncDisconnectReason const Lost;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSyncDisconnectReason_Unwrapped () const noexcept {
return std::bit_cast<__NetSyncDisconnectReason_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetSyncDisconnectReason(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NetSyncDisconnectReason(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NetSyncDisconnectReason()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSyncDisconnectReason, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncDisconnectReason, "Oculus.Platform", "NetSyncDisconnectReason");
