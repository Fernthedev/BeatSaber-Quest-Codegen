#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifa_ifu)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifa_ifu;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::ifa_ifu);
// Type: System.Net.NetworkInformation::ifa_ifu
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9270))
// CS Name: ::System.Net.NetworkInformation::ifa_ifu
struct CORDL_TYPE ifa_ifu : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field ifu_broadaddr offset 0x0
 __declspec(property(get=__get_ifu_broadaddr, put=__set_ifu_broadaddr)) ::cordl_internals::intptr_t  ifu_broadaddr;

/// @brief Field ifu_dstaddr offset 0x0
 __declspec(property(get=__get_ifu_dstaddr, put=__set_ifu_dstaddr)) ::cordl_internals::intptr_t  ifu_dstaddr;

constexpr void __set_ifu_broadaddr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifu_broadaddr() ;

constexpr ::cordl_internals::intptr_t const& __get_ifu_broadaddr() const;

constexpr void __set_ifu_dstaddr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifu_dstaddr() ;

constexpr ::cordl_internals::intptr_t const& __get_ifu_dstaddr() const;

// Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifu_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifa_ifu(::cordl_internals::intptr_t  ifu_broadaddr, ::cordl_internals::intptr_t  ifu_dstaddr) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ifa_ifu(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ifa_ifu()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::ifa_ifu, 0x8>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifa_ifu, "System.Net.NetworkInformation", "ifa_ifu");
