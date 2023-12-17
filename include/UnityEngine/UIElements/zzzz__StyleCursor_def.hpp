#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleCursor)
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleCursor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleCursor);
// Type: UnityEngine.UIElements::StyleCursor
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7292))
// CS Name: ::UnityEngine.UIElements::StyleCursor
struct CORDL_TYPE StyleCursor : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::Cursor  m_Value;

/// @brief Field m_Keyword offset 0x18
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::Cursor  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Cursor>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleCursor>*() ;

constexpr void __set_m_Value(::UnityEngine::UIElements::Cursor  value) ;

constexpr ::UnityEngine::UIElements::Cursor& __get_m_Value() ;

constexpr ::UnityEngine::UIElements::Cursor const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x2e6f704 size 0x44 virtual true final true
inline ::UnityEngine::UIElements::Cursor get_value() ;

/// @brief Method get_keyword addr 0x2e6f748 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e6f750 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x2e6f760 size 0x18 virtual false final false
inline void _ctor(::UnityEngine::UIElements::Cursor  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e6f778 size 0x60 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleCursor  lhs, ::UnityEngine::UIElements::StyleCursor  rhs) ;

/// @brief Method op_Implicit addr 0x2e6f7d8 size 0x10 virtual false final false
static inline ::UnityEngine::UIElements::StyleCursor op_Implicit___UnityEngine__UIElements__StyleCursor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method Equals addr 0x2e6f7e8 size 0x80 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleCursor  other) ;

/// @brief Method Equals addr 0x2e6f868 size 0x88 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6f8f0 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e6f918 size 0x80 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Cursor", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleCursor(::UnityEngine::UIElements::Cursor  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleCursor(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleCursor()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleCursor, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleCursor, "UnityEngine.UIElements", "StyleCursor");
