#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleRotate)
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleRotate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleRotate);
// Type: UnityEngine.UIElements::StyleRotate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7320))
// CS Name: ::UnityEngine.UIElements::StyleRotate
struct CORDL_TYPE StyleRotate : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::Rotate  m_Value;

/// @brief Field m_Keyword offset 0x18
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::Rotate  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Rotate>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleRotate>*() ;

constexpr void __set_m_Value(::UnityEngine::UIElements::Rotate  value) ;

constexpr ::UnityEngine::UIElements::Rotate& __get_m_Value() ;

constexpr ::UnityEngine::UIElements::Rotate const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x2e73064 size 0x44 virtual true final true
inline ::UnityEngine::UIElements::Rotate get_value() ;

/// @brief Method get_keyword addr 0x2e75fe8 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e75ff0 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x2e76000 size 0x18 virtual false final false
inline void _ctor(::UnityEngine::UIElements::Rotate  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e76018 size 0x5c virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleRotate  lhs, ::UnityEngine::UIElements::StyleRotate  rhs) ;

/// @brief Method op_Implicit addr 0x2e734bc size 0x10 virtual false final false
static inline ::UnityEngine::UIElements::StyleRotate op_Implicit___UnityEngine__UIElements__StyleRotate(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method Equals addr 0x2e76074 size 0x7c virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleRotate  other) ;

/// @brief Method Equals addr 0x2e760f0 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e76180 size 0x24 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e761a4 size 0x88 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleRotate(::UnityEngine::UIElements::Rotate  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleRotate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleRotate()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleRotate, 0x1c>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleRotate, "UnityEngine.UIElements", "StyleRotate");
