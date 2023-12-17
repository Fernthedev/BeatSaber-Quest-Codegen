#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingInheritanceMethods)
// Forward declare root types
namespace Zenject {
struct BindingInheritanceMethods;
}
// Write type traits
MARK_VAL_T(::Zenject::BindingInheritanceMethods);
// Type: Zenject::BindingInheritanceMethods
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10945))
// CS Name: ::Zenject::BindingInheritanceMethods
struct CORDL_TYPE BindingInheritanceMethods : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BindingInheritanceMethods_Unwrapped
enum struct __BindingInheritanceMethods_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CopyIntoAll = static_cast<int32_t>(0x1),
__E_CopyDirectOnly = static_cast<int32_t>(0x2),
__E_MoveIntoAll = static_cast<int32_t>(0x3),
__E_MoveDirectOnly = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::Zenject::BindingInheritanceMethods const None;

/// @brief Field CopyIntoAll value: static_cast<int32_t>(0x1)
static ::Zenject::BindingInheritanceMethods const CopyIntoAll;

/// @brief Field CopyDirectOnly value: static_cast<int32_t>(0x2)
static ::Zenject::BindingInheritanceMethods const CopyDirectOnly;

/// @brief Field MoveIntoAll value: static_cast<int32_t>(0x3)
static ::Zenject::BindingInheritanceMethods const MoveIntoAll;

/// @brief Field MoveDirectOnly value: static_cast<int32_t>(0x4)
static ::Zenject::BindingInheritanceMethods const MoveDirectOnly;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __BindingInheritanceMethods_Unwrapped () const noexcept {
return std::bit_cast<__BindingInheritanceMethods_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BindingInheritanceMethods(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BindingInheritanceMethods(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BindingInheritanceMethods()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::BindingInheritanceMethods, 0x4>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingInheritanceMethods, "Zenject", "BindingInheritanceMethods");
