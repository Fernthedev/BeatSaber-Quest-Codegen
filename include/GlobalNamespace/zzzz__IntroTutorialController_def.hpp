#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntroTutorialController)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IntroTutorialRing;
}
namespace GlobalNamespace {
class __IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
namespace GlobalNamespace {
class BloomFogParamsAnimator;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class IntroTutorialController;
}
namespace GlobalNamespace {
class __IntroTutorialController___ShowFinishAnimationCoroutine_d__22;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntroTutorialController);
MARK_REF_PTR_T(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22);
// Type: ::<ShowFinishAnimationCoroutine>d__22
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5335))
// CS Name: ::IntroTutorialController::<ShowFinishAnimationCoroutine>d__22*
class CORDL_TYPE __IntroTutorialController___ShowFinishAnimationCoroutine_d__22 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::IntroTutorialController*  __4__this;

/// @brief Field <elapsedTime>5__2 offset 0x28
 __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

/// @brief Field <duration>5__3 offset 0x2c
 __declspec(property(get=__get__duration_5__3, put=__set__duration_5__3)) float_t  _duration_5__3;

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

constexpr void __set___4__this(::GlobalNamespace::IntroTutorialController*  value) ;

constexpr ::GlobalNamespace::IntroTutorialController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntroTutorialController*> __get___4__this() const;

