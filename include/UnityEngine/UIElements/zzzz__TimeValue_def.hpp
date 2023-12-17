#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeValue)
namespace UnityEngine::UIElements {
struct TimeUnit;
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
struct TimeValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimeValue);
// Type: UnityEngine.UIElements::TimeValue
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7322))
// CS Name: ::UnityEngine.UIElements::TimeValue
struct CORDL_TYPE TimeValue : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) float_t  m_Value;

/// @brief Field m_Unit offset 0x4
 __declspec(property(get=__get_m_Unit, put=__set_m_Unit)) ::UnityEngine::UIElements::TimeUnit  m_Unit;

 __declspec(property(get=get_value)) float_t  value;

 __declspec(property(get=get_unit)) ::UnityEngine::UIElements::TimeUnit  unit;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TimeValue>*() ;

constexpr void __set_m_Value(float_t  value) ;

constexpr float_t& __get_m_Value() ;

constexpr float_t const& __get_m_Value() const;

constexpr void __set_m_Unit(::UnityEngine::UIElements::TimeUnit  value) ;

constexpr ::UnityEngine::UIElements::TimeUnit& __get_m_Unit() ;

constexpr ::UnityEngine::UIElements::TimeUnit const& __get_m_Unit() const;

/// @brief Method get_value addr 0x2e7622c size 0x8 virtual false final false
inline float_t get_value() ;

/// @brief Method get_unit addr 0x2e76234 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::TimeUnit get_unit() ;

/// @brief Method .ctor addr 0x2e6e1d4 size 0xc virtual false final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor addr 0x2e7623c size 0xc virtual false final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::TimeUnit  unit) ;

/// @brief Method op_Implicit addr 0x2e76248 size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::TimeValue op_Implicit___UnityEngine__UIElements__TimeValue(float_t  value) ;

/// @brief Method op_Equality addr 0x2e76250 size 0x28 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::TimeValue  lhs, ::UnityEngine::UIElements::TimeValue  rhs) ;

/// @brief Method op_Inequality addr 0x2e6e1ac size 0x28 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::TimeValue  lhs, ::UnityEngine::UIElements::TimeValue  rhs) ;

/// @brief Method Equals addr 0x2e76278 size 0x28 virtual true final true
inline bool Equals(::UnityEngine::UIElements::TimeValue  other) ;

/// @brief Method Equals addr 0x2e762a0 size 0x8c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6de64 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e7632c size 0xf8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::TimeUnit", modifiers: "", def_value: None }]
constexpr TimeValue(float_t  m_Value, ::UnityEngine::UIElements::TimeUnit  m_Unit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TimeValue(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TimeValue()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeValue, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeValue, "UnityEngine.UIElements", "TimeValue");
