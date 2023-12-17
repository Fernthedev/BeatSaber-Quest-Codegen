#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TweenRunner_1)
namespace UnityEngine::UI::CoroutineTween {
struct ColorTween;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class __TweenRunner_1___Start_d__2;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine::UI::CoroutineTween {
struct FloatTween;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class TweenRunner_1;
}
namespace UnityEngine::UI::CoroutineTween {
template<typename T>
class __TweenRunner_1___Start_d__2;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class __TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::ColorTween>;
}
namespace UnityEngine::UI::CoroutineTween {
template<>
class __TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::FloatTween>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UI::CoroutineTween::TweenRunner_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2);
// Type: ::<Start>d__2
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
// Type: ::<Start>d__2
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13156)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13156), inst: 5199 })
// CS Name: ::TweenRunner`1::<Start>d__2<T>*
class CORDL_TYPE __TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::FloatTween> : public ::System::Object {
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

/// @brief Field tweenInfo offset 0x20
 __declspec(property(get=__get_tweenInfo, put=__set_tweenInfo)) ::UnityEngine::UI::CoroutineTween::FloatTween  tweenInfo;

/// @brief Field <elapsedTime>5__2 offset 0x38
 __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

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

constexpr void __set_tweenInfo(::UnityEngine::UI::CoroutineTween::FloatTween  value) ;

constexpr ::UnityEngine::UI::CoroutineTween::FloatTween& __get_tweenInfo() ;

constexpr ::UnityEngine::UI::CoroutineTween::FloatTween const& __get_tweenInfo() const;

constexpr void __set__elapsedTime_5__2(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__2() ;

constexpr float_t const& __get__elapsedTime_5__2() const;

static inline ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::FloatTween>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TweenRunner_1___Start_d__2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: ::<Start>d__2
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13156))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13156), inst: 5198 })
// CS Name: ::TweenRunner`1::<Start>d__2<T>*
class CORDL_TYPE __TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::ColorTween> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field tweenInfo offset 0x20
 __declspec(property(get=__get_tweenInfo, put=__set_tweenInfo)) ::UnityEngine::UI::CoroutineTween::ColorTween  tweenInfo;

/// @brief Field <elapsedTime>5__2 offset 0x58
 __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

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

constexpr void __set_tweenInfo(::UnityEngine::UI::CoroutineTween::ColorTween  value) ;

constexpr ::UnityEngine::UI::CoroutineTween::ColorTween& __get_tweenInfo() ;

constexpr ::UnityEngine::UI::CoroutineTween::ColorTween const& __get_tweenInfo() const;

constexpr void __set__elapsedTime_5__2(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__2() ;

constexpr float_t const& __get__elapsedTime_5__2() const;

static inline ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::ColorTween>* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x0 size 0xffffffffffffffff virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TweenRunner_1___Start_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TweenRunner_1___Start_d__2(__TweenRunner_1___Start_d__2 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TweenRunner_1___Start_d__2()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13157)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13157), inst: 5199 })
// CS Name: ::UnityEngine.UI.CoroutineTween::TweenRunner`1<T>*
class CORDL_TYPE TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween> : public ::System::Object {
public:
// Declarations
using _Start_d__2 = ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::FloatTween>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_CoroutineContainer offset 0x10
 __declspec(property(get=__get_m_CoroutineContainer, put=__set_m_CoroutineContainer)) ::UnityEngine::MonoBehaviour*  m_CoroutineContainer;

/// @brief Field m_Tween offset 0x18
 __declspec(property(get=__get_m_Tween, put=__set_m_Tween)) ::System::Collections::IEnumerator*  m_Tween;

constexpr void __set_m_CoroutineContainer(::UnityEngine::MonoBehaviour*  value) ;

constexpr ::UnityEngine::MonoBehaviour* __get_m_CoroutineContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> __get_m_CoroutineContainer() const;

constexpr void __set_m_Tween(::System::Collections::IEnumerator*  value) ;

constexpr ::System::Collections::IEnumerator* __get_m_Tween() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> __get_m_Tween() const;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::IEnumerator* Start(::UnityEngine::UI::CoroutineTween::FloatTween  tweenInfo) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::MonoBehaviour*  coroutineContainer) ;

/// @brief Method StartTween addr 0x0 size 0xffffffffffffffff virtual false final false
inline void StartTween(::UnityEngine::UI::CoroutineTween::FloatTween  info) ;

/// @brief Method StopTween addr 0x0 size 0xffffffffffffffff virtual false final false
inline void StopTween() ;

static inline ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::FloatTween>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenRunner_1(TweenRunner_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenRunner_1(TweenRunner_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TweenRunner_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
// Type: UnityEngine.UI.CoroutineTween::TweenRunner`1
namespace UnityEngine::UI::CoroutineTween {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13157)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13157), inst: 5198 })
// CS Name: ::UnityEngine.UI.CoroutineTween::TweenRunner`1<T>*
class CORDL_TYPE TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween> : public ::System::Object {
public:
// Declarations
using _Start_d__2 = ::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2<::UnityEngine::UI::CoroutineTween::ColorTween>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_CoroutineContainer offset 0x10
 __declspec(property(get=__get_m_CoroutineContainer, put=__set_m_CoroutineContainer)) ::UnityEngine::MonoBehaviour*  m_CoroutineContainer;

/// @brief Field m_Tween offset 0x18
 __declspec(property(get=__get_m_Tween, put=__set_m_Tween)) ::System::Collections::IEnumerator*  m_Tween;

constexpr void __set_m_CoroutineContainer(::UnityEngine::MonoBehaviour*  value) ;

constexpr ::UnityEngine::MonoBehaviour* __get_m_CoroutineContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> __get_m_CoroutineContainer() const;

constexpr void __set_m_Tween(::System::Collections::IEnumerator*  value) ;

constexpr ::System::Collections::IEnumerator* __get_m_Tween() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> __get_m_Tween() const;

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::IEnumerator* Start(::UnityEngine::UI::CoroutineTween::ColorTween  tweenInfo) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Init(::UnityEngine::MonoBehaviour*  coroutineContainer) ;

/// @brief Method StartTween addr 0x0 size 0xffffffffffffffff virtual false final false
inline void StartTween(::UnityEngine::UI::CoroutineTween::ColorTween  info) ;

/// @brief Method StopTween addr 0x0 size 0xffffffffffffffff virtual false final false
inline void StopTween() ;

static inline ::UnityEngine::UI::CoroutineTween::TweenRunner_1<::UnityEngine::UI::CoroutineTween::ColorTween>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TweenRunner_1(TweenRunner_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TweenRunner_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TweenRunner_1(TweenRunner_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TweenRunner_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI::CoroutineTween
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::CoroutineTween::TweenRunner_1, "UnityEngine.UI.CoroutineTween", "TweenRunner`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UI::CoroutineTween::__TweenRunner_1___Start_d__2, "UnityEngine.UI.CoroutineTween", "TweenRunner`1/<Start>d__2");
