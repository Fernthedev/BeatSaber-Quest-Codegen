#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyVersionCompatibility)
// Forward declare root types
namespace System::Configuration::Assemblies {
struct AssemblyVersionCompatibility;
}
// Write type traits
MARK_VAL_T(::System::Configuration::Assemblies::AssemblyVersionCompatibility);
// Type: System.Configuration.Assemblies::AssemblyVersionCompatibility
namespace System::Configuration::Assemblies {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3751))
// CS Name: ::System.Configuration.Assemblies::AssemblyVersionCompatibility
struct CORDL_TYPE AssemblyVersionCompatibility : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AssemblyVersionCompatibility_Unwrapped
enum struct __AssemblyVersionCompatibility_Unwrapped : int32_t {
__E_SameMachine = static_cast<int32_t>(0x1),
__E_SameProcess = static_cast<int32_t>(0x2),
__E_SameDomain = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SameMachine value: static_cast<int32_t>(0x1)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameMachine;

/// @brief Field SameProcess value: static_cast<int32_t>(0x2)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameProcess;

/// @brief Field SameDomain value: static_cast<int32_t>(0x3)
static ::System::Configuration::Assemblies::AssemblyVersionCompatibility const SameDomain;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AssemblyVersionCompatibility_Unwrapped () const noexcept {
return std::bit_cast<__AssemblyVersionCompatibility_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AssemblyVersionCompatibility(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AssemblyVersionCompatibility(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AssemblyVersionCompatibility()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::Assemblies::AssemblyVersionCompatibility, 0x4>, "Size mismatch!");

} // namespace end def System::Configuration::Assemblies
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::Assemblies::AssemblyVersionCompatibility, "System.Configuration.Assemblies", "AssemblyVersionCompatibility");
