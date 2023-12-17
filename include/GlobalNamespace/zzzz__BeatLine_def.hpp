#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BeatLine)
namespace GlobalNamespace {
struct __BeatLine__HighlightData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __BeatLine__Pool;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatLine;
}
namespace GlobalNamespace {
class __BeatLine__Pool;
}
namespace GlobalNamespace {
struct __BeatLine__HighlightData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatLine);
MARK_REF_PTR_T(::GlobalNamespace::__BeatLine__Pool);
MARK_VAL_T(::GlobalNamespace::__BeatLine__HighlightData);
// Type: ::BeatLine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4700))
// CS Name: ::BeatLine*
class CORDL_TYPE BeatLine : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using HighlightData = ::GlobalNamespace::__BeatLine__HighlightData;

using Pool = ::GlobalNamespace::__BeatLine__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _tubeBloomPrePassLight offset 0x30
 __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _tubeBloomPrePassLight;

/// @brief Field _arriveFadeCurve offset 0x38
 __declspec(property(get=__get__arriveFadeCurve, put=__set__arriveFadeCurve)) ::UnityEngine::AnimationCurve*  _arriveFadeCurve;

/// @brief Field _jumpFadeCurve offset 0x40
 __declspec(property(get=__get__jumpFadeCurve, put=__set__jumpFadeCurve)) ::UnityEngine::AnimationCurve*  _jumpFadeCurve;

/// @brief Field _alphaMul offset 0x48
 __declspec(property(get=__get__alphaMul, put=__set__alphaMul)) float_t  _alphaMul;

/// @brief Field _maxAlpha offset 0x4c
 __declspec(property(get=__get__maxAlpha, put=__set__maxAlpha)) float_t  _maxAlpha;

/// @brief Field _highlights offset 0x50
 __declspec(property(get=__get__highlights, put=__set__highlights)) ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>*  _highlights;

/// @brief Field _color offset 0x58
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _rotation offset 0x68
 __declspec(property(get=__get__rotation, put=__set__rotation)) float_t  _rotation;

 __declspec(property(get=get_isFinished)) bool  isFinished;

 __declspec(property(get=get_rotation)) float_t  rotation;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__tubeBloomPrePassLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__tubeBloomPrePassLight() const;

constexpr void __set__arriveFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__arriveFadeCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__arriveFadeCurve() const;

constexpr void __set__jumpFadeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__jumpFadeCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__jumpFadeCurve() const;

constexpr void __set__alphaMul(float_t  value) ;

constexpr float_t& __get__alphaMul() ;

constexpr float_t const& __get__alphaMul() const;

constexpr void __set__maxAlpha(float_t  value) ;

constexpr float_t& __get__maxAlpha() ;

constexpr float_t const& __get__maxAlpha() const;

constexpr void __set__highlights(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>* __get__highlights() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatLine__HighlightData>*> __get__highlights() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__rotation(float_t  value) ;

constexpr float_t& __get__rotation() ;

constexpr float_t const& __get__rotation() const;

/// @brief Method get_isFinished addr 0x2376a3c size 0x50 virtual false final false
inline bool get_isFinished() ;

/// @brief Method get_rotation addr 0x2376a8c size 0x8 virtual false final false
inline float_t get_rotation() ;

/// @brief Method Init addr 0x2376a94 size 0xcc virtual false final false
inline void Init(::UnityEngine::Vector3  position, float_t  rotation) ;

/// @brief Method ColorWasSet addr 0x2376b60 size 0xc virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

/// @brief Method AddHighlight addr 0x2376b6c size 0xdc virtual false final false
inline void AddHighlight(float_t  startTime, float_t  arriveDuration, float_t  jumpDuration) ;

/// @brief Method ManualUpdate addr 0x2376c48 size 0x14c virtual false final false
inline void ManualUpdate(float_t  songTime) ;

static inline ::GlobalNamespace::BeatLine* New_ctor() ;

/// @brief Method .ctor addr 0x2376d94 size 0xcc virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatLine(BeatLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatLine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatLine(BeatLine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatLine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatLine, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2809 }), TypeDefinitionIndex(TypeDefinitionIndex(4700)), TypeDefinitionIndex(TypeDefinitionIndex(11050))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4698))
// CS Name: ::BeatLine::Pool*
class CORDL_TYPE __BeatLine__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatLine*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatLine*>)]{};

static inline ::GlobalNamespace::__BeatLine__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2376e60 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatLine__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatLine__Pool(__BeatLine__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatLine__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatLine__Pool(__BeatLine__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatLine__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatLine__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::HighlightData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4699))
// CS Name: ::BeatLine::HighlightData
struct CORDL_TYPE __BeatLine__HighlightData : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field startTime offset 0x0
 __declspec(property(get=__get_startTime, put=__set_startTime)) float_t  startTime;

/// @brief Field arriveDuration offset 0x4
 __declspec(property(get=__get_arriveDuration, put=__set_arriveDuration)) float_t  arriveDuration;

/// @brief Field halfJumpDuration offset 0x8
 __declspec(property(get=__get_halfJumpDuration, put=__set_halfJumpDuration)) float_t  halfJumpDuration;

constexpr void __set_startTime(float_t  value) ;

constexpr float_t& __get_startTime() ;

constexpr float_t const& __get_startTime() const;

constexpr void __set_arriveDuration(float_t  value) ;

constexpr float_t& __get_arriveDuration() ;

constexpr float_t const& __get_arriveDuration() const;

constexpr void __set_halfJumpDuration(float_t  value) ;

constexpr float_t& __get_halfJumpDuration() ;

constexpr float_t const& __get_halfJumpDuration() const;

// Ctor Parameters [CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "arriveDuration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "halfJumpDuration", ty: "float_t", modifiers: "", def_value: None }]
constexpr __BeatLine__HighlightData(float_t  startTime, float_t  arriveDuration, float_t  halfJumpDuration) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __BeatLine__HighlightData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __BeatLine__HighlightData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatLine__HighlightData, 0xc>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatLine);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatLine*, "", "BeatLine");
NEED_NO_BOX(::GlobalNamespace::__BeatLine__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatLine__Pool*, "", "BeatLine/Pool");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatLine__HighlightData, "", "BeatLine/HighlightData");
