#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleTextShadow)
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleTextShadow);
// Type: UnityEngine.UIElements::StyleTextShadow
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7319))
// CS Name: ::UnityEngine.UIElements::StyleTextShadow
struct CORDL_TYPE StyleTextShadow : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Keyword offset 0x0
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

/// @brief Field m_Value offset 0x4
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::TextShadow  m_Value;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::TextShadow  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::TextShadow>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleTextShadow>*() ;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

constexpr void __set_m_Value(::UnityEngine::UIElements::TextShadow  value) ;

constexpr ::UnityEngine::UIElements::TextShadow& __get_m_Value() ;

constexpr ::UnityEngine::UIElements::TextShadow const& __get_m_Value() const;

/// @brief Method get_value addr 0x2e72fd8 size 0x4c virtual true final true
inline ::UnityEngine::UIElements::TextShadow get_value() ;

/// @brief Method get_keyword addr 0x2e72fd0 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e75dbc size 0x18 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x2e75dd4 size 0x20 virtual false final false
inline void _ctor(::UnityEngine::UIElements::TextShadow  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e75df4 size 0x68 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleTextShadow  lhs, ::UnityEngine::UIElements::StyleTextShadow  rhs) ;

/// @brief Method op_Implicit addr 0x2e73198 size 0x18 virtual false final false
static inline ::UnityEngine::UIElements::StyleTextShadow op_Implicit___UnityEngine__UIElements__StyleTextShadow(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method Equals addr 0x2e75e5c size 0x34 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleTextShadow  other) ;

/// @brief Method Equals addr 0x2e75e90 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e75f20 size 0x48 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e75f68 size 0x80 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }]
constexpr StyleTextShadow(::UnityEngine::UIElements::StyleKeyword  m_Keyword, ::UnityEngine::UIElements::TextShadow  m_Value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleTextShadow(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleTextShadow()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleTextShadow, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleTextShadow, "UnityEngine.UIElements", "StyleTextShadow");
