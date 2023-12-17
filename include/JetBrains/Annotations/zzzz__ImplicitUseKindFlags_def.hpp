#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitUseKindFlags)
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::ImplicitUseKindFlags);
// Type: JetBrains.Annotations::ImplicitUseKindFlags
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10028))
// CS Name: ::JetBrains.Annotations::ImplicitUseKindFlags
struct CORDL_TYPE ImplicitUseKindFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ImplicitUseKindFlags_Unwrapped
enum struct __ImplicitUseKindFlags_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x7),
__E_Access = static_cast<int32_t>(0x1),
__E_Assign = static_cast<int32_t>(0x2),
__E_InstantiatedWithFixedConstructorSignature = static_cast<int32_t>(0x4),
__E_InstantiatedNoFixedConstructorSignature = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Default value: static_cast<int32_t>(0x7)
static ::JetBrains::Annotations::ImplicitUseKindFlags const Default;

/// @brief Field Access value: static_cast<int32_t>(0x1)
static ::JetBrains::Annotations::ImplicitUseKindFlags const Access;

/// @brief Field Assign value: static_cast<int32_t>(0x2)
static ::JetBrains::Annotations::ImplicitUseKindFlags const Assign;

/// @brief Field InstantiatedWithFixedConstructorSignature value: static_cast<int32_t>(0x4)
static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedWithFixedConstructorSignature;

/// @brief Field InstantiatedNoFixedConstructorSignature value: static_cast<int32_t>(0x8)
static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedNoFixedConstructorSignature;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ImplicitUseKindFlags_Unwrapped () const noexcept {
return std::bit_cast<__ImplicitUseKindFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImplicitUseKindFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ImplicitUseKindFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ImplicitUseKindFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseKindFlags, 0x4>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseKindFlags, "JetBrains.Annotations", "ImplicitUseKindFlags");
