#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(in6_addr)
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct in6_addr;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::MacOsStructs::in6_addr);
// Type: System.Net.NetworkInformation.MacOsStructs::in6_addr
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9297))
// CS Name: ::System.Net.NetworkInformation.MacOsStructs::in6_addr
struct CORDL_TYPE in6_addr : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field u6_addr8 offset 0x0
 __declspec(property(get=__get_u6_addr8, put=__set_u6_addr8)) ::ArrayW<uint8_t,::Array<uint8_t>*>  u6_addr8;

constexpr void __set_u6_addr8(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_u6_addr8() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_u6_addr8() const;

// Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }]
constexpr in6_addr(::ArrayW<uint8_t,::Array<uint8_t>*>  u6_addr8) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit in6_addr(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 in6_addr()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsStructs::in6_addr, 0x8>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::in6_addr, "System.Net.NetworkInformation.MacOsStructs", "in6_addr");
