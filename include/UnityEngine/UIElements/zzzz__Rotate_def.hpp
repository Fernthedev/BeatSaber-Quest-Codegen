#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Rotate)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Rotate;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Rotate);
// Type: UnityEngine.UIElements::Rotate
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7295))
// CS Name: ::UnityEngine.UIElements::Rotate
struct CORDL_TYPE Rotate : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Angle offset 0x0
 __declspec(property(get=__get_m_Angle, put=__set_m_Angle)) ::UnityEngine::UIElements::Angle  m_Angle;

/// @brief Field m_Axis offset 0x8
 __declspec(property(get=__get_m_Axis, put=__set_m_Axis)) ::UnityEngine::Vector3  m_Axis;

/// @brief Field m_IsNone offset 0x14
 __declspec(property(get=__get_m_IsNone, put=__set_m_IsNone)) bool  m_IsNone;

 __declspec(property(get=get_angle, put=set_angle)) ::UnityEngine::UIElements::Angle  angle;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Rotate>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Rotate>*() ;

constexpr void __set_m_Angle(::UnityEngine::UIElements::Angle  value) ;

constexpr ::UnityEngine::UIElements::Angle& __get_m_Angle() ;

constexpr ::UnityEngine::UIElements::Angle const& __get_m_Angle() const;

constexpr void __set_m_Axis(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Axis() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Axis() const;

constexpr void __set_m_IsNone(bool  value) ;

constexpr bool& __get_m_IsNone() ;

constexpr bool const& __get_m_IsNone() const;

/// @brief Method .ctor addr 0x2e702a4 size 0x60 virtual false final false
inline void _ctor(::UnityEngine::UIElements::Angle  angle) ;

/// @brief Method Initial addr 0x2e70304 size 0x8c virtual false final false
static inline ::UnityEngine::UIElements::Rotate Initial() ;

/// @brief Method None addr 0x2e70398 size 0x70 virtual false final false
static inline ::UnityEngine::UIElements::Rotate None() ;

/// @brief Method get_angle addr 0x2e70408 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::Angle get_angle() ;

/// @brief Method set_angle addr 0x2e70410 size 0x8 virtual false final false
inline void set_angle(::UnityEngine::UIElements::Angle  value) ;

/// @brief Method op_Equality addr 0x2e70418 size 0x84 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::Rotate  lhs, ::UnityEngine::UIElements::Rotate  rhs) ;

/// @brief Method op_Inequality addr 0x2e704c4 size 0x48 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::Rotate  lhs, ::UnityEngine::UIElements::Rotate  rhs) ;

/// @brief Method Equals addr 0x2e7050c size 0x44 virtual true final true
inline bool Equals(::UnityEngine::UIElements::Rotate  other) ;

/// @brief Method Equals addr 0x2e70550 size 0xa0 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e705f0 size 0x98 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e706b0 size 0x68 virtual true final false
inline ::StringW ToString() ;

/// @brief Method ToQuaternion addr 0x2e708f0 size 0x20 virtual false final false
inline ::UnityEngine::Quaternion ToQuaternion() ;

// Ctor Parameters [CppParam { name: "m_Angle", ty: "::UnityEngine::UIElements::Angle", modifiers: "", def_value: None }, CppParam { name: "m_Axis", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Rotate(::UnityEngine::UIElements::Angle  m_Angle, ::UnityEngine::Vector3  m_Axis, bool  m_IsNone) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Rotate(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Rotate()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Rotate, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Rotate, "UnityEngine.UIElements", "Rotate");
