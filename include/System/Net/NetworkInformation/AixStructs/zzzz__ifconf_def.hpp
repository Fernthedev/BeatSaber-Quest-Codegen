#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifconf)
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifconf);
// Type: System.Net.NetworkInformation.AixStructs::ifconf
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9300))
// CS Name: ::System.Net.NetworkInformation.AixStructs::ifconf
struct CORDL_TYPE ifconf : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ifc_len offset 0x0
 __declspec(property(get=__get_ifc_len, put=__set_ifc_len)) int32_t  ifc_len;

/// @brief Field ifc_buf offset 0x8
 __declspec(property(get=__get_ifc_buf, put=__set_ifc_buf)) ::cordl_internals::intptr_t  ifc_buf;

constexpr void __set_ifc_len(int32_t  value) ;

constexpr int32_t& __get_ifc_len() ;

constexpr int32_t const& __get_ifc_len() const;

constexpr void __set_ifc_buf(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_ifc_buf() ;

constexpr ::cordl_internals::intptr_t const& __get_ifc_buf() const;

// Ctor Parameters [CppParam { name: "ifc_len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ifc_buf", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifconf(int32_t  ifc_len, ::cordl_internals::intptr_t  ifc_buf) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ifconf(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ifconf()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifconf, 0x10>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifconf, "System.Net.NetworkInformation.AixStructs", "ifconf");
