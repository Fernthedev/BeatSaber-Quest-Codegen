#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontDefinition)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct FontDefinition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::FontDefinition);
// Type: UnityEngine.UIElements::FontDefinition
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7284))
// CS Name: ::UnityEngine.UIElements::FontDefinition
struct CORDL_TYPE FontDefinition : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Font offset 0x0
 __declspec(property(get=__get_m_Font, put=__set_m_Font)) ::UnityEngine::Font*  m_Font;

/// @brief Field m_FontAsset offset 0x8
 __declspec(property(get=__get_m_FontAsset, put=__set_m_FontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  m_FontAsset;

 __declspec(property(get=get_font)) ::UnityEngine::Font*  font;

 __declspec(property(get=get_fontAsset)) ::UnityEngine::TextCore::Text::FontAsset*  fontAsset;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::FontDefinition>*() ;

constexpr void __set_m_Font(::UnityEngine::Font*  value) ;

constexpr ::UnityEngine::Font* __get_m_Font() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> __get_m_Font() const;

constexpr void __set_m_FontAsset(::UnityEngine::TextCore::Text::FontAsset*  value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset* __get_m_FontAsset() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> __get_m_FontAsset() const;

/// @brief Method get_font addr 0x2e6cdbc size 0x8 virtual false final false
inline ::UnityEngine::Font* get_font() ;

/// @brief Method get_fontAsset addr 0x2e6cdc4 size 0x8 virtual false final false
inline ::UnityEngine::TextCore::Text::FontAsset* get_fontAsset() ;

/// @brief Method FromFont addr 0x2e6cdcc size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::FontDefinition FromFont(::UnityEngine::Font*  f) ;

/// @brief Method FromSDFFont addr 0x2e6cdd4 size 0xc virtual false final false
static inline ::UnityEngine::UIElements::FontDefinition FromSDFFont(::UnityEngine::TextCore::Text::FontAsset*  f) ;

/// @brief Method FromObject addr 0x2e6cde0 size 0x118 virtual false final false
static inline ::UnityEngine::UIElements::FontDefinition FromObject(::System::Object*  obj) ;

/// @brief Method IsEmpty addr 0x2e6cef8 size 0x98 virtual false final false
inline bool IsEmpty() ;

/// @brief Method ToString addr 0x2e6cf90 size 0x90 virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2e6d020 size 0x48 virtual true final true
inline bool Equals(::UnityEngine::UIElements::FontDefinition  other) ;

/// @brief Method Equals addr 0x2e6d068 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6d0e0 size 0xe0 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2e6d1c0 size 0x2c virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::FontDefinition  left, ::UnityEngine::UIElements::FontDefinition  right) ;

/// @brief Method op_Inequality addr 0x2e6d1ec size 0x30 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::FontDefinition  left, ::UnityEngine::UIElements::FontDefinition  right) ;

// Ctor Parameters [CppParam { name: "m_Font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "m_FontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset*", modifiers: "", def_value: None }]
constexpr FontDefinition(::UnityEngine::Font*  m_Font, ::UnityEngine::TextCore::Text::FontAsset*  m_FontAsset) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FontDefinition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FontDefinition()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FontDefinition, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FontDefinition, "UnityEngine.UIElements", "FontDefinition");
