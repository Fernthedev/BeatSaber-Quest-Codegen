#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TextSlider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorGradientSlider)
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace HMUI {
class TextSlider;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
class ImageView;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
// Forward declare root types
namespace HMUI {
class ColorGradientSlider;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ColorGradientSlider);
// Type: HMUI::ColorGradientSlider
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13555))
// CS Name: ::HMUI::ColorGradientSlider*
class CORDL_TYPE ColorGradientSlider : public ::HMUI::TextSlider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x198};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x198 - sizeof(::HMUI::TextSlider)]{};

/// @brief Field _textPrefix offset 0x140
 __declspec(property(get=__get__textPrefix, put=__set__textPrefix)) ::StringW  _textPrefix;

/// @brief Field _color0 offset 0x148
 __declspec(property(get=__get__color0, put=__set__color0)) ::UnityEngine::Color  _color0;

/// @brief Field _color1 offset 0x158
 __declspec(property(get=__get__color1, put=__set__color1)) ::UnityEngine::Color  _color1;

/// @brief Field _gradientImages offset 0x168
 __declspec(property(get=__get__gradientImages, put=__set__gradientImages)) ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>  _gradientImages;

/// @brief Field _darkColor offset 0x170
 __declspec(property(get=__get__darkColor, put=__set__darkColor)) ::UnityEngine::Color  _darkColor;

/// @brief Field _lightColor offset 0x180
 __declspec(property(get=__get__lightColor, put=__set__lightColor)) ::UnityEngine::Color  _lightColor;

/// @brief Field colorDidChangeEvent offset 0x190
 __declspec(property(get=__get_colorDidChangeEvent, put=__set_colorDidChangeEvent)) ::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  colorDidChangeEvent;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

constexpr void __set__textPrefix(::StringW  value) ;

constexpr ::StringW& __get__textPrefix() ;

constexpr ::StringW const& __get__textPrefix() const;

constexpr void __set__color0(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color0() ;

constexpr ::UnityEngine::Color const& __get__color0() const;

constexpr void __set__color1(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color1() ;

constexpr ::UnityEngine::Color const& __get__color1() const;

constexpr void __set__gradientImages(::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>  value) ;

constexpr ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*>& __get__gradientImages() ;

constexpr ::ArrayW<::HMUI::ImageView*,::Array<::HMUI::ImageView*>*> const& __get__gradientImages() const;

constexpr void __set__darkColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__darkColor() ;

constexpr ::UnityEngine::Color const& __get__darkColor() const;

constexpr void __set__lightColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__lightColor() ;

constexpr ::UnityEngine::Color const& __get__lightColor() const;

constexpr void __set_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

constexpr ::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>* __get_colorDidChangeEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*> __get_colorDidChangeEvent() const;

static inline void setStaticF__stringBuilder(::System::Text::StringBuilder*  value) ;

static inline ::System::Text::StringBuilder* getStaticF__stringBuilder() ;

/// @brief Method add_colorDidChangeEvent addr 0x2121460 size 0xb4 virtual false final false
inline void add_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method remove_colorDidChangeEvent addr 0x2121514 size 0xb4 virtual false final false
inline void remove_colorDidChangeEvent(::System::Action_3<::HMUI::ColorGradientSlider*,::UnityEngine::Color,::GlobalNamespace::ColorChangeUIEventType>*  value) ;

/// @brief Method Awake addr 0x21215c8 size 0x98 virtual true final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x21217a4 size 0x8c virtual true final false
inline void OnDestroy() ;

/// @brief Method SetColors addr 0x21218e4 size 0x30 virtual false final false
inline void SetColors(::UnityEngine::Color  color0, ::UnityEngine::Color  color1) ;

/// @brief Method UpdateVisuals addr 0x2121914 size 0x1a4 virtual true final false
inline void UpdateVisuals() ;

/// @brief Method TextForNormalizedValue addr 0x2122048 size 0x1a0 virtual true final false
inline ::StringW TextForNormalizedValue(float_t  normalizedValue) ;

/// @brief Method HandleNormalizedValueDidChange addr 0x21221e8 size 0x58 virtual false final false
inline void HandleNormalizedValueDidChange(::HMUI::TextSlider*  slider, float_t  normalizedValue) ;

/// @brief Method OnPointerUp addr 0x2122240 size 0xa0 virtual true final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::HMUI::ColorGradientSlider* New_ctor() ;

/// @brief Method .ctor addr 0x21222e0 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorGradientSlider(ColorGradientSlider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorGradientSlider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorGradientSlider(ColorGradientSlider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ColorGradientSlider()  = default;
public:


// Fields

// Static field _stringBuilder


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ColorGradientSlider, 0x198>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ColorGradientSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ColorGradientSlider*, "HMUI", "ColorGradientSlider");
