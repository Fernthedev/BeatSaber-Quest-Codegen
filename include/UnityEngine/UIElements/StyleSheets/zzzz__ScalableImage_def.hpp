#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ScalableImage)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::ScalableImage);
// Type: UnityEngine.UIElements.StyleSheets::ScalableImage
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7473))
// CS Name: ::UnityEngine.UIElements.StyleSheets::ScalableImage
struct CORDL_TYPE ScalableImage : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field normalImage offset 0x0
 __declspec(property(get=__get_normalImage, put=__set_normalImage)) ::UnityEngine::Texture2D*  normalImage;

/// @brief Field highResolutionImage offset 0x8
 __declspec(property(get=__get_highResolutionImage, put=__set_highResolutionImage)) ::UnityEngine::Texture2D*  highResolutionImage;

constexpr void __set_normalImage(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_normalImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_normalImage() const;

constexpr void __set_highResolutionImage(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_highResolutionImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_highResolutionImage() const;

/// @brief Method ToString addr 0x2de5e24 size 0x164 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "normalImage", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }, CppParam { name: "highResolutionImage", ty: "::UnityEngine::Texture2D*", modifiers: "", def_value: None }]
constexpr ScalableImage(::UnityEngine::Texture2D*  normalImage, ::UnityEngine::Texture2D*  highResolutionImage) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ScalableImage(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ScalableImage()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::ScalableImage, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::ScalableImage, "UnityEngine.UIElements.StyleSheets", "ScalableImage");
