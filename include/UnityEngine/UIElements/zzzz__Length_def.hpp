#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length)
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
struct __Length__Unit;
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
struct __Length__Unit;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__Length__Unit);
MARK_VAL_T(::UnityEngine::UIElements::Length);
// Type: ::Unit
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7312))
// CS Name: ::Length::Unit
struct CORDL_TYPE __Length__Unit : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Length__Unit_Unwrapped
enum struct ____Length__Unit_Unwrapped : int32_t {
__E_Pixel = static_cast<int32_t>(0x0),
__E_Percent = static_cast<int32_t>(0x1),
__E_Auto = static_cast<int32_t>(0x2),
__E_None = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Pixel value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__Length__Unit const Pixel;

/// @brief Field Percent value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__Length__Unit const Percent;

/// @brief Field Auto value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__Length__Unit const Auto;

/// @brief Field None value: static_cast<int32_t>(0x3)
static ::UnityEngine::UIElements::__Length__Unit const None;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Length__Unit_Unwrapped () const noexcept {
return std::bit_cast<____Length__Unit_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Length__Unit(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Length__Unit(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Length__Unit()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Length__Unit, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::Length
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7313))
// CS Name: ::UnityEngine.UIElements::Length
struct CORDL_TYPE Length : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
using Unit = ::UnityEngine::UIElements::__Length__Unit;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field k_MaxValue offset 0x0
static constexpr float_t  k_MaxValue{8388608.0};

/// @brief Field m_Value offset 0x0
 __declspec(property(get=__get_m_Value, put=__set_m_Value)) float_t  m_Value;

/// @brief Field m_Unit offset 0x4
 __declspec(property(get=__get_m_Unit, put=__set_m_Unit)) ::UnityEngine::UIElements::__Length__Unit  m_Unit;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_unit, put=set_unit)) ::UnityEngine::UIElements::LengthUnit  unit;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Length>*() ;

constexpr void __set_m_Value(float_t  value) ;

constexpr float_t& __get_m_Value() ;

constexpr float_t const& __get_m_Value() const;

constexpr void __set_m_Unit(::UnityEngine::UIElements::__Length__Unit  value) ;

constexpr ::UnityEngine::UIElements::__Length__Unit& __get_m_Unit() ;

constexpr ::UnityEngine::UIElements::__Length__Unit const& __get_m_Unit() const;

/// @brief Method Percent addr 0x2e7534c size 0x28 virtual false final false
static inline ::UnityEngine::UIElements::Length Percent(float_t  value) ;

/// @brief Method Auto addr 0x2e710cc size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::Length Auto() ;

/// @brief Method None addr 0x2e710d4 size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::Length None() ;

/// @brief Method get_value addr 0x2e7539c size 0x8 virtual false final false
inline float_t get_value() ;

/// @brief Method set_value addr 0x2e753a4 size 0x24 virtual false final false
inline void set_value(float_t  value) ;

/// @brief Method get_unit addr 0x2e753c8 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::LengthUnit get_unit() ;

/// @brief Method set_unit addr 0x2e753d0 size 0x8 virtual false final false
inline void set_unit(::UnityEngine::UIElements::LengthUnit  value) ;

/// @brief Method IsAuto addr 0x2e70c00 size 0x10 virtual false final false
inline bool IsAuto() ;

/// @brief Method IsNone addr 0x2e70c10 size 0x10 virtual false final false
inline bool IsNone() ;

/// @brief Method .ctor addr 0x2e753d8 size 0x28 virtual false final false
inline void _ctor(float_t  value) ;

/// @brief Method .ctor addr 0x2e70bac size 0x28 virtual false final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::LengthUnit  unit) ;

/// @brief Method .ctor addr 0x2e75374 size 0x28 virtual false final false
inline void _ctor(float_t  value, ::UnityEngine::UIElements::__Length__Unit  unit) ;

/// @brief Method op_Implicit addr 0x2e75400 size 0x24 virtual false final false
static inline ::UnityEngine::UIElements::Length op_Implicit___UnityEngine__UIElements__Length(float_t  value) ;

/// @brief Method op_Equality addr 0x2e70c58 size 0x28 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method op_Inequality addr 0x2e75424 size 0x28 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::Length  lhs, ::UnityEngine::UIElements::Length  rhs) ;

/// @brief Method Equals addr 0x2e7544c size 0x28 virtual true final true
inline bool Equals(::UnityEngine::UIElements::Length  other) ;

/// @brief Method Equals addr 0x2e75474 size 0x8c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e70dc8 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e71878 size 0x1c0 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::__Length__Unit", modifiers: "", def_value: None }]
constexpr Length(float_t  m_Value, ::UnityEngine::UIElements::__Length__Unit  m_Unit) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Length(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Length()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Length__Unit, "UnityEngine.UIElements", "Length/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");
