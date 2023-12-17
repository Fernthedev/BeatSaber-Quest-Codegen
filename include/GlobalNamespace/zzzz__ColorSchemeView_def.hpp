#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeView)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeView);
// Type: ::ColorSchemeView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16176))
// CS Name: ::ColorSchemeView*
class CORDL_TYPE ColorSchemeView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saberAColorImage offset 0x18
 __declspec(property(get=__get__saberAColorImage, put=__set__saberAColorImage)) ::UnityEngine::UI::Image*  _saberAColorImage;

/// @brief Field _saberBColorImage offset 0x20
 __declspec(property(get=__get__saberBColorImage, put=__set__saberBColorImage)) ::UnityEngine::UI::Image*  _saberBColorImage;

/// @brief Field _environment0ColorImage offset 0x28
 __declspec(property(get=__get__environment0ColorImage, put=__set__environment0ColorImage)) ::UnityEngine::UI::Image*  _environment0ColorImage;

/// @brief Field _environment1ColorImage offset 0x30
 __declspec(property(get=__get__environment1ColorImage, put=__set__environment1ColorImage)) ::UnityEngine::UI::Image*  _environment1ColorImage;

/// @brief Field _environmentColor0BoostImage offset 0x38
 __declspec(property(get=__get__environmentColor0BoostImage, put=__set__environmentColor0BoostImage)) ::UnityEngine::UI::Image*  _environmentColor0BoostImage;

/// @brief Field _environmentColor1BoostImage offset 0x40
 __declspec(property(get=__get__environmentColor1BoostImage, put=__set__environmentColor1BoostImage)) ::UnityEngine::UI::Image*  _environmentColor1BoostImage;

/// @brief Field _obstacleColorImage offset 0x48
 __declspec(property(get=__get__obstacleColorImage, put=__set__obstacleColorImage)) ::UnityEngine::UI::Image*  _obstacleColorImage;

constexpr void __set__saberAColorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__saberAColorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__saberAColorImage() const;

constexpr void __set__saberBColorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__saberBColorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__saberBColorImage() const;

constexpr void __set__environment0ColorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__environment0ColorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__environment0ColorImage() const;

constexpr void __set__environment1ColorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__environment1ColorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__environment1ColorImage() const;

constexpr void __set__environmentColor0BoostImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__environmentColor0BoostImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__environmentColor0BoostImage() const;

constexpr void __set__environmentColor1BoostImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__environmentColor1BoostImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__environmentColor1BoostImage() const;

constexpr void __set__obstacleColorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__obstacleColorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__obstacleColorImage() const;

/// @brief Method SetColors addr 0x23e312c size 0x1b8 virtual false final false
inline void SetColors(::UnityEngine::Color  saberAColor, ::UnityEngine::Color  saberBColor, ::UnityEngine::Color  environment0Color, ::UnityEngine::Color  environment1Color, ::UnityEngine::Color  environmentColor0Boost, ::UnityEngine::Color  environmentColor1Boost, ::UnityEngine::Color  obstacleColor) ;

static inline ::GlobalNamespace::ColorSchemeView* New_ctor() ;

/// @brief Method .ctor addr 0x23e32e4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeView(ColorSchemeView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeView(ColorSchemeView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeView()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeView, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeView*, "", "ColorSchemeView");
