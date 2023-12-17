#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Transform3x4)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::Transform3x4);
// Type: UnityEngine.UIElements.UIR::Transform3x4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7424))
// CS Name: ::UnityEngine.UIElements.UIR::Transform3x4
struct CORDL_TYPE Transform3x4 : public ::bs_hook::ValueTypeWrapper<0x30> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field v0 offset 0x0
 __declspec(property(get=__get_v0, put=__set_v0)) ::UnityEngine::Vector4  v0;

/// @brief Field v1 offset 0x10
 __declspec(property(get=__get_v1, put=__set_v1)) ::UnityEngine::Vector4  v1;

/// @brief Field v2 offset 0x20
 __declspec(property(get=__get_v2, put=__set_v2)) ::UnityEngine::Vector4  v2;

constexpr void __set_v0(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_v0() ;

constexpr ::UnityEngine::Vector4 const& __get_v0() const;

constexpr void __set_v1(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_v1() ;

constexpr ::UnityEngine::Vector4 const& __get_v1() const;

constexpr void __set_v2(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_v2() ;

constexpr ::UnityEngine::Vector4 const& __get_v2() const;

// Ctor Parameters [CppParam { name: "v0", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr Transform3x4(::UnityEngine::Vector4  v0, ::UnityEngine::Vector4  v1, ::UnityEngine::Vector4  v2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Transform3x4(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x30>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Transform3x4()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Transform3x4, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Transform3x4, "UnityEngine.UIElements.UIR", "Transform3x4");
