#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorPickerButtonController)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorPickerButtonController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorPickerButtonController);
// Type: ::ColorPickerButtonController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16144))
// CS Name: ::ColorPickerButtonController*
class CORDL_TYPE ColorPickerButtonController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _button offset 0x18
 __declspec(property(get=__get__button, put=__set__button)) ::UnityEngine::UI::Button*  _button;

/// @brief Field _colorImage offset 0x20
 __declspec(property(get=__get__colorImage, put=__set__colorImage)) ::UnityEngine::UI::Image*  _colorImage;

 __declspec(property(get=get_button)) ::UnityEngine::UI::Button*  button;

constexpr void __set__button(::UnityEngine::UI::Button*  value) ;

constexpr ::UnityEngine::UI::Button* __get__button() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> __get__button() const;

constexpr void __set__colorImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__colorImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__colorImage() const;

/// @brief Method get_button addr 0x23e4268 size 0x8 virtual false final false
inline ::UnityEngine::UI::Button* get_button() ;

/// @brief Method SetColor addr 0x23e4270 size 0x28 virtual false final false
inline void SetColor(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::ColorPickerButtonController* New_ctor() ;

/// @brief Method .ctor addr 0x23e4298 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorPickerButtonController(ColorPickerButtonController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorPickerButtonController(ColorPickerButtonController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorPickerButtonController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorPickerButtonController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorPickerButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
