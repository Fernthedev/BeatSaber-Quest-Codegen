#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Translate)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Translate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Translate);
// Type: UnityEngine.UIElements::Translate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7302))
// CS Name: ::UnityEngine.UIElements::Translate
struct CORDL_TYPE Translate : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_X offset 0x0
 __declspec(property(get=__get_m_X, put=__set_m_X)) ::UnityEngine::UIElements::Length  m_X;

/// @brief Field m_Y offset 0x8
 __declspec(property(get=__get_m_Y, put=__set_m_Y)) ::UnityEngine::UIElements::Length  m_Y;

/// @brief Field m_Z offset 0x10
 __declspec(property(get=__get_m_Z, put=__set_m_Z)) float_t  m_Z;

/// @brief Field m_isNone offset 0x14
 __declspec(property(get=__get_m_isNone, put=__set_m_isNone)) bool  m_isNone;

 __declspec(property(get=get_x)) ::UnityEngine::UIElements::Length  x;

 __declspec(property(get=get_y)) ::UnityEngine::UIElements::Length  y;

 __declspec(property(get=get_z)) float_t  z;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Translate>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Translate>*() ;

constexpr void __set_m_X(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_m_X() ;

constexpr ::UnityEngine::UIElements::Length const& __get_m_X() const;

constexpr void __set_m_Y(::UnityEngine::UIElements::Length  value) ;

constexpr ::UnityEngine::UIElements::Length& __get_m_Y() ;

constexpr ::UnityEngine::UIElements::Length const& __get_m_Y() const;

constexpr void __set_m_Z(float_t  value) ;

constexpr float_t& __get_m_Z() ;

constexpr float_t const& __get_m_Z() const;

constexpr void __set_m_isNone(bool  value) ;

constexpr bool& __get_m_isNone() ;

constexpr bool const& __get_m_isNone() const;

/// @brief Method .ctor addr 0x2e71500 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::UIElements::Length  x, ::UnityEngine::UIElements::Length  y, float_t  z) ;

/// @brief Method None addr 0x2e714c4 size 0x1c virtual false final false
static inline ::UnityEngine::UIElements::Translate None() ;

/// @brief Method get_x addr 0x2e71510 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::Length get_x() ;

/// @brief Method get_y addr 0x2e71518 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::Length get_y() ;

/// @brief Method get_z addr 0x2e71520 size 0x8 virtual false final false
inline float_t get_z() ;

/// @brief Method op_Equality addr 0x2e6f45c size 0x7c virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::Translate  lhs, ::UnityEngine::UIElements::Translate  rhs) ;

/// @brief Method op_Inequality addr 0x2e71528 size 0x78 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::Translate  lhs, ::UnityEngine::UIElements::Translate  rhs) ;

/// @brief Method Equals addr 0x2e715a0 size 0x7c virtual true final true
inline bool Equals(::UnityEngine::UIElements::Translate  other) ;

/// @brief Method Equals addr 0x2e7161c size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6f608 size 0x74 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e716ac size 0x1cc virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_X", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Y", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "m_Z", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_isNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Translate(::UnityEngine::UIElements::Length  m_X, ::UnityEngine::UIElements::Length  m_Y, float_t  m_Z, bool  m_isNone) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Translate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Translate()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Translate, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Translate, "UnityEngine.UIElements", "Translate");
