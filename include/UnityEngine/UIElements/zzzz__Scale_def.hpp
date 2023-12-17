#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Scale)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Scale;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Scale);
// Type: UnityEngine.UIElements::Scale
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7318))
// CS Name: ::UnityEngine.UIElements::Scale
struct CORDL_TYPE Scale : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Scale offset 0x0
 __declspec(property(get=__get_m_Scale, put=__set_m_Scale)) ::UnityEngine::Vector3  m_Scale;

/// @brief Field m_IsNone offset 0xc
 __declspec(property(get=__get_m_IsNone, put=__set_m_IsNone)) bool  m_IsNone;

 __declspec(property(get=get_value)) ::UnityEngine::Vector3  value;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Scale>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::Scale>*() ;

constexpr void __set_m_Scale(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Scale() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Scale() const;

constexpr void __set_m_IsNone(bool  value) ;

constexpr bool& __get_m_IsNone() ;

constexpr bool const& __get_m_IsNone() const;

/// @brief Method .ctor addr 0x2e75bf4 size 0x14 virtual false final false
inline void _ctor(::UnityEngine::Vector3  scale) ;

/// @brief Method Initial addr 0x2e75c08 size 0x44 virtual false final false
static inline ::UnityEngine::UIElements::Scale Initial() ;

/// @brief Method None addr 0x2e7135c size 0x18 virtual false final false
static inline ::UnityEngine::UIElements::Scale None() ;

/// @brief Method get_value addr 0x2e75c4c size 0xc virtual false final false
inline ::UnityEngine::Vector3 get_value() ;

/// @brief Method op_Equality addr 0x2e6cb1c size 0x54 virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::Scale  lhs, ::UnityEngine::UIElements::Scale  rhs) ;

/// @brief Method op_Inequality addr 0x2e75c58 size 0x54 virtual false final false
static inline bool op_Inequality(::UnityEngine::UIElements::Scale  lhs, ::UnityEngine::UIElements::Scale  rhs) ;

/// @brief Method Equals addr 0x2e75cac size 0x4c virtual true final true
inline bool Equals(::UnityEngine::UIElements::Scale  other) ;

/// @brief Method Equals addr 0x2e75cf8 size 0xbc virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2e6cce4 size 0x50 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x2e75db4 size 0x8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "m_Scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_IsNone", ty: "bool", modifiers: "", def_value: None }]
constexpr Scale(::UnityEngine::Vector3  m_Scale, bool  m_IsNone) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Scale(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Scale()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Scale, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Scale, "UnityEngine.UIElements", "Scale");
