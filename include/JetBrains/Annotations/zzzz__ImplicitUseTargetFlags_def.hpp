#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitUseTargetFlags)
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseTargetFlags;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::ImplicitUseTargetFlags);
// Type: JetBrains.Annotations::ImplicitUseTargetFlags
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15751))
// CS Name: ::JetBrains.Annotations::ImplicitUseTargetFlags
struct CORDL_TYPE ImplicitUseTargetFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImplicitUseTargetFlags_Unwrapped
enum struct __ImplicitUseTargetFlags_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x1),
__E_Itself = static_cast<int32_t>(0x1),
__E_Members = static_cast<int32_t>(0x2),
__E_WithMembers = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Default value: static_cast<int32_t>(0x1)
static ::JetBrains::Annotations::ImplicitUseTargetFlags const Default;

/// @brief Field Itself value: static_cast<int32_t>(0x1)
static ::JetBrains::Annotations::ImplicitUseTargetFlags const Itself;

/// @brief Field Members value: static_cast<int32_t>(0x2)
static ::JetBrains::Annotations::ImplicitUseTargetFlags const Members;

/// @brief Field WithMembers value: static_cast<int32_t>(0x3)
static ::JetBrains::Annotations::ImplicitUseTargetFlags const WithMembers;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ImplicitUseTargetFlags_Unwrapped () const noexcept {
return std::bit_cast<__ImplicitUseTargetFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImplicitUseTargetFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ImplicitUseTargetFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ImplicitUseTargetFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseTargetFlags, 0x4>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseTargetFlags, "JetBrains.Annotations", "ImplicitUseTargetFlags");
