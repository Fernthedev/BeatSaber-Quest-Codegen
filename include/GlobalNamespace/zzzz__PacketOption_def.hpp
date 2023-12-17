#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PacketOption)
// Forward declare root types
namespace GlobalNamespace {
struct PacketOption;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PacketOption);
// Type: ::PacketOption
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12915))
// CS Name: ::PacketOption
struct CORDL_TYPE PacketOption : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PacketOption_Unwrapped
enum struct __PacketOption_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Encrypted = static_cast<int32_t>(0x1),
__E_OnlyFirstDegreeConnections = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::PacketOption const None;

/// @brief Field Encrypted value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::PacketOption const Encrypted;

/// @brief Field OnlyFirstDegreeConnections value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::PacketOption const OnlyFirstDegreeConnections;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PacketOption_Unwrapped () const noexcept {
return std::bit_cast<__PacketOption_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PacketOption(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PacketOption(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PacketOption()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PacketOption, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PacketOption, "", "PacketOption");
