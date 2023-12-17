#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RGBPanelController)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class ColorGradientSlider;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
// Forward declare root types
namespace GlobalNamespace {
class RGBPanelController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RGBPanelController);
// Type: ::RGBPanelController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16179))
// CS Name: ::RGBPanelController*
class CORDL_TYPE RGBPanelController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _redSlider offset 0x18
 __declspec(property(get=__get__redSlider, put=__set__redSlider)) ::HMUI::ColorGradientSlider*  _redSlider;

/// @brief Field _greenSlider offset 0x20
 __declspec(property(get=__get__greenSlider, put=__set__greenSlider)) ::HMUI::ColorGradientSlider*  _greenSlider;

/// @brief Field _blueSlider offset 0x28
 __declspec(property(get=__get__blueSlider, put=__set__blueSlider)) ::HMUI::ColorGradientSlider*  _blueSlider;

/// @brief Field colorDidChangeEvent offset 0x30
 __declspec(property(get=__get_colorDidChangeEvent, put=__set_colorDidChangeEvent)) ::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  colorDidChangeEvent;

/// @brief Field _color offset 0x38
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

 __declspec(property(get=get_color, put=set_color)) ::UnityEngine::Color  color;

constexpr void __set__redSlider(::HMUI::ColorGradientSlider*  value) ;

constexpr ::HMUI::ColorGradientSlider* __get__redSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> __get__redSlider() const;

constexpr void __set__greenSlider(::HMUI::ColorGradientSlider*  value) ;

constexpr ::HMUI::ColorGradientSlider* __get__greenSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> __get__greenSlider() const;

constexpr void __set__blueSlider(::HMUI::ColorGradientSlider*  value) ;

constexpr ::HMUI::ColorGradientSlider* __get__blueSlider() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ColorGradientSlider*> __get__blueSlider() const;

constexpr void __set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

constexpr ::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>* __get_colorDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*> __get_colorDidChangeEvent() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

/// @brief Method add_colorDidChangeEvent addr 0x23e3b74 size 0xb0 virtual false final false
inline void add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method remove_colorDidChangeEvent addr 0x23e3c24 size 0xb0 virtual false final false
inline void remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method get_color addr 0x23e3cd4 size 0xc virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x23e3ce0 size 0x20 virtual false final false
inline void set_color(::UnityEngine::Color  value) ;

/// @brief Method Awake addr 0x23e3ec4 size 0x104 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x23e3fc8 size 0x1ac virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleSliderColorDidChange addr 0x23e4174 size 0x3c virtual false final false
inline void HandleSliderColorDidChange(::HMUI::ColorGradientSlider*  slider, ::UnityEngine::Color  color, ::GlobalNamespace::ColorChangeUIEventType  colorChangeUIEventType) ;

/// @brief Method RefreshSlidersValues addr 0x23e3e78 size 0x4c virtual false final false
inline void RefreshSlidersValues() ;

/// @brief Method RefreshSlidersColors addr 0x23e3d00 size 0x178 virtual false final false
inline void RefreshSlidersColors() ;

static inline ::GlobalNamespace::RGBPanelController* New_ctor() ;

/// @brief Method .ctor addr 0x23e41b0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RGBPanelController(RGBPanelController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RGBPanelController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RGBPanelController(RGBPanelController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RGBPanelController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RGBPanelController, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RGBPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RGBPanelController*, "", "RGBPanelController");