constexpr void __set__elapsedTime_5__2(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__2() ;

constexpr float_t const& __get__elapsedTime_5__2() const;

constexpr void __set__duration_5__3(float_t  value) ;

constexpr float_t& __get__duration_5__3() ;

constexpr float_t const& __get__duration_5__3() const;

static inline ::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x226919c size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2269254 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2269258 size 0x134 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x226938c size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2269394 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22693d4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IntroTutorialController___ShowFinishAnimationCoroutine_d__22(__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IntroTutorialController___ShowFinishAnimationCoroutine_d__22", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IntroTutorialController___ShowFinishAnimationCoroutine_d__22(__IntroTutorialController___ShowFinishAnimationCoroutine_d__22 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IntroTutorialController___ShowFinishAnimationCoroutine_d__22()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::IntroTutorialController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5336))
// CS Name: ::IntroTutorialController*
class CORDL_TYPE IntroTutorialController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _ShowFinishAnimationCoroutine_d__22 = ::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _redRing offset 0x18
 __declspec(property(get=__get__redRing, put=__set__redRing)) ::GlobalNamespace::IntroTutorialRing*  _redRing;

/// @brief Field _blueRing offset 0x20
 __declspec(property(get=__get__blueRing, put=__set__blueRing)) ::GlobalNamespace::IntroTutorialRing*  _blueRing;

/// @brief Field _redRingWrapper offset 0x28
 __declspec(property(get=__get__redRingWrapper, put=__set__redRingWrapper)) ::UnityEngine::GameObject*  _redRingWrapper;

/// @brief Field _blueRingWrapper offset 0x30
 __declspec(property(get=__get__blueRingWrapper, put=__set__blueRingWrapper)) ::UnityEngine::GameObject*  _blueRingWrapper;

/// @brief Field _textCanvasGroup offset 0x38
 __declspec(property(get=__get__textCanvasGroup, put=__set__textCanvasGroup)) ::UnityEngine::CanvasGroup*  _textCanvasGroup;

/// @brief Field _shockWavePS offset 0x40
 __declspec(property(get=__get__shockWavePS, put=__set__shockWavePS)) ::UnityEngine::ParticleSystem*  _shockWavePS;

/// @brief Field _finishForParams offset 0x48
 __declspec(property(get=__get__finishForParams, put=__set__finishForParams)) ::GlobalNamespace::BloomFogEnvironmentParams*  _finishForParams;

/// @brief Field _bloomFogAnimator offset 0x50
 __declspec(property(get=__get__bloomFogAnimator, put=__set__bloomFogAnimator)) ::GlobalNamespace::BloomFogParamsAnimator*  _bloomFogAnimator;

/// @brief Field _gamePause offset 0x58
 __declspec(property(get=__get__gamePause, put=__set__gamePause)) ::GlobalNamespace::IGamePause*  _gamePause;

/// @brief Field introTutorialDidFinishEvent offset 0x60
 __declspec(property(get=__get_introTutorialDidFinishEvent, put=__set_introTutorialDidFinishEvent)) ::System::Action*  introTutorialDidFinishEvent;

/// @brief Field _showingFinishAnimation offset 0x68
 __declspec(property(get=__get__showingFinishAnimation, put=__set__showingFinishAnimation)) bool  _showingFinishAnimation;

/// @brief Field _redRingWrapperActive offset 0x69
 __declspec(property(get=__get__redRingWrapperActive, put=__set__redRingWrapperActive)) bool  _redRingWrapperActive;

/// @brief Field _blueRingWrapperActive offset 0x6a
 __declspec(property(get=__get__blueRingWrapperActive, put=__set__blueRingWrapperActive)) bool  _blueRingWrapperActive;

constexpr void __set__redRing(::GlobalNamespace::IntroTutorialRing*  value) ;

constexpr ::GlobalNamespace::IntroTutorialRing* __get__redRing() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntroTutorialRing*> __get__redRing() const;

constexpr void __set__blueRing(::GlobalNamespace::IntroTutorialRing*  value) ;

constexpr ::GlobalNamespace::IntroTutorialRing* __get__blueRing() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntroTutorialRing*> __get__blueRing() const;

constexpr void __set__redRingWrapper(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__redRingWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__redRingWrapper() const;

constexpr void __set__blueRingWrapper(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__blueRingWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__blueRingWrapper() const;

constexpr void __set__textCanvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__textCanvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__textCanvasGroup() const;

constexpr void __set__shockWavePS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__shockWavePS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__shockWavePS() const;

constexpr void __set__finishForParams(::GlobalNamespace::BloomFogEnvironmentParams*  value) ;

constexpr ::GlobalNamespace::BloomFogEnvironmentParams* __get__finishForParams() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> __get__finishForParams() const;

constexpr void __set__bloomFogAnimator(::GlobalNamespace::BloomFogParamsAnimator*  value) ;

constexpr ::GlobalNamespace::BloomFogParamsAnimator* __get__bloomFogAnimator() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogParamsAnimator*> __get__bloomFogAnimator() const;

constexpr void __set__gamePause(::GlobalNamespace::IGamePause*  value) ;

constexpr ::GlobalNamespace::IGamePause* __get__gamePause() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IGamePause*> __get__gamePause() const;

constexpr void __set_introTutorialDidFinishEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_introTutorialDidFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_introTutorialDidFinishEvent() const;

constexpr void __set__showingFinishAnimation(bool  value) ;

constexpr bool& __get__showingFinishAnimation() ;

constexpr bool const& __get__showingFinishAnimation() const;

constexpr void __set__redRingWrapperActive(bool  value) ;

constexpr bool& __get__redRingWrapperActive() ;

constexpr bool const& __get__redRingWrapperActive() const;

constexpr void __set__blueRingWrapperActive(bool  value) ;

constexpr bool& __get__blueRingWrapperActive() ;

constexpr bool const& __get__blueRingWrapperActive() const;

/// @brief Method add_introTutorialDidFinishEvent addr 0x2268ae8 size 0x9c virtual false final false
inline void add_introTutorialDidFinishEvent(::System::Action*  value) ;

/// @brief Method remove_introTutorialDidFinishEvent addr 0x2268b84 size 0x9c virtual false final false
inline void remove_introTutorialDidFinishEvent(::System::Action*  value) ;

/// @brief Method Start addr 0x2268c20 size 0x194 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x2268db4 size 0x4 virtual false final false
inline void OnDestroy() ;

/// @brief Method Update addr 0x2268f5c size 0x90 virtual false final false
inline void Update() ;

/// @brief Method CleanUp addr 0x2268db8 size 0x1a4 virtual false final false
inline void CleanUp() ;

/// @brief Method HandleGameDidPause addr 0x226908c size 0x70 virtual false final false
inline void HandleGameDidPause() ;

/// @brief Method HandlegameDidResume addr 0x22690fc size 0x38 virtual false final false
inline void HandlegameDidResume() ;

/// @brief Method ShowFinishAnimation addr 0x2269010 size 0x7c virtual false final false
inline void ShowFinishAnimation() ;

/// @brief Method ShowFinishAnimationCoroutine addr 0x2269134 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* ShowFinishAnimationCoroutine() ;

/// @brief Method SetFinishAnimationParams addr 0x22691c4 size 0x6c virtual false final false
inline void SetFinishAnimationParams(float_t  progress) ;

static inline ::GlobalNamespace::IntroTutorialController* New_ctor() ;

/// @brief Method .ctor addr 0x226924c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntroTutorialController(IntroTutorialController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntroTutorialController(IntroTutorialController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntroTutorialController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntroTutorialController, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntroTutorialController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntroTutorialController*, "", "IntroTutorialController");
NEED_NO_BOX(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__IntroTutorialController___ShowFinishAnimationCoroutine_d__22*, "", "IntroTutorialController/<ShowFinishAnimationCoroutine>d__22");
