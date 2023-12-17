#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HapticsAudioClipPlayer)
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
namespace System {
class Object;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class HapticsAudioClipPlayer;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer__Pool;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;
}
namespace GlobalNamespace {
class __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::HapticsAudioClipPlayer);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9);
MARK_REF_PTR_T(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11);
// Type: ::HapticsAudioClipPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14424))
// CS Name: ::HapticsAudioClipPlayer*
class CORDL_TYPE HapticsAudioClipPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _HandleOneShotPlayEndCoroutine_d__11 = ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11;

using _HandleContinuousAudioCoroutine_d__9 = ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9;

using Pool = ::GlobalNamespace::__HapticsAudioClipPlayer__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kContinuousRumbleFadeDuration offset 0x0
static constexpr float_t  kContinuousRumbleFadeDuration{0.016666668};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _baseVolume offset 0x20
 __declspec(property(get=__get__baseVolume, put=__set__baseVolume)) float_t  _baseVolume;

/// @brief Field _triggeredThisFrame offset 0x24
 __declspec(property(get=__get__triggeredThisFrame, put=__set__triggeredThisFrame)) bool  _triggeredThisFrame;

/// @brief Field _lastTriggerTime offset 0x28
 __declspec(property(get=__get__lastTriggerTime, put=__set__lastTriggerTime)) float_t  _lastTriggerTime;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__baseVolume(float_t  value) ;

constexpr float_t& __get__baseVolume() ;

constexpr float_t const& __get__baseVolume() const;

constexpr void __set__triggeredThisFrame(bool  value) ;

constexpr bool& __get__triggeredThisFrame() ;

constexpr bool const& __get__triggeredThisFrame() const;

constexpr void __set__lastTriggerTime(float_t  value) ;

constexpr float_t& __get__lastTriggerTime() ;

constexpr float_t const& __get__lastTriggerTime() const;

/// @brief Method PlayHapticsPreset addr 0x20f91e0 size 0x13c virtual false final false
inline void PlayHapticsPreset(::UnityEngine::XR::XRNode  onNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*  preset, ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  onComplete) ;

/// @brief Method TriggerContinuousHaptic addr 0x20f953c size 0x38 virtual false final false
inline void TriggerContinuousHaptic() ;

/// @brief Method RestartHaptic addr 0x20f9574 size 0x4 virtual false final false
inline void RestartHaptic() ;

/// @brief Method HandleContinuousAudioCoroutine addr 0x20f94c8 size 0x74 virtual false final false
inline ::System::Collections::IEnumerator* HandleContinuousAudioCoroutine(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  onComplete) ;

/// @brief Method UpdateFadeVolume addr 0x20f95a0 size 0x48 virtual false final false
inline void UpdateFadeVolume(float_t  timeSinceEnd) ;

/// @brief Method HandleOneShotPlayEndCoroutine addr 0x20f9454 size 0x74 virtual false final false
inline ::System::Collections::IEnumerator* HandleOneShotPlayEndCoroutine(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  onComplete) ;

/// @brief Method Reset addr 0x20f931c size 0x54 virtual false final false
inline void Reset() ;

/// @brief Method ForceStopPlaying addr 0x20f9610 size 0x2c virtual false final false
inline void ForceStopPlaying() ;

/// @brief Method Initialize addr 0x20f963c size 0x38 virtual false final false
inline void Initialize() ;

/// @brief Method GetPanForNode addr 0x20f9370 size 0xe4 virtual false final false
inline float_t GetPanForNode(::UnityEngine::XR::XRNode  node) ;

static inline ::GlobalNamespace::HapticsAudioClipPlayer* New_ctor() ;

/// @brief Method .ctor addr 0x20f9674 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <HandleOneShotPlayEndCoroutine>b__11_0 addr 0x20f967c size 0x28 virtual false final false
inline bool _HandleOneShotPlayEndCoroutine_b__11_0() ;

// Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticsAudioClipPlayer(HapticsAudioClipPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticsAudioClipPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticsAudioClipPlayer(HapticsAudioClipPlayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HapticsAudioClipPlayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::HapticsAudioClipPlayer, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11038), inst: 315 }), TypeDefinitionIndex(TypeDefinitionIndex(14424)), TypeDefinitionIndex(TypeDefinitionIndex(11038))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14421))
// CS Name: ::HapticsAudioClipPlayer::Pool*
class CORDL_TYPE __HapticsAudioClipPlayer__Pool : public ::Zenject::MemoryPool_1<::GlobalNamespace::HapticsAudioClipPlayer*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::MemoryPool_1<::GlobalNamespace::HapticsAudioClipPlayer*>)]{};

/// @brief Method OnCreated addr 0x20f96a4 size 0x14 virtual true final false
inline void OnCreated(::GlobalNamespace::HapticsAudioClipPlayer*  item) ;

/// @brief Method OnDestroyed addr 0x20f96b8 size 0x74 virtual true final false
inline void OnDestroyed(::GlobalNamespace::HapticsAudioClipPlayer*  item) ;

/// @brief Method OnDespawned addr 0x20f972c size 0x14 virtual true final false
inline void OnDespawned(::GlobalNamespace::HapticsAudioClipPlayer*  item) ;

/// @brief Method Reinitialize addr 0x20f9740 size 0x14 virtual true final false
inline void Reinitialize(::GlobalNamespace::HapticsAudioClipPlayer*  clipPlayer) ;

static inline ::GlobalNamespace::__HapticsAudioClipPlayer__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x20f9754 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HapticsAudioClipPlayer__Pool(__HapticsAudioClipPlayer__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HapticsAudioClipPlayer__Pool(__HapticsAudioClipPlayer__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HapticsAudioClipPlayer__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer__Pool, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<HandleContinuousAudioCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14422))
// CS Name: ::HapticsAudioClipPlayer::<HandleContinuousAudioCoroutine>d__9*
class CORDL_TYPE __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::HapticsAudioClipPlayer*  __4__this;

/// @brief Field onComplete offset 0x28
 __declspec(property(get=__get_onComplete, put=__set_onComplete)) ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  onComplete;

/// @brief Field <waitForLateUpdate>5__2 offset 0x30
 __declspec(property(get=__get__waitForLateUpdate_5__2, put=__set__waitForLateUpdate_5__2)) ::UnityEngine::WaitForEndOfFrame*  _waitForLateUpdate_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::HapticsAudioClipPlayer*  value) ;

constexpr ::GlobalNamespace::HapticsAudioClipPlayer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticsAudioClipPlayer*> __get___4__this() const;

constexpr void __set_onComplete(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* __get_onComplete() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*> __get_onComplete() const;

constexpr void __set__waitForLateUpdate_5__2(::UnityEngine::WaitForEndOfFrame*  value) ;

constexpr ::UnityEngine::WaitForEndOfFrame* __get__waitForLateUpdate_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForEndOfFrame*> __get__waitForLateUpdate_5__2() const;

static inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x20f9578 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f979c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f97a0 size 0x12c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f98cc size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f98d4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f9914 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9(__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<HandleOneShotPlayEndCoroutine>d__11
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14423))
// CS Name: ::HapticsAudioClipPlayer::<HandleOneShotPlayEndCoroutine>d__11*
class CORDL_TYPE __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::HapticsAudioClipPlayer*  __4__this;

/// @brief Field onComplete offset 0x28
 __declspec(property(get=__get_onComplete, put=__set_onComplete)) ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  onComplete;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::HapticsAudioClipPlayer*  value) ;

constexpr ::GlobalNamespace::HapticsAudioClipPlayer* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticsAudioClipPlayer*> __get___4__this() const;

constexpr void __set_onComplete(::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>* __get_onComplete() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::HapticsAudioClipPlayer*>*> __get_onComplete() const;

static inline ::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x20f95e8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f991c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f9920 size 0x120 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f9a40 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f9a48 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f9a88 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11(__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::HapticsAudioClipPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticsAudioClipPlayer*, "", "HapticsAudioClipPlayer");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer__Pool*, "", "HapticsAudioClipPlayer/Pool");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer___HandleContinuousAudioCoroutine_d__9*, "", "HapticsAudioClipPlayer/<HandleContinuousAudioCoroutine>d__9");
NEED_NO_BOX(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HapticsAudioClipPlayer___HandleOneShotPlayEndCoroutine_d__11*, "", "HapticsAudioClipPlayer/<HandleOneShotPlayEndCoroutine>d__11");
