#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleColor)
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleColor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleColor);
// Type: UnityEngine.UIElements::StyleColor
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7290))
// CS Name: ::UnityEngine.UIElements::StyleColor
struct CORDL_TYPE StyleColor : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::Color  m_Value;

/// @brief Field m_Keyword offset 0x10
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) ::UnityEngine::Color  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::Color>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleColor>*() ;

constexpr void __set_m_Value(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_m_Value() ;

constexpr ::UnityEngine::Color const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x2e6f054 size 0x28 virtual true final true
inline ::UnityEngine::Color get_value() ;

/// @brief Method get_keyword addr 0x2e6f07c size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e6f084 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::Color  v) ;

/// @brief Method .ctor addr 0x2e6f094 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::Color  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e6f0a4 size 0x64 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleColor  lhs, ::UnityEngine::UIElements::StyleColor  rhs) ;

/// @brief Method op_Implicit addr 0x2e6f108 size 0x10 virtual false final false
static inline ::UnityEngine::UIElements::StyleColor op_Implicit___UnityEngine__UIElements__StyleColor(::UnityEngine::Color  v) ;

/// @brief Method Equals addr 0x2e6f118 size 0x64 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleColor  other) ;

/// @brief Method Equals addr 0x2e6f17c size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6f20c size 0x98 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e6f2a4 size 0x88 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleColor(::UnityEngine::Color  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleColor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleColor()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleColor, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleColor, "UnityEngine.UIElements", "StyleColor");
