#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ColorSchemeColorToggleController)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeColorToggleController);
// Type: ::ColorSchemeColorToggleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5409))
// CS Name: ::ColorSchemeColorToggleController*
class CORDL_TYPE ColorSchemeColorToggleController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _colorGraphics offset 0x18
 __declspec(property(get=__get__colorGraphics, put=__set__colorGraphics)) ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>  _colorGraphics;

/// @brief Field _toggle offset 0x20
 __declspec(property(get=__get__toggle, put=__set__toggle)) ::UnityEngine::UI::Toggle*  _toggle;

 __declspec(property(get=get_toggle)) ::UnityEngine::UI::Toggle*  toggle;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__colorGraphics(::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>& __get__colorGraphics() ;

constexpr ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*> const& __get__colorGraphics() const;

constexpr void __set__toggle(::UnityEngine::UI::Toggle*  value) ;

constexpr ::UnityEngine::UI::Toggle* __get__toggle() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> __get__toggle() const;

/// @brief Method get_toggle addr 0x2275418 size 0x8 virtual false final false
inline ::UnityEngine::UI::Toggle* get_toggle() ;

/// @brief Method get_color addr 0x2274c8c size 0x38 virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2274cdc size 0x98 virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

static inline ::GlobalNamespace::ColorSchemeColorToggleController* New_ctor() ;

/// @brief Method .ctor addr 0x2275420 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSchemeColorToggleController(ColorSchemeColorToggleController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSchemeColorToggleController(ColorSchemeColorToggleController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSchemeColorToggleController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeColorToggleController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeColorToggleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeColorToggleController*, "", "ColorSchemeColorToggleController");
