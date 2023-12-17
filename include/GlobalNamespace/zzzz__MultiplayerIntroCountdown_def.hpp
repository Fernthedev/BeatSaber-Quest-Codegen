#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerIntroCountdown)
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown____c__DisplayClass25_0;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdown;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace GlobalNamespace {
class __MultiplayerIntroCountdown____c__DisplayClass25_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerIntroCountdown);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24);
MARK_REF_PTR_T(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0);
// Type: ::<CountdownRoutine>d__23
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5209))
// CS Name: ::MultiplayerIntroCountdown::<CountdownRoutine>d__23*
class CORDL_TYPE __MultiplayerIntroCountdown___CountdownRoutine_d__23 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerIntroCountdown*  __4__this;

/// @brief Field delay offset 0x28
 __declspec(property(get=__get_delay, put=__set_delay)) float_t  delay;

/// @brief Field seconds offset 0x2c
 __declspec(property(get=__get_seconds, put=__set_seconds)) float_t  seconds;

/// @brief Field durationMultiplier offset 0x30
 __declspec(property(get=__get_durationMultiplier, put=__set_durationMultiplier)) float_t  durationMultiplier;

/// @brief Field <soundDelayAfterText>5__2 offset 0x34
 __declspec(property(get=__get__soundDelayAfterText_5__2, put=__set__soundDelayAfterText_5__2)) float_t  _soundDelayAfterText_5__2;

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

constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdown* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> __get___4__this() const;

constexpr void __set_delay(float_t  value) ;

constexpr float_t& __get_delay() ;

constexpr float_t const& __get_delay() const;

constexpr void __set_seconds(float_t  value) ;

constexpr float_t& __get_seconds() ;

constexpr float_t const& __get_seconds() const;

constexpr void __set_durationMultiplier(float_t  value) ;

constexpr float_t& __get_durationMultiplier() ;

constexpr float_t const& __get_durationMultiplier() const;

constexpr void __set__soundDelayAfterText_5__2(float_t  value) ;

constexpr float_t& __get__soundDelayAfterText_5__2() ;

constexpr float_t const& __get__soundDelayAfterText_5__2() const;

