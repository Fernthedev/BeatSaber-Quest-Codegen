#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UICharInfo)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct UICharInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UICharInfo);
// Type: UnityEngine::UICharInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15905))
// CS Name: ::UnityEngine::UICharInfo
struct CORDL_TYPE UICharInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field cursorPos offset 0x0
 __declspec(property(get=__get_cursorPos, put=__set_cursorPos)) ::UnityEngine::Vector2  cursorPos;

/// @brief Field charWidth offset 0x8
 __declspec(property(get=__get_charWidth, put=__set_charWidth)) float_t  charWidth;

constexpr void __set_cursorPos(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_cursorPos() ;

constexpr ::UnityEngine::Vector2 const& __get_cursorPos() const;

constexpr void __set_charWidth(float_t  value) ;

constexpr float_t& __get_charWidth() ;

constexpr float_t const& __get_charWidth() const;

// Ctor Parameters [CppParam { name: "cursorPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "charWidth", ty: "float_t", modifiers: "", def_value: None }]
constexpr UICharInfo(::UnityEngine::Vector2  cursorPos, float_t  charWidth) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UICharInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UICharInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UICharInfo, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UICharInfo, "UnityEngine", "UICharInfo");
