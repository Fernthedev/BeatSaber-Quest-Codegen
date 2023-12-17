#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleEnum_1)
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
template<typename T>
struct StyleEnum_1;
}
namespace UnityEngine::UIElements {
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
struct StyleEnum_1<T>;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::StyleEnum_1);
// Type: UnityEngine.UIElements::StyleEnum`1
// Type: UnityEngine.UIElements::StyleEnum`1
namespace UnityEngine::UIElements {
// cpp template
template<::cordl_internals::is_or_is_backed_by<int32_t> T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7294))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7294), inst: 974 })
// CS Name: ::UnityEngine.UIElements::StyleEnum`1<T>
struct CORDL_TYPE StyleEnum_1<T> : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) T  m_Value;

/// @brief Field m_Keyword offset 0x4
 __declspec(property(get=__get_m_Keyword, put=__set_m_Keyword)) ::UnityEngine::UIElements::StyleKeyword  m_Keyword;

 __declspec(property(get=get_value)) T  value;

 __declspec(property(get=get_keyword)) ::UnityEngine::UIElements::StyleKeyword  keyword;

/// @brief Convert operator to "::UnityEngine::UIElements::IStyleValue_1<T>"
constexpr operator  ::UnityEngine::UIElements::IStyleValue_1<T>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleEnum_1<T>>*() ;

constexpr void __set_m_Value(T  value) ;

constexpr T& __get_m_Value() ;

constexpr T const& __get_m_Value() const;

constexpr void __set_m_Keyword(::UnityEngine::UIElements::StyleKeyword  value) ;

constexpr ::UnityEngine::UIElements::StyleKeyword& __get_m_Keyword() ;

constexpr ::UnityEngine::UIElements::StyleKeyword const& __get_m_Keyword() const;

/// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final true
inline T get_value() ;

/// @brief Method get_keyword addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::UnityEngine::UIElements::StyleKeyword get_keyword() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  v) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(T  v, ::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleEnum_1<T>  lhs, ::UnityEngine::UIElements::StyleEnum_1<T>  rhs) ;

/// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::StyleEnum_1<T>  lhs, ::UnityEngine::UIElements::StyleEnum_1<T>  rhs) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleEnum_1<T> op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(::UnityEngine::UIElements::StyleKeyword  keyword) ;

/// @brief Method op_Implicit addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::UnityEngine::UIElements::StyleEnum_1<T> op_Implicit___UnityEngine__UIElements__StyleEnum_1_T_(T  v) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool Equals(::UnityEngine::UIElements::StyleEnum_1<T>  other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: None }, CppParam { name: "m_Keyword", ty: "::UnityEngine::UIElements::StyleKeyword", modifiers: "", def_value: None }]
constexpr StyleEnum_1(T  m_Value, ::UnityEngine::UIElements::StyleKeyword  m_Keyword) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleEnum_1(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleEnum_1()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::StyleEnum_1, "UnityEngine.UIElements", "StyleEnum`1");
