#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Screen)
namespace HMUI {
class __Screen___TransitionCoroutine_d__5;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __ViewController__AnimationType;
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
namespace HMUI {
class Screen;
}
namespace HMUI {
class __Screen___TransitionCoroutine_d__5;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Screen);
MARK_REF_PTR_T(::HMUI::__Screen___TransitionCoroutine_d__5);
// Type: ::<TransitionCoroutine>d__5
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13589))
// CS Name: ::Screen::<TransitionCoroutine>d__5*
class CORDL_TYPE __Screen___TransitionCoroutine_d__5 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::Screen*  __4__this;

/// @brief Field newRootViewController offset 0x28
 __declspec(property(get=__get_newRootViewController, put=__set_newRootViewController)) ::HMUI::ViewController*  newRootViewController;

/// @brief Field animationType offset 0x30
 __declspec(property(get=__get_animationType, put=__set_animationType)) ::HMUI::__ViewController__AnimationType  animationType;

/// @brief Field <oldRootViewController>5__2 offset 0x38
 __declspec(property(get=__get__oldRootViewController_5__2, put=__set__oldRootViewController_5__2)) ::HMUI::ViewController*  _oldRootViewController_5__2;

/// @brief Field <oldRootViewControllerStartAlpha>5__3 offset 0x40
 __declspec(property(get=__get__oldRootViewControllerStartAlpha_5__3, put=__set__oldRootViewControllerStartAlpha_5__3)) float_t  _oldRootViewControllerStartAlpha_5__3;

/// @brief Field <elapsedTime>5__4 offset 0x44
 __declspec(property(get=__get__elapsedTime_5__4, put=__set__elapsedTime_5__4)) float_t  _elapsedTime_5__4;

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

constexpr void __set___4__this(::HMUI::Screen*  value) ;

constexpr ::HMUI::Screen* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::Screen*> __get___4__this() const;

constexpr void __set_newRootViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_newRootViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_newRootViewController() const;

constexpr void __set_animationType(::HMUI::__ViewController__AnimationType  value) ;

constexpr ::HMUI::__ViewController__AnimationType& __get_animationType() ;

constexpr ::HMUI::__ViewController__AnimationType const& __get_animationType() const;

constexpr void __set__oldRootViewController_5__2(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__oldRootViewController_5__2() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__oldRootViewController_5__2() const;

constexpr void __set__oldRootViewControllerStartAlpha_5__3(float_t  value) ;

constexpr float_t& __get__oldRootViewControllerStartAlpha_5__3() ;

constexpr float_t const& __get__oldRootViewControllerStartAlpha_5__3() const;

constexpr void __set__elapsedTime_5__4(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__4() ;

constexpr float_t const& __get__elapsedTime_5__4() const;

static inline ::HMUI::__Screen___TransitionCoroutine_d__5* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212bc4c size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212bc88 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212bc8c size 0x504 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212c224 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212c22c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212c26c size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Screen___TransitionCoroutine_d__5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Screen___TransitionCoroutine_d__5(__Screen___TransitionCoroutine_d__5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Screen___TransitionCoroutine_d__5()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__Screen___TransitionCoroutine_d__5, 0x48>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::Screen
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13590))
// CS Name: ::HMUI::Screen*
class CORDL_TYPE Screen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _TransitionCoroutine_d__5 = ::HMUI::__Screen___TransitionCoroutine_d__5;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rootViewController offset 0x18
 __declspec(property(get=__get__rootViewController, put=__set__rootViewController)) ::HMUI::ViewController*  _rootViewController;

/// @brief Field _isBeingDestroyed offset 0x20
 __declspec(property(get=__get__isBeingDestroyed, put=__set__isBeingDestroyed)) bool  _isBeingDestroyed;

 __declspec(property(get=get_isBeingDestroyed)) bool  isBeingDestroyed;

constexpr void __set__rootViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get__rootViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get__rootViewController() const;

constexpr void __set__isBeingDestroyed(bool  value) ;

constexpr bool& __get__isBeingDestroyed() ;

constexpr bool const& __get__isBeingDestroyed() const;

/// @brief Method get_isBeingDestroyed addr 0x212baf8 size 0x8 virtual false final false
inline bool get_isBeingDestroyed() ;

/// @brief Method SetRootViewController addr 0x212bb00 size 0xd0 virtual false final false
inline void SetRootViewController(::HMUI::ViewController*  newRootViewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method TransitionCoroutine addr 0x212bbd0 size 0x7c virtual false final false
inline ::System::Collections::IEnumerator* TransitionCoroutine(::HMUI::ViewController*  newRootViewController, ::HMUI::__ViewController__AnimationType  animationType) ;

/// @brief Method OnDestroy addr 0x212bc74 size 0xc virtual false final false
inline void OnDestroy() ;

static inline ::HMUI::Screen* New_ctor() ;

/// @brief Method .ctor addr 0x212bc80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Screen(Screen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Screen", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Screen(Screen const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Screen()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::Screen, 0x28>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::Screen);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Screen*, "HMUI", "Screen");
NEED_NO_BOX(::HMUI::__Screen___TransitionCoroutine_d__5);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__Screen___TransitionCoroutine_d__5*, "HMUI", "Screen/<TransitionCoroutine>d__5");
