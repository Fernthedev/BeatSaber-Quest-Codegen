#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongProgressUIController)
namespace UnityEngine::UI {
class Image;
}
namespace System::Text {
class StringBuilder;
}
namespace UnityEngine::UI {
class Slider;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class SongProgressUIController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongProgressUIController);
// Type: ::SongProgressUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5048))
// CS Name: ::SongProgressUIController*
class CORDL_TYPE SongProgressUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _slider offset 0x18
 __declspec(property(get=__get__slider, put=__set__slider)) ::UnityEngine::UI::Slider*  _slider;

/// @brief Field _progressImage offset 0x20
 __declspec(property(get=__get__progressImage, put=__set__progressImage)) ::UnityEngine::UI::Image*  _progressImage;

/// @brief Field _durationMinutesText offset 0x28
 __declspec(property(get=__get__durationMinutesText, put=__set__durationMinutesText)) ::TMPro::TextMeshProUGUI*  _durationMinutesText;

/// @brief Field _durationSecondsText offset 0x30
 __declspec(property(get=__get__durationSecondsText, put=__set__durationSecondsText)) ::TMPro::TextMeshProUGUI*  _durationSecondsText;

/// @brief Field _progressMinutesText offset 0x38
 __declspec(property(get=__get__progressMinutesText, put=__set__progressMinutesText)) ::TMPro::TextMeshProUGUI*  _progressMinutesText;

/// @brief Field _progressSecondsText offset 0x40
 __declspec(property(get=__get__progressSecondsText, put=__set__progressSecondsText)) ::TMPro::TextMeshProUGUI*  _progressSecondsText;

/// @brief Field _audioTimeSource offset 0x48
 __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSource;

/// @brief Field _prevMinutes offset 0x50
 __declspec(property(get=__get__prevMinutes, put=__set__prevMinutes)) int32_t  _prevMinutes;

/// @brief Field _prevSeconds offset 0x54
 __declspec(property(get=__get__prevSeconds, put=__set__prevSeconds)) int32_t  _prevSeconds;

/// @brief Field _stringBuilder offset 0x58
 __declspec(property(get=__get__stringBuilder, put=__set__stringBuilder)) ::System::Text::StringBuilder*  _stringBuilder;

/// @brief Field _progressImageRectTransform offset 0x60
 __declspec(property(get=__get__progressImageRectTransform, put=__set__progressImageRectTransform)) ::UnityEngine::RectTransform*  _progressImageRectTransform;

constexpr void __set__slider(::UnityEngine::UI::Slider*  value) ;

constexpr ::UnityEngine::UI::Slider* __get__slider() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Slider*> __get__slider() const;

constexpr void __set__progressImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__progressImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__progressImage() const;

constexpr void __set__durationMinutesText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__durationMinutesText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__durationMinutesText() const;

constexpr void __set__durationSecondsText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__durationSecondsText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__durationSecondsText() const;

constexpr void __set__progressMinutesText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__progressMinutesText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__progressMinutesText() const;

constexpr void __set__progressSecondsText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__progressSecondsText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__progressSecondsText() const;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSource() const;

constexpr void __set__prevMinutes(int32_t  value) ;

constexpr int32_t& __get__prevMinutes() ;

constexpr int32_t const& __get__prevMinutes() const;

constexpr void __set__prevSeconds(int32_t  value) ;

constexpr int32_t& __get__prevSeconds() ;

constexpr int32_t const& __get__prevSeconds() const;

constexpr void __set__stringBuilder(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get__stringBuilder() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get__stringBuilder() const;

constexpr void __set__progressImageRectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__progressImageRectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__progressImageRectTransform() const;

/// @brief Method Start addr 0x23c32f8 size 0x1a4 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x23c349c size 0x2c0 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::SongProgressUIController* New_ctor() ;

/// @brief Method .ctor addr 0x23c375c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SongProgressUIController(SongProgressUIController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SongProgressUIController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SongProgressUIController(SongProgressUIController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SongProgressUIController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongProgressUIController, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongProgressUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongProgressUIController*, "", "SongProgressUIController");
