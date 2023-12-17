#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlayAudioOnGameEventController)
namespace GlobalNamespace {
class AudioClipQueue;
}
namespace GlobalNamespace {
class __PlayAudioOnGameEventController__EventAudioBinding;
}
namespace GlobalNamespace {
class Signal;
}
namespace GlobalNamespace {
class LocalizedAudioClipSO;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayAudioOnGameEventController;
}
namespace GlobalNamespace {
class __PlayAudioOnGameEventController__EventAudioBinding;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayAudioOnGameEventController);
MARK_REF_PTR_T(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding);
// Type: ::EventAudioBinding
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4074))
// CS Name: ::PlayAudioOnGameEventController::EventAudioBinding*
class CORDL_TYPE __PlayAudioOnGameEventController__EventAudioBinding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _signal offset 0x10
 __declspec(property(get=__get__signal, put=__set__signal)) ::GlobalNamespace::Signal*  _signal;

/// @brief Field _delay offset 0x18
 __declspec(property(get=__get__delay, put=__set__delay)) float_t  _delay;

/// @brief Field _localizedAudioClips offset 0x20
 __declspec(property(get=__get__localizedAudioClips, put=__set__localizedAudioClips)) ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*,::Array<::GlobalNamespace::LocalizedAudioClipSO*>*>  _localizedAudioClips;

/// @brief Field _audioClipQueue offset 0x28
 __declspec(property(get=__get__audioClipQueue, put=__set__audioClipQueue)) ::GlobalNamespace::AudioClipQueue*  _audioClipQueue;

/// @brief Field _randomObjectPicker offset 0x30
 __declspec(property(get=__get__randomObjectPicker, put=__set__randomObjectPicker)) ::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>*  _randomObjectPicker;

constexpr void __set__signal(::GlobalNamespace::Signal*  value) ;

constexpr ::GlobalNamespace::Signal* __get__signal() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> __get__signal() const;

constexpr void __set__delay(float_t  value) ;

constexpr float_t& __get__delay() ;

constexpr float_t const& __get__delay() const;

constexpr void __set__localizedAudioClips(::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*,::Array<::GlobalNamespace::LocalizedAudioClipSO*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*,::Array<::GlobalNamespace::LocalizedAudioClipSO*>*>& __get__localizedAudioClips() ;

constexpr ::ArrayW<::GlobalNamespace::LocalizedAudioClipSO*,::Array<::GlobalNamespace::LocalizedAudioClipSO*>*> const& __get__localizedAudioClips() const;

constexpr void __set__audioClipQueue(::GlobalNamespace::AudioClipQueue*  value) ;

constexpr ::GlobalNamespace::AudioClipQueue* __get__audioClipQueue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipQueue*> __get__audioClipQueue() const;

constexpr void __set__randomObjectPicker(::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>*  value) ;

constexpr ::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>* __get__randomObjectPicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::GlobalNamespace::LocalizedAudioClipSO*>*> __get__randomObjectPicker() const;

/// @brief Method Init addr 0x222fcb0 size 0xf0 virtual false final false
inline void Init(::GlobalNamespace::AudioClipQueue*  audioClipQueue) ;

/// @brief Method Deinit addr 0x222fdfc size 0x8c virtual false final false
inline void Deinit() ;

/// @brief Method HandleGameEvent addr 0x222fe90 size 0xc4 virtual false final false
inline void HandleGameEvent() ;

static inline ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding* New_ctor() ;

/// @brief Method .ctor addr 0x222ff54 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PlayAudioOnGameEventController__EventAudioBinding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlayAudioOnGameEventController__EventAudioBinding(__PlayAudioOnGameEventController__EventAudioBinding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlayAudioOnGameEventController__EventAudioBinding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlayAudioOnGameEventController__EventAudioBinding(__PlayAudioOnGameEventController__EventAudioBinding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlayAudioOnGameEventController__EventAudioBinding()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlayAudioOnGameEventController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4075))
// CS Name: ::PlayAudioOnGameEventController*
class CORDL_TYPE PlayAudioOnGameEventController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EventAudioBinding = ::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioClipQueue offset 0x18
 __declspec(property(get=__get__audioClipQueue, put=__set__audioClipQueue)) ::GlobalNamespace::AudioClipQueue*  _audioClipQueue;

/// @brief Field _eventAudioBindings offset 0x20
 __declspec(property(get=__get__eventAudioBindings, put=__set__eventAudioBindings)) ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*,::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*>  _eventAudioBindings;

constexpr void __set__audioClipQueue(::GlobalNamespace::AudioClipQueue*  value) ;

constexpr ::GlobalNamespace::AudioClipQueue* __get__audioClipQueue() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipQueue*> __get__audioClipQueue() const;

constexpr void __set__eventAudioBindings(::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*,::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*,::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*>& __get__eventAudioBindings() ;

constexpr ::ArrayW<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*,::Array<::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*>*> const& __get__eventAudioBindings() const;

/// @brief Method Awake addr 0x222fc4c size 0x64 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x222fda0 size 0x5c virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::PlayAudioOnGameEventController* New_ctor() ;

/// @brief Method .ctor addr 0x222fe88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayAudioOnGameEventController(PlayAudioOnGameEventController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayAudioOnGameEventController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayAudioOnGameEventController(PlayAudioOnGameEventController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayAudioOnGameEventController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayAudioOnGameEventController, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayAudioOnGameEventController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayAudioOnGameEventController*, "", "PlayAudioOnGameEventController");
NEED_NO_BOX(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayAudioOnGameEventController__EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
