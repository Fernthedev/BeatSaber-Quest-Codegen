#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomizedPitch)
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __RandomizedPitch___RestorePitchWithDelay_d__10;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class __RandomizedPitch___PlayDelayedCoroutine_d__9;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomizedPitch;
}
namespace GlobalNamespace {
class __RandomizedPitch___PlayDelayedCoroutine_d__9;
}
namespace GlobalNamespace {
class __RandomizedPitch___RestorePitchWithDelay_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomizedPitch);
MARK_REF_PTR_T(::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9);
MARK_REF_PTR_T(::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10);
// Type: ::<PlayDelayedCoroutine>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14327))
// CS Name: ::RandomizedPitch::<PlayDelayedCoroutine>d__9*
class CORDL_TYPE __RandomizedPitch___PlayDelayedCoroutine_d__9 : public ::System::Object {
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

/// @brief Field delay offset 0x20
 __declspec(property(get=__get_delay, put=__set_delay)) float_t  delay;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::RandomizedPitch*  __4__this;

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

constexpr void __set_delay(float_t  value) ;

constexpr float_t& __get_delay() ;

constexpr float_t const& __get_delay() const;

constexpr void __set___4__this(::GlobalNamespace::RandomizedPitch*  value) ;

constexpr ::GlobalNamespace::RandomizedPitch* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomizedPitch*> __get___4__this() const;

static inline ::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x20ee48c size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20ee4f8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20ee4fc size 0xac virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20ee5a8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20ee5b0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20ee5f0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__RandomizedPitch___PlayDelayedCoroutine_d__9", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RandomizedPitch___PlayDelayedCoroutine_d__9(__RandomizedPitch___PlayDelayedCoroutine_d__9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RandomizedPitch___PlayDelayedCoroutine_d__9", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RandomizedPitch___PlayDelayedCoroutine_d__9(__RandomizedPitch___PlayDelayedCoroutine_d__9 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RandomizedPitch___PlayDelayedCoroutine_d__9()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<RestorePitchWithDelay>d__10
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14328))
// CS Name: ::RandomizedPitch::<RestorePitchWithDelay>d__10*
class CORDL_TYPE __RandomizedPitch___RestorePitchWithDelay_d__10 : public ::System::Object {
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

/// @brief Field delay offset 0x20
 __declspec(property(get=__get_delay, put=__set_delay)) float_t  delay;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::RandomizedPitch*  __4__this;

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

constexpr void __set_delay(float_t  value) ;

constexpr float_t& __get_delay() ;

constexpr float_t const& __get_delay() const;

constexpr void __set___4__this(::GlobalNamespace::RandomizedPitch*  value) ;

constexpr ::GlobalNamespace::RandomizedPitch* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomizedPitch*> __get___4__this() const;

static inline ::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x20ee4b4 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20ee5f8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20ee5fc size 0xbc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20ee6b8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20ee6c0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20ee700 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__RandomizedPitch___RestorePitchWithDelay_d__10", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RandomizedPitch___RestorePitchWithDelay_d__10(__RandomizedPitch___RestorePitchWithDelay_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RandomizedPitch___RestorePitchWithDelay_d__10", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RandomizedPitch___RestorePitchWithDelay_d__10(__RandomizedPitch___RestorePitchWithDelay_d__10 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RandomizedPitch___RestorePitchWithDelay_d__10()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RandomizedPitch
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14329))
// CS Name: ::RandomizedPitch*
class CORDL_TYPE RandomizedPitch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RestorePitchWithDelay_d__10 = ::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10;

using _PlayDelayedCoroutine_d__9 = ::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _audioSource offset 0x18
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _minPitchMultiplier offset 0x20
 __declspec(property(get=__get__minPitchMultiplier, put=__set__minPitchMultiplier)) float_t  _minPitchMultiplier;

/// @brief Field _maxPitchMultiplier offset 0x24
 __declspec(property(get=__get__maxPitchMultiplier, put=__set__maxPitchMultiplier)) float_t  _maxPitchMultiplier;

/// @brief Field _playOnAwake offset 0x28
 __declspec(property(get=__get__playOnAwake, put=__set__playOnAwake)) bool  _playOnAwake;

/// @brief Field _originalPitch offset 0x2c
 __declspec(property(get=__get__originalPitch, put=__set__originalPitch)) float_t  _originalPitch;

/// @brief Field _restoringCoroutine offset 0x30
 __declspec(property(get=__get__restoringCoroutine, put=__set__restoringCoroutine)) ::UnityEngine::Coroutine*  _restoringCoroutine;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__minPitchMultiplier(float_t  value) ;

constexpr float_t& __get__minPitchMultiplier() ;

constexpr float_t const& __get__minPitchMultiplier() const;

constexpr void __set__maxPitchMultiplier(float_t  value) ;

constexpr float_t& __get__maxPitchMultiplier() ;

constexpr float_t const& __get__maxPitchMultiplier() const;

constexpr void __set__playOnAwake(bool  value) ;

constexpr bool& __get__playOnAwake() ;

constexpr bool const& __get__playOnAwake() const;

constexpr void __set__originalPitch(float_t  value) ;

constexpr float_t& __get__originalPitch() ;

constexpr float_t const& __get__originalPitch() const;

constexpr void __set__restoringCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get__restoringCoroutine() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get__restoringCoroutine() const;

/// @brief Method OnEnable addr 0x20ee238 size 0x58 virtual false final false
inline void OnEnable() ;

/// @brief Method Play addr 0x20ee290 size 0xd4 virtual false final false
inline void Play() ;

/// @brief Method PlayDelayed addr 0x20ee3dc size 0x38 virtual false final false
inline void PlayDelayed(float_t  delay) ;

/// @brief Method PlayDelayedCoroutine addr 0x20ee414 size 0x78 virtual false final false
inline ::System::Collections::IEnumerator* PlayDelayedCoroutine(float_t  delay) ;

/// @brief Method RestorePitchWithDelay addr 0x20ee364 size 0x78 virtual false final false
inline ::System::Collections::IEnumerator* RestorePitchWithDelay(float_t  delay) ;

static inline ::GlobalNamespace::RandomizedPitch* New_ctor() ;

/// @brief Method .ctor addr 0x20ee4dc size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomizedPitch(RandomizedPitch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomizedPitch", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomizedPitch(RandomizedPitch const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RandomizedPitch()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomizedPitch, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomizedPitch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomizedPitch*, "", "RandomizedPitch");
NEED_NO_BOX(::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RandomizedPitch___PlayDelayedCoroutine_d__9*, "", "RandomizedPitch/<PlayDelayedCoroutine>d__9");
NEED_NO_BOX(::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RandomizedPitch___RestorePitchWithDelay_d__10*, "", "RandomizedPitch/<RestorePitchWithDelay>d__10");
