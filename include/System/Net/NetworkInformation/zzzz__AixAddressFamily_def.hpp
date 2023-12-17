#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AixAddressFamily)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixAddressFamily);
// Type: System.Net.NetworkInformation::AixAddressFamily
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9263))
// CS Name: ::System.Net.NetworkInformation::AixAddressFamily
struct CORDL_TYPE AixAddressFamily : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AixAddressFamily_Unwrapped
enum struct __AixAddressFamily_Unwrapped : int32_t {
__E_AF_INET = static_cast<int32_t>(0x2),
__E_AF_INET6 = static_cast<int32_t>(0x18),
__E_AF_LINK = static_cast<int32_t>(0x12),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AF_INET value: static_cast<int32_t>(0x2)
static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET;

/// @brief Field AF_INET6 value: static_cast<int32_t>(0x18)
static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET6;

/// @brief Field AF_LINK value: static_cast<int32_t>(0x12)
static ::System::Net::NetworkInformation::AixAddressFamily const AF_LINK;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AixAddressFamily_Unwrapped () const noexcept {
return std::bit_cast<__AixAddressFamily_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AixAddressFamily(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AixAddressFamily(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AixAddressFamily()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixAddressFamily, 0x4>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixAddressFamily, "System.Net.NetworkInformation", "AixAddressFamily");
