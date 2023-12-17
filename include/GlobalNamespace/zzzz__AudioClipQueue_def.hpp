#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioClipQueue)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipQueue;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipQueue);
// Type: ::AudioClipQueue
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4044))
// CS Name: ::AudioClipQueue*
class CORDL_TYPE AudioClipQueue : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _queue offset 0x20
 __declspec(property(get=__get__queue, put=__set__queue)) ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*  _queue;

/// @brief Field _delay offset 0x28
 __declspec(property(get=__get__delay, put=__set__delay)) float_t  _delay;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__queue(::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>* __get__queue() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::AudioClip*>*> __get__queue() const;

constexpr void __set__delay(float_t  value) ;

constexpr float_t& __get__delay() ;

constexpr float_t const& __get__delay() const;

/// @brief Method Awake addr 0x222abb8 size 0x20 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x222abd8 size 0x140 virtual false final false
inline void Update() ;

/// @brief Method PlayAudioClipWithDelay addr 0x222ad18 size 0xcc virtual false final false
inline void PlayAudioClipWithDelay(::UnityEngine::AudioClip*  audioClip, float_t  delay) ;

static inline ::GlobalNamespace::AudioClipQueue* New_ctor() ;

/// @brief Method .ctor addr 0x222ade4 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipQueue(AudioClipQueue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipQueue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipQueue(AudioClipQueue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioClipQueue()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipQueue, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipQueue);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipQueue*, "", "AudioClipQueue");
