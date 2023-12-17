#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityAction)
// Forward declare root types
namespace System::Security::Permissions {
struct SecurityAction;
}
// Write type traits
MARK_VAL_T(::System::Security::Permissions::SecurityAction);
// Type: System.Security.Permissions::SecurityAction
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2905))
// CS Name: ::System.Security.Permissions::SecurityAction
struct CORDL_TYPE SecurityAction : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SecurityAction_Unwrapped
enum struct __SecurityAction_Unwrapped : int32_t {
__E_Demand = static_cast<int32_t>(0x2),
__E_Assert = static_cast<int32_t>(0x3),
__E_Deny = static_cast<int32_t>(0x4),
__E_PermitOnly = static_cast<int32_t>(0x5),
__E_LinkDemand = static_cast<int32_t>(0x6),
__E_InheritanceDemand = static_cast<int32_t>(0x7),
__E_RequestMinimum = static_cast<int32_t>(0x8),
__E_RequestOptional = static_cast<int32_t>(0x9),
__E_RequestRefuse = static_cast<int32_t>(0xa),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Demand value: static_cast<int32_t>(0x2)
static ::System::Security::Permissions::SecurityAction const Demand;

/// @brief Field Assert value: static_cast<int32_t>(0x3)
static ::System::Security::Permissions::SecurityAction const _cordl_Assert;

/// @brief Field Deny value: static_cast<int32_t>(0x4)
static ::System::Security::Permissions::SecurityAction const Deny;

/// @brief Field PermitOnly value: static_cast<int32_t>(0x5)
static ::System::Security::Permissions::SecurityAction const PermitOnly;

/// @brief Field LinkDemand value: static_cast<int32_t>(0x6)
static ::System::Security::Permissions::SecurityAction const LinkDemand;

/// @brief Field InheritanceDemand value: static_cast<int32_t>(0x7)
static ::System::Security::Permissions::SecurityAction const InheritanceDemand;

/// @brief Field RequestMinimum value: static_cast<int32_t>(0x8)
static ::System::Security::Permissions::SecurityAction const RequestMinimum;

/// @brief Field RequestOptional value: static_cast<int32_t>(0x9)
static ::System::Security::Permissions::SecurityAction const RequestOptional;

/// @brief Field RequestRefuse value: static_cast<int32_t>(0xa)
static ::System::Security::Permissions::SecurityAction const RequestRefuse;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SecurityAction_Unwrapped () const noexcept {
return std::bit_cast<__SecurityAction_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SecurityAction(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SecurityAction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SecurityAction()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::SecurityAction, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::SecurityAction, "System.Security.Permissions", "SecurityAction");
