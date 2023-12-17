#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderMovement)
namespace System {
class Action;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMovement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SliderMovement);
// Type: ::SliderMovement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4824))
// CS Name: ::SliderMovement*
class CORDL_TYPE SliderMovement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioTimeSyncController offset 0x18
 __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource*  _audioTimeSyncController;

/// @brief Field _playerTransforms offset 0x20
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field movementDidFinishEvent offset 0x28
 __declspec(property(get=__get_movementDidFinishEvent, put=__set_movementDidFinishEvent)) ::System::Action*  movementDidFinishEvent;

/// @brief Field movementDidMoveEvent offset 0x30
 __declspec(property(get=__get_movementDidMoveEvent, put=__set_movementDidMoveEvent)) ::System::Action_1<float_t>*  movementDidMoveEvent;

/// @brief Field headDidMovePastCutMarkEvent offset 0x38
 __declspec(property(get=__get_headDidMovePastCutMarkEvent, put=__set_headDidMovePastCutMarkEvent)) ::System::Action*  headDidMovePastCutMarkEvent;

/// @brief Field tailDidMovePastCutMarkEvent offset 0x40
 __declspec(property(get=__get_tailDidMovePastCutMarkEvent, put=__set_tailDidMovePastCutMarkEvent)) ::System::Action*  tailDidMovePastCutMarkEvent;

/// @brief Field _headNoteJumpStartPos offset 0x48
 __declspec(property(get=__get__headNoteJumpStartPos, put=__set__headNoteJumpStartPos)) ::UnityEngine::Vector3  _headNoteJumpStartPos;

/// @brief Field _headNoteJumpEndPos offset 0x54
 __declspec(property(get=__get__headNoteJumpEndPos, put=__set__headNoteJumpEndPos)) ::UnityEngine::Vector3  _headNoteJumpEndPos;

/// @brief Field _headNoteTime offset 0x60
 __declspec(property(get=__get__headNoteTime, put=__set__headNoteTime)) float_t  _headNoteTime;

/// @brief Field _tailNoteTime offset 0x64
 __declspec(property(get=__get__tailNoteTime, put=__set__tailNoteTime)) float_t  _tailNoteTime;

/// @brief Field _localPosition offset 0x68
 __declspec(property(get=__get__localPosition, put=__set__localPosition)) ::UnityEngine::Vector3  _localPosition;

/// @brief Field _worldRotation offset 0x74
 __declspec(property(get=__get__worldRotation, put=__set__worldRotation)) ::UnityEngine::Quaternion  _worldRotation;

/// @brief Field _inverseWorldRotation offset 0x84
 __declspec(property(get=__get__inverseWorldRotation, put=__set__inverseWorldRotation)) ::UnityEngine::Quaternion  _inverseWorldRotation;

/// @brief Field _jumpDuration offset 0x94
 __declspec(property(get=__get__jumpDuration, put=__set__jumpDuration)) float_t  _jumpDuration;

/// @brief Field _headNoteGravity offset 0x98
 __declspec(property(get=__get__headNoteGravity, put=__set__headNoteGravity)) float_t  _headNoteGravity;

/// @brief Field _tailNoteGravity offset 0x9c
 __declspec(property(get=__get__tailNoteGravity, put=__set__tailNoteGravity)) float_t  _tailNoteGravity;

/// @brief Field _transform offset 0xa0
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _movementEndReported offset 0xa8
 __declspec(property(get=__get__movementEndReported, put=__set__movementEndReported)) bool  _movementEndReported;

/// @brief Field _headDidMovePastCutMarkReported offset 0xa9
 __declspec(property(get=__get__headDidMovePastCutMarkReported, put=__set__headDidMovePastCutMarkReported)) bool  _headDidMovePastCutMarkReported;

/// @brief Field _tailDidMovePastCutMarkReported offset 0xaa
 __declspec(property(get=__get__tailDidMovePastCutMarkReported, put=__set__tailDidMovePastCutMarkReported)) bool  _tailDidMovePastCutMarkReported;

/// @brief Field _timeSinceHeadNoteJump offset 0xac
 __declspec(property(get=__get__timeSinceHeadNoteJump, put=__set__timeSinceHeadNoteJump)) float_t  _timeSinceHeadNoteJump;

 __declspec(property(get=get_jumpDuration)) float_t  jumpDuration;

 __declspec(property(get=get_headNoteGravity)) float_t  headNoteGravity;

 __declspec(property(get=get_tailNoteGravity)) float_t  tailNoteGravity;

 __declspec(property(get=get_timeSinceHeadNoteJump)) float_t  timeSinceHeadNoteJump;

constexpr void __set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource*  value) ;

constexpr ::GlobalNamespace::IAudioTimeSource* __get__audioTimeSyncController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> __get__audioTimeSyncController() const;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set_movementDidFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_movementDidFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_movementDidFinishEvent() const;

