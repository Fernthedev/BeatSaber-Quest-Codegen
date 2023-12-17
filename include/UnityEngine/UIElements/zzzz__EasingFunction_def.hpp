#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EasingFunction)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct EasingMode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct EasingFunction;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::EasingFunction);
// Type: UnityEngine.UIElements::EasingFunction
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7286))
// CS Name: ::UnityEngine.UIElements::EasingFunction
struct CORDL_TYPE EasingFunction : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Mode offset 0x0
 __declspec(property(get=__get_m_Mode, put=__set_m_Mode)) ::UnityEngine::UIElements::EasingMode  m_Mode;

 __declspec(property(get=get_mode)) ::UnityEngine::UIElements::EasingMode  mode;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::EasingFunction>*() ;

constexpr void __set_m_Mode(::UnityEngine::UIElements::EasingMode  value) ;

constexpr ::UnityEngine::UIElements::EasingMode& __get_m_Mode() ;

constexpr ::UnityEngine::UIElements::EasingMode const& __get_m_Mode() const;

/// @brief Method get_mode addr 0x2e6d21c size 0x8 virtual false final false
inline ::UnityEngine::UIElements::EasingMode get_mode() ;

/// @brief Method .ctor addr 0x2e6d224 size 0x8 virtual false final false
inline void _ctor(::UnityEngine::UIElements::EasingMode  mode) ;

/// @brief Method op_Implicit addr 0x2e6d22c size 0x8 virtual false final false
static inline ::UnityEngine::UIElements::EasingFunction op_Implicit___UnityEngine__UIElements__EasingFunction(::UnityEngine::UIElements::EasingMode  easingMode) ;

/// @brief Method op_Equality addr 0x2e6d234 size 0xc virtual false final false
static inline bool op_Equality(::UnityEngine::UIElements::EasingFunction  lhs, ::UnityEngine::UIElements::EasingFunction  rhs) ;

/// @brief Method Equals addr 0x2e6d240 size 0x10 virtual true final true
inline bool Equals(::UnityEngine::UIElements::EasingFunction  other) ;

/// @brief Method Equals addr 0x2e6d250 size 0x78 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method ToString addr 0x2e6d2c8 size 0x68 virtual true final false
inline ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2e6d330 size 0x8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UIElements::EasingMode", modifiers: "", def_value: None }]
constexpr EasingFunction(::UnityEngine::UIElements::EasingMode  m_Mode) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EasingFunction(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EasingFunction()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::EasingFunction, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::EasingFunction, "UnityEngine.UIElements", "EasingFunction");
