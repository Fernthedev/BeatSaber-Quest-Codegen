#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IgnoranceCommandType)
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Write type traits
MARK_VAL_T(::IgnoranceCore::IgnoranceCommandType);
// Type: IgnoranceCore::IgnoranceCommandType
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15250))
// CS Name: ::IgnoranceCore::IgnoranceCommandType
struct CORDL_TYPE IgnoranceCommandType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __IgnoranceCommandType_Unwrapped
enum struct __IgnoranceCommandType_Unwrapped : int32_t {
__E_ClientWantsToStop = static_cast<int32_t>(0x0),
__E_ClientStatusRequest = static_cast<int32_t>(0x1),
__E_ServerKickPeer = static_cast<int32_t>(0x2),
__E_ServerStatusRequest = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ClientWantsToStop value: static_cast<int32_t>(0x0)
static ::IgnoranceCore::IgnoranceCommandType const ClientWantsToStop;

/// @brief Field ClientStatusRequest value: static_cast<int32_t>(0x1)
static ::IgnoranceCore::IgnoranceCommandType const ClientStatusRequest;

/// @brief Field ServerKickPeer value: static_cast<int32_t>(0x2)
static ::IgnoranceCore::IgnoranceCommandType const ServerKickPeer;

/// @brief Field ServerStatusRequest value: static_cast<int32_t>(0x3)
static ::IgnoranceCore::IgnoranceCommandType const ServerStatusRequest;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __IgnoranceCommandType_Unwrapped () const noexcept {
return std::bit_cast<__IgnoranceCommandType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IgnoranceCommandType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IgnoranceCommandType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IgnoranceCommandType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::IgnoranceCore::IgnoranceCommandType, 0x4>, "Size mismatch!");

} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceCommandType, "IgnoranceCore", "IgnoranceCommandType");
