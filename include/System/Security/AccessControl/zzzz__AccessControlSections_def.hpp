#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccessControlSections)
// Forward declare root types
namespace System::Security::AccessControl {
struct AccessControlSections;
}
// Write type traits
MARK_VAL_T(::System::Security::AccessControl::AccessControlSections);
// Type: System.Security.AccessControl::AccessControlSections
namespace System::Security::AccessControl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3013))
// CS Name: ::System.Security.AccessControl::AccessControlSections
struct CORDL_TYPE AccessControlSections : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AccessControlSections_Unwrapped
enum struct __AccessControlSections_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Audit = static_cast<int32_t>(0x1),
__E_Access = static_cast<int32_t>(0x2),
__E_Owner = static_cast<int32_t>(0x4),
__E_Group = static_cast<int32_t>(0x8),
__E_All = static_cast<int32_t>(0xf),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Security::AccessControl::AccessControlSections const None;

/// @brief Field Audit value: static_cast<int32_t>(0x1)
static ::System::Security::AccessControl::AccessControlSections const Audit;

/// @brief Field Access value: static_cast<int32_t>(0x2)
static ::System::Security::AccessControl::AccessControlSections const Access;

/// @brief Field Owner value: static_cast<int32_t>(0x4)
static ::System::Security::AccessControl::AccessControlSections const Owner;

/// @brief Field Group value: static_cast<int32_t>(0x8)
static ::System::Security::AccessControl::AccessControlSections const Group;

/// @brief Field All value: static_cast<int32_t>(0xf)
static ::System::Security::AccessControl::AccessControlSections const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AccessControlSections_Unwrapped () const noexcept {
return std::bit_cast<__AccessControlSections_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AccessControlSections(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AccessControlSections(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AccessControlSections()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AccessControlSections, 0x4>, "Size mismatch!");

} // namespace end def System::Security::AccessControl
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AccessControlSections, "System.Security.AccessControl", "AccessControlSections");
