#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleScale)
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Scale;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleScale;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleScale);
// Type: UnityEngine.UIElements::StyleScale
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7283))
// CS Name: ::UnityEngine.UIElements::StyleScale
struct CORDL_TYPE StyleScale : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::Scale  m_Value;

/// @brief Field m_Keyword offset 0x10
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::Scale  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Scale>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleScale>*() ;

constexpr void __set_m_Value(::UnityEngine::UIElements::Scale  value) ;

constexpr ::UnityEngine::UIElements::Scale& __get_m_Value() ;

constexpr ::UnityEngine::UIElements::Scale const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x2e6ca58 size 0x34 virtual true final true
inline ::UnityEngine::UIElements::Scale get_value() ;

/// @brief Method get_keyword addr 0x2e6ca8c size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e6ca94 size 0xc virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x2e6caa0 size 0xc virtual false final false
inline void _ctor(::UnityEngine::UIElements::Scale  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e6caac size 0x70 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleScale  lhs, ::UnityEngine::UIElements::StyleScale  rhs) ;

/// @brief Method op_Implicit addr 0x2e6cb70 size 0xc virtual false final false
static inline ::UnityEngine::UIElements::StyleScale op_Implicit___UnityEngine__UIElements__StyleScale(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method Equals addr 0x2e6cb7c size 0x74 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleScale  other) ;

/// @brief Method Equals addr 0x2e6cbf0 size 0xd0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6ccc0 size 0x24 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e6cd34 size 0x88 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Scale", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleScale(::UnityEngine::UIElements::Scale  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleScale(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleScale()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleScale, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleScale, "UnityEngine.UIElements", "StyleScale");
