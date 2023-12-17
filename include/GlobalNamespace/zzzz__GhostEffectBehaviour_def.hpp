#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostEffectBehaviour)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__EndBehavior;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__GhostEffectType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __GhostEffectBehaviour__EndBehavior;
}
namespace GlobalNamespace {
struct __GhostEffectBehaviour__GhostEffectType;
}
namespace GlobalNamespace {
class GhostEffectBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior);
MARK_VAL_T(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType);
MARK_REF_PTR_T(::GlobalNamespace::GhostEffectBehaviour);
// Type: ::EndBehavior
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6014))
// CS Name: ::GhostEffectBehaviour::EndBehavior
struct CORDL_TYPE __GhostEffectBehaviour__EndBehavior : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GhostEffectBehaviour__EndBehavior_Unwrapped
enum struct ____GhostEffectBehaviour__EndBehavior_Unwrapped : int32_t {
__E_DisableAll = static_cast<int32_t>(0x0),
__E_DisableCopies = static_cast<int32_t>(0x1),
__E_Nothing = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DisableAll value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const DisableAll;

/// @brief Field DisableCopies value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const DisableCopies;

/// @brief Field Nothing value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const Nothing;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GhostEffectBehaviour__EndBehavior_Unwrapped () const noexcept {
return std::bit_cast<____GhostEffectBehaviour__EndBehavior_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GhostEffectBehaviour__EndBehavior(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GhostEffectBehaviour__EndBehavior(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GhostEffectBehaviour__EndBehavior()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GhostEffectType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6015))
// CS Name: ::GhostEffectBehaviour::GhostEffectType
struct CORDL_TYPE __GhostEffectBehaviour__GhostEffectType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____GhostEffectBehaviour__GhostEffectType_Unwrapped
enum struct ____GhostEffectBehaviour__GhostEffectType_Unwrapped : int32_t {
__E_TextMeshPro = static_cast<int32_t>(0x0),
__E_Canvas = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TextMeshPro value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const TextMeshPro;

/// @brief Field Canvas value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const Canvas;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____GhostEffectBehaviour__GhostEffectType_Unwrapped () const noexcept {
return std::bit_cast<____GhostEffectBehaviour__GhostEffectType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __GhostEffectBehaviour__GhostEffectType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __GhostEffectBehaviour__GhostEffectType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __GhostEffectBehaviour__GhostEffectType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GhostEffectBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6016))
// CS Name: ::GhostEffectBehaviour*
class CORDL_TYPE GhostEffectBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using GhostEffectType = ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType;

using EndBehavior = ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa8 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field alphaCurve offset 0x10
 __declspec(property(get=__get_alphaCurve, put=__set_alphaCurve)) ::UnityEngine::AnimationCurve*  alphaCurve;

/// @brief Field sizeCurve offset 0x18
 __declspec(property(get=__get_sizeCurve, put=__set_sizeCurve)) ::UnityEngine::AnimationCurve*  sizeCurve;

/// @brief Field distanceCurve offset 0x20
 __declspec(property(get=__get_distanceCurve, put=__set_distanceCurve)) ::UnityEngine::AnimationCurve*  distanceCurve;

/// @brief Field _distanceMultiplier offset 0x28
 __declspec(property(get=__get__distanceMultiplier, put=__set__distanceMultiplier)) ::UnityEngine::Vector3  _distanceMultiplier;

/// @brief Field _useStartTransform offset 0x34
 __declspec(property(get=__get__useStartTransform, put=__set__useStartTransform)) bool  _useStartTransform;

/// @brief Field _useEndTransform offset 0x35
 __declspec(property(get=__get__useEndTransform, put=__set__useEndTransform)) bool  _useEndTransform;

/// @brief Field _startLocalPosition offset 0x38
 __declspec(property(get=__get__startLocalPosition, put=__set__startLocalPosition)) ::UnityEngine::Vector3  _startLocalPosition;

/// @brief Field _startTransform offset 0x48
 __declspec(property(get=__get__startTransform, put=__set__startTransform)) ::UnityEngine::Transform*  _startTransform;

/// @brief Field _endLocalPosition offset 0x50
 __declspec(property(get=__get__endLocalPosition, put=__set__endLocalPosition)) ::UnityEngine::Vector3  _endLocalPosition;

/// @brief Field _endTransform offset 0x60
 __declspec(property(get=__get__endTransform, put=__set__endTransform)) ::UnityEngine::Transform*  _endTransform;

/// @brief Field _positionEasing offset 0x68
 __declspec(property(get=__get__positionEasing, put=__set__positionEasing)) ::GlobalNamespace::EaseType  _positionEasing;

