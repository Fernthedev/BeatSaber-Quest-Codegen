#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LOD)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine {
struct LOD;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LOD);
// Type: UnityEngine::LOD
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10090))
// CS Name: ::UnityEngine::LOD
struct CORDL_TYPE LOD : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field screenRelativeTransitionHeight offset 0x0
 __declspec(property(get=__get_screenRelativeTransitionHeight, put=__set_screenRelativeTransitionHeight)) float_t  screenRelativeTransitionHeight;

/// @brief Field fadeTransitionWidth offset 0x4
 __declspec(property(get=__get_fadeTransitionWidth, put=__set_fadeTransitionWidth)) float_t  fadeTransitionWidth;

/// @brief Field renderers offset 0x8
 __declspec(property(get=__get_renderers, put=__set_renderers)) ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  renderers;

constexpr void __set_screenRelativeTransitionHeight(float_t  value) ;

constexpr float_t& __get_screenRelativeTransitionHeight() ;

constexpr float_t const& __get_screenRelativeTransitionHeight() const;

constexpr void __set_fadeTransitionWidth(float_t  value) ;

constexpr float_t& __get_fadeTransitionWidth() ;

constexpr float_t const& __get_fadeTransitionWidth() const;

constexpr void __set_renderers(::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>& __get_renderers() ;

constexpr ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*> const& __get_renderers() const;

/// @brief Method .ctor addr 0x2cb70f4 size 0x10 virtual false final false
inline void _ctor(float_t  screenRelativeTransitionHeight, ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  renderers) ;

// Ctor Parameters [CppParam { name: "screenRelativeTransitionHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fadeTransitionWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderers", ty: "::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>", modifiers: "", def_value: None }]
constexpr LOD(float_t  screenRelativeTransitionHeight, float_t  fadeTransitionWidth, ::ArrayW<::UnityEngine::Renderer*,::Array<::UnityEngine::Renderer*>*>  renderers) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LOD(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LOD()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LOD, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LOD, "UnityEngine", "LOD");
