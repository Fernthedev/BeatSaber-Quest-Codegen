#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerAvatarAudioController)
namespace BeatSaber::AvatarCore {
class __MultiplayerAvatarAudioController___Start_d__4;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class IConnectedPlayer;
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
namespace BeatSaber::AvatarCore {
class MultiplayerAvatarAudioController;
}
namespace BeatSaber::AvatarCore {
class __MultiplayerAvatarAudioController___Start_d__4;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4);
// Type: ::<Start>d__4
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15198))
// CS Name: ::MultiplayerAvatarAudioController::<Start>d__4*
class CORDL_TYPE __MultiplayerAvatarAudioController___Start_d__4 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController*  __4__this;

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

constexpr void __set___4__this(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController*  value) ;

constexpr ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController*> __get___4__this() const;

static inline ::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0xe0fbf8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xe0fc28 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xe0fc2c size 0xd4 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe0fd00 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xe0fd08 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xe0fd48 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerAvatarAudioController___Start_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerAvatarAudioController___Start_d__4(__MultiplayerAvatarAudioController___Start_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerAvatarAudioController___Start_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerAvatarAudioController___Start_d__4(__MultiplayerAvatarAudioController___Start_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerAvatarAudioController___Start_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::MultiplayerAvatarAudioController
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15199))
// CS Name: ::BeatSaber.AvatarCore::MultiplayerAvatarAudioController*
class CORDL_TYPE MultiplayerAvatarAudioController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = ::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _connectedPlayer offset 0x20
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

 __declspec(property(put=set_connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  connectedPlayer;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

/// @brief Method set_connectedPlayer addr 0xe0fb88 size 0x8 virtual false final false
inline void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

/// @brief Method Start addr 0xe0fb90 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

static inline ::BeatSaber::AvatarCore::MultiplayerAvatarAudioController* New_ctor() ;

/// @brief Method .ctor addr 0xe0fc20 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerAvatarAudioController(MultiplayerAvatarAudioController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerAvatarAudioController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerAvatarAudioController(MultiplayerAvatarAudioController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerAvatarAudioController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::MultiplayerAvatarAudioController, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::MultiplayerAvatarAudioController*, "BeatSaber.AvatarCore", "MultiplayerAvatarAudioController");
NEED_NO_BOX(::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__MultiplayerAvatarAudioController___Start_d__4*, "BeatSaber.AvatarCore", "MultiplayerAvatarAudioController/<Start>d__4");
