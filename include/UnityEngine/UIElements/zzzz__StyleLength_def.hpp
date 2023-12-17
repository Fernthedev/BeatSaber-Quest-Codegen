#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleLength)
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleValue_1;
}
namespace UnityEngine::UIElements {
struct StyleKeyword;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleLength;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleLength);
// Type: UnityEngine.UIElements::StyleLength
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7298))
// CS Name: ::UnityEngine.UIElements::StyleLength
struct CORDL_TYPE StyleLength : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) ::UnityEngine::UIElements::Length  m_Value;

/// @brief Field m_Keyword offset 0x8
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) ::UnityEngine::UIElements::Length  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<::UnityEngine::UIElements::Length>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleLength>*() ;

constexpr void __set_m_Value(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_m_Value() ;

constexpr ::UnityEngine::UIElements::Length const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x2e70b60 size 0x18 virtual true final true
inline ::UnityEngine::UIElements::Length get_value() ;

/// @brief Method get_keyword addr 0x2e70b78 size 0x8 virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x2e70b80 size 0x2c virtual false final false
inline void _ctor(float_t  v) ;

/// @brief Method .ctor addr 0x2e70bf4 size 0xc virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x2e70bd4 size 0x20 virtual false final false
inline void _ctor(::UnityEngine::UIElements::Length  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x2e70c20 size 0x38 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleLength  lhs, ::UnityEngine::UIElements::StyleLength  rhs) ;

/// @brief Method op_Implicit addr 0x2e70c80 size 0xc virtual false final false
static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Implicit addr 0x2e70c8c size 0x28 virtual false final false
static inline ::UnityEngine::UIElements::StyleLength op_Implicit___UnityEngine__UIElements__StyleLength(float_t  v) ;

/// @brief Method Equals addr 0x2e70cb4 size 0x40 virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleLength  other) ;

/// @brief Method Equals addr 0x2e70cf4 size 0xa4 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e70d98 size 0x30 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e70df0 size 0x88 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleLength(::UnityEngine::UIElements::Length  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleLength(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleLength()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleLength, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleLength, "UnityEngine.UIElements", "StyleLength");