constexpr void __set_movementDidMoveEvent(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_movementDidMoveEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_movementDidMoveEvent() const;

constexpr void __set_headDidMovePastCutMarkEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_headDidMovePastCutMarkEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_headDidMovePastCutMarkEvent() const;

constexpr void __set_tailDidMovePastCutMarkEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_tailDidMovePastCutMarkEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_tailDidMovePastCutMarkEvent() const;

constexpr void __set__headNoteJumpStartPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__headNoteJumpStartPos() ;

constexpr ::UnityEngine::Vector3 const& __get__headNoteJumpStartPos() const;

constexpr void __set__headNoteJumpEndPos(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__headNoteJumpEndPos() ;

constexpr ::UnityEngine::Vector3 const& __get__headNoteJumpEndPos() const;

constexpr void __set__headNoteTime(float_t  value) ;

constexpr float_t& __get__headNoteTime() ;

constexpr float_t const& __get__headNoteTime() const;

constexpr void __set__tailNoteTime(float_t  value) ;

constexpr float_t& __get__tailNoteTime() ;

constexpr float_t const& __get__tailNoteTime() const;

constexpr void __set__localPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__localPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__localPosition() const;

constexpr void __set__worldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__worldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__worldRotation() const;

constexpr void __set__inverseWorldRotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__inverseWorldRotation() ;

constexpr ::UnityEngine::Quaternion const& __get__inverseWorldRotation() const;

constexpr void __set__jumpDuration(float_t  value) ;

constexpr float_t& __get__jumpDuration() ;

constexpr float_t const& __get__jumpDuration() const;

constexpr void __set__headNoteGravity(float_t  value) ;

constexpr float_t& __get__headNoteGravity() ;

constexpr float_t const& __get__headNoteGravity() const;

constexpr void __set__tailNoteGravity(float_t  value) ;

constexpr float_t& __get__tailNoteGravity() ;

constexpr float_t const& __get__tailNoteGravity() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__movementEndReported(bool  value) ;

constexpr bool& __get__movementEndReported() ;

constexpr bool const& __get__movementEndReported() const;

constexpr void __set__headDidMovePastCutMarkReported(bool  value) ;

constexpr bool& __get__headDidMovePastCutMarkReported() ;

constexpr bool const& __get__headDidMovePastCutMarkReported() const;

constexpr void __set__tailDidMovePastCutMarkReported(bool  value) ;

constexpr bool& __get__tailDidMovePastCutMarkReported() ;

constexpr bool const& __get__tailDidMovePastCutMarkReported() const;

constexpr void __set__timeSinceHeadNoteJump(float_t  value) ;

constexpr float_t& __get__timeSinceHeadNoteJump() ;

constexpr float_t const& __get__timeSinceHeadNoteJump() const;

/// @brief Method add_movementDidFinishEvent addr 0x2390d50 size 0x9c virtual false final false
inline void add_movementDidFinishEvent(::System::Action*  value) ;

/// @brief Method remove_movementDidFinishEvent addr 0x23913b8 size 0x9c virtual false final false
inline void remove_movementDidFinishEvent(::System::Action*  value) ;

/// @brief Method add_movementDidMoveEvent addr 0x2394dc4 size 0xb0 virtual false final false
inline void add_movementDidMoveEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method remove_movementDidMoveEvent addr 0x2394e74 size 0xb0 virtual false final false
inline void remove_movementDidMoveEvent(::System::Action_1<float_t>*  value) ;

/// @brief Method add_headDidMovePastCutMarkEvent addr 0x2390dec size 0x9c virtual false final false
inline void add_headDidMovePastCutMarkEvent(::System::Action*  value) ;

/// @brief Method remove_headDidMovePastCutMarkEvent addr 0x2391454 size 0x9c virtual false final false
inline void remove_headDidMovePastCutMarkEvent(::System::Action*  value) ;

/// @brief Method add_tailDidMovePastCutMarkEvent addr 0x2390e88 size 0x9c virtual false final false
inline void add_tailDidMovePastCutMarkEvent(::System::Action*  value) ;

/// @brief Method remove_tailDidMovePastCutMarkEvent addr 0x23914f0 size 0x9c virtual false final false
inline void remove_tailDidMovePastCutMarkEvent(::System::Action*  value) ;

/// @brief Method get_jumpDuration addr 0x2394f24 size 0x8 virtual false final false
inline float_t get_jumpDuration() ;

/// @brief Method get_headNoteGravity addr 0x2394f2c size 0x8 virtual false final false
inline float_t get_headNoteGravity() ;

/// @brief Method get_tailNoteGravity addr 0x2394f34 size 0x8 virtual false final false
inline float_t get_tailNoteGravity() ;

/// @brief Method get_timeSinceHeadNoteJump addr 0x2394f3c size 0x8 virtual false final false
inline float_t get_timeSinceHeadNoteJump() ;

/// @brief Method Init addr 0x238ff38 size 0xf0 virtual false final false
inline void Init(float_t  headNoteTime, float_t  tailNoteTime, float_t  worldRotation, ::UnityEngine::Vector3  headNoteJumpStartPos, ::UnityEngine::Vector3  headNoteJumpEndPos, float_t  jumpDuration, float_t  headNoteGravity, float_t  tailNoteGravity) ;

/// @brief Method StartMovement addr 0x2390bc8 size 0x28 virtual false final false
inline void StartMovement() ;

/// @brief Method ManualUpdate addr 0x23916f8 size 0x20c virtual false final false
inline void ManualUpdate() ;

static inline ::GlobalNamespace::SliderMovement* New_ctor() ;

/// @brief Method .ctor addr 0x2394f44 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderMovement(SliderMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderMovement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderMovement(SliderMovement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SliderMovement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SliderMovement, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SliderMovement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMovement*, "", "SliderMovement");
