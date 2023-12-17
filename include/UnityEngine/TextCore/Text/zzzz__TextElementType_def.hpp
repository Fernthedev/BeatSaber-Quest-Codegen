#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElementType)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextElementType);
// Type: UnityEngine.TextCore.Text::TextElementType
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13705))
// CS Name: ::UnityEngine.TextCore.Text::TextElementType
struct CORDL_TYPE TextElementType : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TextElementType_Unwrapped
enum struct __TextElementType_Unwrapped : uint8_t {
__E_Character = static_cast<uint8_t>(0x1u),
__E_Sprite = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Character value: static_cast<uint8_t>(0x1u)
static ::UnityEngine::TextCore::Text::TextElementType const Character;

/// @brief Field Sprite value: static_cast<uint8_t>(0x2u)
static ::UnityEngine::TextCore::Text::TextElementType const Sprite;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TextElementType_Unwrapped () const noexcept {
return std::bit_cast<__TextElementType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr TextElementType(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextElementType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextElementType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextElementType, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextElementType, "UnityEngine.TextCore.Text", "TextElementType");
