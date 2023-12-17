#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TextureEntry)
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::TextureEntry);
// Type: UnityEngine.UIElements.UIR::TextureEntry
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7398))
// CS Name: ::UnityEngine.UIElements.UIR::TextureEntry
struct CORDL_TYPE TextureEntry : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field source offset 0x0
 __declspec(property(get=__get_source, put=__set_source)) ::UnityEngine::Texture*  source;

/// @brief Field actual offset 0x8
 __declspec(property(get=__get_actual, put=__set_actual)) ::UnityEngine::UIElements::TextureId  actual;

/// @brief Field replaced offset 0xc
 __declspec(property(get=__get_replaced, put=__set_replaced)) bool  replaced;

constexpr void __set_source(::UnityEngine::Texture*  value) ;

constexpr ::UnityEngine::Texture* __get_source() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> __get_source() const;

constexpr void __set_actual(::UnityEngine::UIElements::TextureId  value) ;

constexpr ::UnityEngine::UIElements::TextureId& __get_actual() ;

constexpr ::UnityEngine::UIElements::TextureId const& __get_actual() const;

constexpr void __set_replaced(bool  value) ;

constexpr bool& __get_replaced() ;

constexpr bool const& __get_replaced() const;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Texture*", modifiers: "", def_value: None }, CppParam { name: "actual", ty: "::UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "replaced", ty: "bool", modifiers: "", def_value: None }]
constexpr TextureEntry(::UnityEngine::Texture*  source, ::UnityEngine::UIElements::TextureId  actual, bool  replaced) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TextureEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TextureEntry()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::TextureEntry, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextureEntry, "UnityEngine.UIElements.UIR", "TextureEntry");