/// @brief Field _endBehavior offset 0x6c
 __declspec(property(get=__get__endBehavior, put=__set__endBehavior)) ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  _endBehavior;

/// @brief Field progress offset 0x70
 __declspec(property(get=__get_progress, put=__set_progress)) float_t  progress;

/// @brief Field textMeshPros offset 0x78
 __declspec(property(get=__get_textMeshPros, put=__set_textMeshPros)) ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  textMeshPros;

/// @brief Field _canvasGroups offset 0x80
 __declspec(property(get=__get__canvasGroups, put=__set__canvasGroups)) ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  _canvasGroups;

/// @brief Field _ghostEffectType offset 0x88
 __declspec(property(get=__get__ghostEffectType, put=__set__ghostEffectType)) ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  _ghostEffectType;

/// @brief Field _ghostEffectTransform offset 0x90
 __declspec(property(get=__get__ghostEffectTransform, put=__set__ghostEffectTransform)) ::UnityEngine::Transform*  _ghostEffectTransform;

/// @brief Field _direction offset 0x98
 __declspec(property(get=__get__direction, put=__set__direction)) ::UnityEngine::Vector3  _direction;

/// @brief Field _finished offset 0xa4
 __declspec(property(get=__get__finished, put=__set__finished)) bool  _finished;

constexpr void __set_alphaCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_alphaCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_alphaCurve() const;

constexpr void __set_sizeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_sizeCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_sizeCurve() const;

constexpr void __set_distanceCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get_distanceCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get_distanceCurve() const;

constexpr void __set__distanceMultiplier(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__distanceMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __get__distanceMultiplier() const;

constexpr void __set__useStartTransform(bool  value) ;

constexpr bool& __get__useStartTransform() ;

constexpr bool const& __get__useStartTransform() const;

constexpr void __set__useEndTransform(bool  value) ;

constexpr bool& __get__useEndTransform() ;

constexpr bool const& __get__useEndTransform() const;

constexpr void __set__startLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__startLocalPosition() const;

constexpr void __set__startTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__startTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__startTransform() const;

constexpr void __set__endLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__endLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__endLocalPosition() const;

constexpr void __set__endTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__endTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__endTransform() const;

constexpr void __set__positionEasing(::GlobalNamespace::EaseType  value) ;

constexpr ::GlobalNamespace::EaseType& __get__positionEasing() ;

constexpr ::GlobalNamespace::EaseType const& __get__positionEasing() const;

constexpr void __set__endBehavior(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior  value) ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior& __get__endBehavior() ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__EndBehavior const& __get__endBehavior() const;

constexpr void __set_progress(float_t  value) ;

constexpr float_t& __get_progress() ;

constexpr float_t const& __get_progress() const;

constexpr void __set_textMeshPros(::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>  value) ;

constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*>& __get_textMeshPros() ;

constexpr ::ArrayW<::TMPro::TextMeshPro*,::Array<::TMPro::TextMeshPro*>*> const& __get_textMeshPros() const;

constexpr void __set__canvasGroups(::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*>& __get__canvasGroups() ;

constexpr ::ArrayW<::UnityEngine::CanvasGroup*,::Array<::UnityEngine::CanvasGroup*>*> const& __get__canvasGroups() const;

constexpr void __set__ghostEffectType(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType  value) ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType& __get__ghostEffectType() ;

constexpr ::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType const& __get__ghostEffectType() const;

constexpr void __set__ghostEffectTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__ghostEffectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__ghostEffectTransform() const;

constexpr void __set__direction(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__direction() ;

constexpr ::UnityEngine::Vector3 const& __get__direction() const;

constexpr void __set__finished(bool  value) ;

constexpr bool& __get__finished() ;

constexpr bool const& __get__finished() const;

/// @brief Method OnBehaviourPlay addr 0x2317380 size 0x190 virtual true final false
inline void OnBehaviourPlay(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info) ;

/// @brief Method ProcessFrame addr 0x2317624 size 0x438 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method EnableObjects addr 0x2317510 size 0x114 virtual false final false
inline void EnableObjects(bool  on) ;

static inline ::GlobalNamespace::GhostEffectBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2317a5c size 0xd0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostEffectBehaviour(GhostEffectBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostEffectBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostEffectBehaviour(GhostEffectBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GhostEffectBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GhostEffectBehaviour, 0xa8>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostEffectBehaviour__EndBehavior, "", "GhostEffectBehaviour/EndBehavior");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GhostEffectBehaviour__GhostEffectType, "", "GhostEffectBehaviour/GhostEffectType");
NEED_NO_BOX(::GlobalNamespace::GhostEffectBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GhostEffectBehaviour*, "", "GhostEffectBehaviour");
