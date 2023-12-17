#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagUnitType)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TagUnitType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TagUnitType);
// Type: UnityEngine.TextCore.Text::TagUnitType
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13717))
// CS Name: ::UnityEngine.TextCore.Text::TagUnitType
struct CORDL_TYPE TagUnitType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TagUnitType_Unwrapped
enum struct __TagUnitType_Unwrapped : int32_t {
__E_Pixels = static_cast<int32_t>(0x0),
__E_FontUnits = static_cast<int32_t>(0x1),
__E_Percentage = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Pixels value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::Text::TagUnitType const Pixels;

/// @brief Field FontUnits value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::Text::TagUnitType const FontUnits;

/// @brief Field Percentage value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextCore::Text::TagUnitType const Percentage;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TagUnitType_Unwrapped () const noexcept {
return std::bit_cast<__TagUnitType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TagUnitType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TagUnitType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TagUnitType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TagUnitType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TagUnitType, "UnityEngine.TextCore.Text", "TagUnitType");