static inline ::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x224edb8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224efbc size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224efc0 size 0x320 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224f2ec size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224f2f4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224f334 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerIntroCountdown___CountdownRoutine_d__23(__MultiplayerIntroCountdown___CountdownRoutine_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerIntroCountdown___CountdownRoutine_d__23(__MultiplayerIntroCountdown___CountdownRoutine_d__23 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerIntroCountdown___CountdownRoutine_d__23()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<PlayDelayed>d__24
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5210))
// CS Name: ::MultiplayerIntroCountdown::<PlayDelayed>d__24*
class CORDL_TYPE __MultiplayerIntroCountdown___PlayDelayed_d__24 : public ::System::Object {
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

/// @brief Field delay offset 0x20
 __declspec(property(get=__get_delay, put=__set_delay)) float_t  delay;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerIntroCountdown*  __4__this;

/// @brief Field audioClip offset 0x30
 __declspec(property(get=__get_audioClip, put=__set_audioClip)) ::UnityEngine::AudioClip*  audioClip;

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

constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdown* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> __get___4__this() const;

constexpr void __set_audioClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get_audioClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get_audioClip() const;

static inline ::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x224ee64 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224f33c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224f340 size 0xc4 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224f404 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224f40c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224f44c size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerIntroCountdown___PlayDelayed_d__24(__MultiplayerIntroCountdown___PlayDelayed_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerIntroCountdown___PlayDelayed_d__24(__MultiplayerIntroCountdown___PlayDelayed_d__24 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerIntroCountdown___PlayDelayed_d__24()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass25_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5211))
// CS Name: ::MultiplayerIntroCountdown::<>c__DisplayClass25_0*
class CORDL_TYPE __MultiplayerIntroCountdown____c__DisplayClass25_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field textController offset 0x10
 __declspec(property(get=__get_textController, put=__set_textController)) ::GlobalNamespace::MultiplayerIntroCountdownTextController*  textController;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerIntroCountdown*  __4__this;

constexpr void __set_textController(::GlobalNamespace::MultiplayerIntroCountdownTextController*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController* __get_textController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> __get_textController() const;

constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdown* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> __get___4__this() const;

static inline ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* New_ctor() ;

/// @brief Method .ctor addr 0x224f454 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PhaseRoutine>b__0 addr 0x224f45c size 0x18 virtual false final false
inline void _PhaseRoutine_b__0(float_t  val) ;

/// @brief Method <PhaseRoutine>b__1 addr 0x224f4e4 size 0x18 virtual false final false
inline void _PhaseRoutine_b__1(float_t  val) ;

/// @brief Method <PhaseRoutine>b__2 addr 0x224f580 size 0x50 virtual false final false
inline void _PhaseRoutine_b__2(::UnityEngine::Vector3  pos) ;

/// @brief Method <PhaseRoutine>b__3 addr 0x224f5d0 size 0x28 virtual false final false
inline void _PhaseRoutine_b__3(float_t  f) ;

/// @brief Method <PhaseRoutine>b__4 addr 0x224f680 size 0x18 virtual false final false
inline void _PhaseRoutine_b__4(float_t  val) ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerIntroCountdown____c__DisplayClass25_0(__MultiplayerIntroCountdown____c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerIntroCountdown____c__DisplayClass25_0(__MultiplayerIntroCountdown____c__DisplayClass25_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerIntroCountdown____c__DisplayClass25_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<PhaseRoutine>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5212))
// CS Name: ::MultiplayerIntroCountdown::<PhaseRoutine>d__25*
class CORDL_TYPE __MultiplayerIntroCountdown___PhaseRoutine_d__25 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MultiplayerIntroCountdown*  __4__this;

/// @brief Field text offset 0x28
 __declspec(property(get=__get_text, put=__set_text)) ::StringW  text;

/// @brief Field appearDuration offset 0x30
 __declspec(property(get=__get_appearDuration, put=__set_appearDuration)) float_t  appearDuration;

/// @brief Field disappearDuration offset 0x34
 __declspec(property(get=__get_disappearDuration, put=__set_disappearDuration)) float_t  disappearDuration;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*  __8__1;

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

constexpr void __set___4__this(::GlobalNamespace::MultiplayerIntroCountdown*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdown* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdown*> __get___4__this() const;

constexpr void __set_text(::StringW  value) ;

constexpr ::StringW& __get_text() ;

constexpr ::StringW const& __get_text() const;

constexpr void __set_appearDuration(float_t  value) ;

constexpr float_t& __get_appearDuration() ;

constexpr float_t const& __get_appearDuration() const;

constexpr void __set_disappearDuration(float_t  value) ;

constexpr float_t& __get_disappearDuration() ;

constexpr float_t const& __get_disappearDuration() const;

constexpr void __set___8__1(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*  value) ;

constexpr ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*> __get___8__1() const;

static inline ::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x224ef14 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x224f698 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x224f69c size 0x578 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x224fc84 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x224fc8c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x224fccc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MultiplayerIntroCountdown___PhaseRoutine_d__25(__MultiplayerIntroCountdown___PhaseRoutine_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MultiplayerIntroCountdown___PhaseRoutine_d__25(__MultiplayerIntroCountdown___PhaseRoutine_d__25 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MultiplayerIntroCountdown___PhaseRoutine_d__25()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerIntroCountdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5213))
// CS Name: ::MultiplayerIntroCountdown*
class CORDL_TYPE MultiplayerIntroCountdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PhaseRoutine_d__25 = ::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25;

using __c__DisplayClass25_0 = ::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0;

using _PlayDelayed_d__24 = ::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24;

using _CountdownRoutine_d__23 = ::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _textAppearDuration offset 0x18
 __declspec(property(get=__get__textAppearDuration, put=__set__textAppearDuration)) float_t  _textAppearDuration;

/// @brief Field _textDisappearDuration offset 0x1c
 __declspec(property(get=__get__textDisappearDuration, put=__set__textDisappearDuration)) float_t  _textDisappearDuration;

/// @brief Field _goDisappearDuration offset 0x20
 __declspec(property(get=__get__goDisappearDuration, put=__set__goDisappearDuration)) float_t  _goDisappearDuration;

/// @brief Field _partsDistance offset 0x24
 __declspec(property(get=__get__partsDistance, put=__set__partsDistance)) float_t  _partsDistance;

/// @brief Field _startLocalPosition offset 0x28
 __declspec(property(get=__get__startLocalPosition, put=__set__startLocalPosition)) ::UnityEngine::Vector3  _startLocalPosition;

/// @brief Field _targetLocalPosition offset 0x34
 __declspec(property(get=__get__targetLocalPosition, put=__set__targetLocalPosition)) ::UnityEngine::Vector3  _targetLocalPosition;

/// @brief Field _readyClip offset 0x40
 __declspec(property(get=__get__readyClip, put=__set__readyClip)) ::UnityEngine::AudioClip*  _readyClip;

/// @brief Field _setClip offset 0x48
 __declspec(property(get=__get__setClip, put=__set__setClip)) ::UnityEngine::AudioClip*  _setClip;

/// @brief Field _goClip offset 0x50
 __declspec(property(get=__get__goClip, put=__set__goClip)) ::UnityEngine::AudioClip*  _goClip;

/// @brief Field _buildUpClip offset 0x58
 __declspec(property(get=__get__buildUpClip, put=__set__buildUpClip)) ::UnityEngine::AudioClip*  _buildUpClip;

/// @brief Field _textController0 offset 0x60
 __declspec(property(get=__get__textController0, put=__set__textController0)) ::GlobalNamespace::MultiplayerIntroCountdownTextController*  _textController0;

/// @brief Field _textController1 offset 0x68
 __declspec(property(get=__get__textController1, put=__set__textController1)) ::GlobalNamespace::MultiplayerIntroCountdownTextController*  _textController1;

/// @brief Field _audioSource offset 0x70
 __declspec(property(get=__get__audioSource, put=__set__audioSource)) ::UnityEngine::AudioSource*  _audioSource;

/// @brief Field _multiplayerOffsetByLocalPlayerPosition offset 0x78
 __declspec(property(get=__get__multiplayerOffsetByLocalPlayerPosition, put=__set__multiplayerOffsetByLocalPlayerPosition)) ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*  _multiplayerOffsetByLocalPlayerPosition;

/// @brief Field _tweeningManager offset 0x80
 __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager)) ::Tweening::TimeTweeningManager*  _tweeningManager;

/// @brief Field _currentTextController offset 0x88
 __declspec(property(get=__get__currentTextController, put=__set__currentTextController)) ::GlobalNamespace::MultiplayerIntroCountdownTextController*  _currentTextController;

/// @brief Field _fontSize offset 0x90
 __declspec(property(get=__get__fontSize, put=__set__fontSize)) float_t  _fontSize;

/// @brief Field _alpha offset 0x94
 __declspec(property(get=__get__alpha, put=__set__alpha)) float_t  _alpha;

