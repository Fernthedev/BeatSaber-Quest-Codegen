#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__Slider2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorSaturationValueSlider)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace HMUI {
class Slider2D;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSaturationValueSlider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSaturationValueSlider);
// Type: ::ColorSaturationValueSlider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16175))
// CS Name: ::ColorSaturationValueSlider*
class CORDL_TYPE ColorSaturationValueSlider : public ::HMUI::Slider2D {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x158};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x158 - sizeof(::HMUI::Slider2D)]{};

/// @brief Field _hue offset 0x124
 __declspec(property(get=__get__hue, put=__set__hue)) float_t  _hue;

/// @brief Field _graphics offset 0x128
 __declspec(property(get=__get__graphics, put=__set__graphics)) ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>  _graphics;

/// @brief Field _darkColor offset 0x130
 __declspec(property(get=__get__darkColor, put=__set__darkColor)) ::UnityEngine::Color  _darkColor;

/// @brief Field _lightColor offset 0x140
 __declspec(property(get=__get__lightColor, put=__set__lightColor)) ::UnityEngine::Color  _lightColor;

/// @brief Field colorSaturationOrValueDidChangeEvent offset 0x150
 __declspec(property(get=__get_colorSaturationOrValueDidChangeEvent, put=__set_colorSaturationOrValueDidChangeEvent)) ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>*  colorSaturationOrValueDidChangeEvent;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

constexpr void __set__hue(float_t  value) ;

constexpr float_t& __get__hue() ;

constexpr float_t const& __get__hue() const;

constexpr void __set__graphics(::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*>& __get__graphics() ;

constexpr ::ArrayW<::UnityEngine::UI::Graphic*,::Array<::UnityEngine::UI::Graphic*>*> const& __get__graphics() const;

constexpr void __set__darkColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__darkColor() ;

constexpr ::UnityEngine::Color const& __get__darkColor() const;

constexpr void __set__lightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__lightColor() ;

constexpr ::UnityEngine::Color const& __get__lightColor() const;

constexpr void __set_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

constexpr ::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>* __get_colorSaturationOrValueDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>*> __get_colorSaturationOrValueDidChangeEvent() const;

/// @brief Method add_colorSaturationOrValueDidChangeEvent addr 0x23e2ce8 size 0xb4 virtual false final false
inline void add_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method remove_colorSaturationOrValueDidChangeEvent addr 0x23e2d9c size 0xb4 virtual false final false
inline void remove_colorSaturationOrValueDidChangeEvent(::System::Action_3<::GlobalNamespace::ColorSaturationValueSlider*,::UnityEngine::Vector2,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method Awake addr 0x23e2e50 size 0x90 virtual true final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23e2ee0 size 0x90 virtual true final false
inline void OnDestroy() ;

/// @brief Method SetHue addr 0x23e2f70 size 0x14 virtual false final false
inline void SetHue(float_t  hue) ;

/// @brief Method UpdateVisuals addr 0x23e2f84 size 0x138 virtual true final false
inline void UpdateVisuals() ;

/// @brief Method HandleNormalizedValueDidChange addr 0x23e30bc size 0x24 virtual false final false
inline void HandleNormalizedValueDidChange(::HMUI::Slider2D*  slider, ::UnityEngine::Vector2  normalizedValue) ;

/// @brief Method OnPointerUp addr 0x23e30e0 size 0x44 virtual true final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::GlobalNamespace::ColorSaturationValueSlider* New_ctor() ;

/// @brief Method .ctor addr 0x23e3124 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorSaturationValueSlider(ColorSaturationValueSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorSaturationValueSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorSaturationValueSlider(ColorSaturationValueSlider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorSaturationValueSlider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSaturationValueSlider, 0x158>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSaturationValueSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSaturationValueSlider*, "", "ColorSaturationValueSlider");
