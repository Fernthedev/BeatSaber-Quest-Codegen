#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VisualMetronome)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class VisualMetronome;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VisualMetronome);
// Type: ::VisualMetronome
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5407))
// CS Name: ::VisualMetronome*
class CORDL_TYPE VisualMetronome : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _leftPadding offset 0x20
 __declspec(property(get=__get__leftPadding, put=__set__leftPadding)) float_t  _leftPadding;

/// @brief Field _rightPadding offset 0x24
 __declspec(property(get=__get__rightPadding, put=__set__rightPadding)) float_t  _rightPadding;

/// @brief Field _ticker offset 0x28
 __declspec(property(get=__get__ticker, put=__set__ticker)) ::UnityEngine::RectTransform*  _ticker;

/// @brief Field _movingTicker offset 0x30
 __declspec(property(get=__get__movingTicker, put=__set__movingTicker)) ::UnityEngine::RectTransform*  _movingTicker;

/// @brief Field _tickerImage offset 0x38
 __declspec(property(get=__get__tickerImage, put=__set__tickerImage)) ::UnityEngine::UI::Image*  _tickerImage;

/// @brief Field _movingTickerImage offset 0x40
 __declspec(property(get=__get__movingTickerImage, put=__set__movingTickerImage)) ::UnityEngine::UI::Image*  _movingTickerImage;

/// @brief Field _metronomeInterval offset 0x48
 __declspec(property(get=__get__metronomeInterval, put=__set__metronomeInterval)) float_t  _metronomeInterval;

/// @brief Field _normalTickerSize offset 0x4c
 __declspec(property(get=__get__normalTickerSize, put=__set__normalTickerSize)) ::UnityEngine::Vector2  _normalTickerSize;

/// @brief Field _tickTickerSize0 offset 0x54
 __declspec(property(get=__get__tickTickerSize0, put=__set__tickTickerSize0)) ::UnityEngine::Vector2  _tickTickerSize0;

/// @brief Field _tickTickerSize1 offset 0x5c
 __declspec(property(get=__get__tickTickerSize1, put=__set__tickTickerSize1)) ::UnityEngine::Vector2  _tickTickerSize1;

/// @brief Field _smooth offset 0x64
 __declspec(property(get=__get__smooth, put=__set__smooth)) float_t  _smooth;

/// @brief Field _prevAudioTime offset 0x68
 __declspec(property(get=__get__prevAudioTime, put=__set__prevAudioTime)) float_t  _prevAudioTime;

/// @brief Field _zeroOffset offset 0x6c
 __declspec(property(get=__get__zeroOffset, put=__set__zeroOffset)) float_t  _zeroOffset;

/// @brief Field _direction offset 0x70
 __declspec(property(get=__get__direction, put=__set__direction)) float_t  _direction;

/// @brief Field _dontTickThisFrame offset 0x74
 __declspec(property(get=__get__dontTickThisFrame, put=__set__dontTickThisFrame)) bool  _dontTickThisFrame;

 __declspec(property(put=set_tickerColor)) ::UnityEngine::Color  tickerColor;

 __declspec(property(put=set_movingTickerColor)) ::UnityEngine::Color  movingTickerColor;

 __declspec(property(get=get_zeroOffset, put=set_zeroOffset)) float_t  zeroOffset;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__leftPadding(float_t  value) ;

constexpr float_t& __get__leftPadding() ;

constexpr float_t const& __get__leftPadding() const;

constexpr void __set__rightPadding(float_t  value) ;

constexpr float_t& __get__rightPadding() ;

constexpr float_t const& __get__rightPadding() const;

constexpr void __set__ticker(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__ticker() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__ticker() const;

constexpr void __set__movingTicker(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__movingTicker() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__movingTicker() const;

constexpr void __set__tickerImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__tickerImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__tickerImage() const;

constexpr void __set__movingTickerImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__movingTickerImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__movingTickerImage() const;

constexpr void __set__metronomeInterval(float_t  value) ;

constexpr float_t& __get__metronomeInterval() ;

constexpr float_t const& __get__metronomeInterval() const;

constexpr void __set__normalTickerSize(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__normalTickerSize() ;

constexpr ::UnityEngine::Vector2 const& __get__normalTickerSize() const;

constexpr void __set__tickTickerSize0(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__tickTickerSize0() ;

constexpr ::UnityEngine::Vector2 const& __get__tickTickerSize0() const;

constexpr void __set__tickTickerSize1(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get__tickTickerSize1() ;

constexpr ::UnityEngine::Vector2 const& __get__tickTickerSize1() const;

constexpr void __set__smooth(float_t  value) ;

constexpr float_t& __get__smooth() ;

constexpr float_t const& __get__smooth() const;

constexpr void __set__prevAudioTime(float_t  value) ;

constexpr float_t& __get__prevAudioTime() ;

constexpr float_t const& __get__prevAudioTime() const;

constexpr void __set__zeroOffset(float_t  value) ;

constexpr float_t& __get__zeroOffset() ;

constexpr float_t const& __get__zeroOffset() const;

constexpr void __set__direction(float_t  value) ;

constexpr float_t& __get__direction() ;

constexpr float_t const& __get__direction() const;

constexpr void __set__dontTickThisFrame(bool  value) ;

constexpr bool& __get__dontTickThisFrame() ;

constexpr bool const& __get__dontTickThisFrame() const;

/// @brief Method set_tickerColor addr 0x2274738 size 0x24 virtual false final false
inline void set_tickerColor(::UnityEngine::Color  value) ;

/// @brief Method set_movingTickerColor addr 0x227475c size 0x24 virtual false final false
inline void set_movingTickerColor(::UnityEngine::Color  value) ;

/// @brief Method set_zeroOffset addr 0x2274780 size 0x10 virtual false final false
inline void set_zeroOffset(float_t  value) ;

/// @brief Method get_zeroOffset addr 0x2274790 size 0x8 virtual false final false
inline float_t get_zeroOffset() ;

/// @brief Method Awake addr 0x2274798 size 0x98 virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2274830 size 0x48 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2274878 size 0x48 virtual false final false
inline void OnDisable() ;

/// @brief Method Update addr 0x22748c0 size 0x150 virtual false final false
inline void Update() ;

/// @brief Method SetMovingTickerNormalizedPosition addr 0x2274a10 size 0xc8 virtual false final false
inline void SetMovingTickerNormalizedPosition(float_t  t) ;

static inline ::GlobalNamespace::VisualMetronome* New_ctor() ;

/// @brief Method .ctor addr 0x2274ad8 size 0x3c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualMetronome(VisualMetronome && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualMetronome", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualMetronome(VisualMetronome const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VisualMetronome()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VisualMetronome, 0x78>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VisualMetronome);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VisualMetronome*, "", "VisualMetronome");