 __declspec(property(get=get_textAppearDuration)) float_t  textAppearDuration;

constexpr void __set__textAppearDuration(float_t  value) ;

constexpr float_t& __get__textAppearDuration() ;

constexpr float_t const& __get__textAppearDuration() const;

constexpr void __set__textDisappearDuration(float_t  value) ;

constexpr float_t& __get__textDisappearDuration() ;

constexpr float_t const& __get__textDisappearDuration() const;

constexpr void __set__goDisappearDuration(float_t  value) ;

constexpr float_t& __get__goDisappearDuration() ;

constexpr float_t const& __get__goDisappearDuration() const;

constexpr void __set__partsDistance(float_t  value) ;

constexpr float_t& __get__partsDistance() ;

constexpr float_t const& __get__partsDistance() const;

constexpr void __set__startLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__startLocalPosition() const;

constexpr void __set__targetLocalPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__targetLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__targetLocalPosition() const;

constexpr void __set__readyClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__readyClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__readyClip() const;

constexpr void __set__setClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__setClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__setClip() const;

constexpr void __set__goClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__goClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__goClip() const;

constexpr void __set__buildUpClip(::UnityEngine::AudioClip*  value) ;

constexpr ::UnityEngine::AudioClip* __get__buildUpClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> __get__buildUpClip() const;

constexpr void __set__textController0(::GlobalNamespace::MultiplayerIntroCountdownTextController*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController* __get__textController0() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> __get__textController0() const;

constexpr void __set__textController1(::GlobalNamespace::MultiplayerIntroCountdownTextController*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController* __get__textController1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> __get__textController1() const;

constexpr void __set__audioSource(::UnityEngine::AudioSource*  value) ;

constexpr ::UnityEngine::AudioSource* __get__audioSource() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> __get__audioSource() const;

constexpr void __set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*  value) ;

constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* __get__multiplayerOffsetByLocalPlayerPosition() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> __get__multiplayerOffsetByLocalPlayerPosition() const;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager*  value) ;

constexpr ::Tweening::TimeTweeningManager* __get__tweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> __get__tweeningManager() const;

constexpr void __set__currentTextController(::GlobalNamespace::MultiplayerIntroCountdownTextController*  value) ;

constexpr ::GlobalNamespace::MultiplayerIntroCountdownTextController* __get__currentTextController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerIntroCountdownTextController*> __get__currentTextController() const;

constexpr void __set__fontSize(float_t  value) ;

constexpr float_t& __get__fontSize() ;

constexpr float_t const& __get__fontSize() const;

constexpr void __set__alpha(float_t  value) ;

constexpr float_t& __get__alpha() ;

constexpr float_t const& __get__alpha() const;

/// @brief Method get_textAppearDuration addr 0x224eb34 size 0x8 virtual false final false
inline float_t get_textAppearDuration() ;

/// @brief Method Awake addr 0x224eb3c size 0x54 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x224ec34 size 0x88 virtual true final false
inline void OnDestroy() ;

/// @brief Method StartCountdown addr 0x224ecbc size 0x70 virtual false final false
inline void StartCountdown(float_t  seconds, float_t  delay, float_t  durationMultiplier) ;

/// @brief Method CountdownRoutine addr 0x224ed2c size 0x8c virtual false final false
inline ::System::Collections::IEnumerator* CountdownRoutine(float_t  seconds, float_t  delay, float_t  durationMultiplier) ;

/// @brief Method PlayDelayed addr 0x224ede0 size 0x84 virtual false final false
inline ::System::Collections::IEnumerator* PlayDelayed(::UnityEngine::AudioClip*  audioClip, float_t  delay) ;

/// @brief Method PhaseRoutine addr 0x224ee8c size 0x88 virtual false final false
inline ::System::Collections::IEnumerator* PhaseRoutine(::StringW  text, float_t  appearDuration, float_t  disappearDuration) ;

static inline ::GlobalNamespace::MultiplayerIntroCountdown* New_ctor() ;

/// @brief Method .ctor addr 0x224ef3c size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerIntroCountdown(MultiplayerIntroCountdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerIntroCountdown(MultiplayerIntroCountdown const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerIntroCountdown()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerIntroCountdown, 0x98>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerIntroCountdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerIntroCountdown*, "", "MultiplayerIntroCountdown");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___CountdownRoutine_d__23*, "", "MultiplayerIntroCountdown/<CountdownRoutine>d__23");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___PhaseRoutine_d__25*, "", "MultiplayerIntroCountdown/<PhaseRoutine>d__25");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown___PlayDelayed_d__24*, "", "MultiplayerIntroCountdown/<PlayDelayed>d__24");
NEED_NO_BOX(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerIntroCountdown____c__DisplayClass25_0*, "", "MultiplayerIntroCountdown/<>c__DisplayClass25_0");
