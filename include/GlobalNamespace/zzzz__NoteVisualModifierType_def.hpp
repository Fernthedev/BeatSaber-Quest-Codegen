#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteVisualModifierType)
// Forward declare root types
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NoteVisualModifierType);
// Type: ::NoteVisualModifierType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4749))
// CS Name: ::NoteVisualModifierType
struct CORDL_TYPE NoteVisualModifierType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NoteVisualModifierType_Unwrapped
enum struct __NoteVisualModifierType_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_DisappearingArrow = static_cast<int32_t>(0x1),
__E_Ghost = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::NoteVisualModifierType const Normal;

/// @brief Field DisappearingArrow value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::NoteVisualModifierType const DisappearingArrow;

/// @brief Field Ghost value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::NoteVisualModifierType const Ghost;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NoteVisualModifierType_Unwrapped () const noexcept {
return std::bit_cast<__NoteVisualModifierType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NoteVisualModifierType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NoteVisualModifierType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NoteVisualModifierType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteVisualModifierType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteVisualModifierType, "", "NoteVisualModifierType");
