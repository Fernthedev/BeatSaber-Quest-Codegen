#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ViewControllerTransitionHelpers)
namespace HMUI {
struct __ViewController__AnimationDirection;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoDismissTransition_d__4;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass5_0;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoVerticalTransition_d__6;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass6_0;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoPresentTransition_d__3;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___AnimationCoroutine_d__8;
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
namespace HMUI {
class ViewControllerTransitionHelpers;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___AnimationCoroutine_d__8;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoDismissTransition_d__4;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoPresentTransition_d__3;
}
namespace HMUI {
class __ViewControllerTransitionHelpers___DoVerticalTransition_d__6;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass5_0;
}
namespace HMUI {
class __ViewControllerTransitionHelpers____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ViewControllerTransitionHelpers);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0);
MARK_REF_PTR_T(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0);
// Type: ::<DoPresentTransition>d__3
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13606))
// CS Name: ::ViewControllerTransitionHelpers::<DoPresentTransition>d__3*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoPresentTransition_d__3 : public ::System::Object {
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

/// @brief Field animationDirection offset 0x20
 __declspec(property(get=__get_animationDirection, put=__set_animationDirection)) ::HMUI::__ViewController__AnimationDirection  animationDirection;

/// @brief Field toPresentViewController offset 0x28
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field toDismissViewController offset 0x30
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

/// @brief Field moveOffsetMultiplier offset 0x38
 __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier)) float_t  moveOffsetMultiplier;

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

constexpr void __set_animationDirection(::HMUI::__ViewController__AnimationDirection  value) ;

constexpr ::HMUI::__ViewController__AnimationDirection& __get_animationDirection() ;

constexpr ::HMUI::__ViewController__AnimationDirection const& __get_animationDirection() const;

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

constexpr void __set_moveOffsetMultiplier(float_t  value) ;

constexpr float_t& __get_moveOffsetMultiplier() ;

constexpr float_t const& __get_moveOffsetMultiplier() const;

static inline ::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212e730 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212e970 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212e974 size 0x94 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212ea08 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212ea10 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212ea50 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers___DoPresentTransition_d__3(__ViewControllerTransitionHelpers___DoPresentTransition_d__3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoPresentTransition_d__3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers___DoPresentTransition_d__3(__ViewControllerTransitionHelpers___DoPresentTransition_d__3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers___DoPresentTransition_d__3()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3, 0x40>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<DoDismissTransition>d__4
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13607))
// CS Name: ::ViewControllerTransitionHelpers::<DoDismissTransition>d__4*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoDismissTransition_d__4 : public ::System::Object {
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

/// @brief Field animationDirection offset 0x20
 __declspec(property(get=__get_animationDirection, put=__set_animationDirection)) ::HMUI::__ViewController__AnimationDirection  animationDirection;

/// @brief Field toPresentViewController offset 0x28
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field toDismissViewController offset 0x30
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

/// @brief Field moveOffsetMultiplier offset 0x38
 __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier)) float_t  moveOffsetMultiplier;

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

constexpr void __set_animationDirection(::HMUI::__ViewController__AnimationDirection  value) ;

constexpr ::HMUI::__ViewController__AnimationDirection& __get_animationDirection() ;

constexpr ::HMUI::__ViewController__AnimationDirection const& __get_animationDirection() const;

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

constexpr void __set_moveOffsetMultiplier(float_t  value) ;

constexpr float_t& __get_moveOffsetMultiplier() ;

constexpr float_t const& __get_moveOffsetMultiplier() const;

static inline ::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212e758 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212ea58 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212ea5c size 0x94 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212eaf0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212eaf8 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212eb38 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers___DoDismissTransition_d__4(__ViewControllerTransitionHelpers___DoDismissTransition_d__4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoDismissTransition_d__4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers___DoDismissTransition_d__4(__ViewControllerTransitionHelpers___DoDismissTransition_d__4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers___DoDismissTransition_d__4()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4, 0x40>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass5_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13608))
// CS Name: ::ViewControllerTransitionHelpers::<>c__DisplayClass5_0*
class CORDL_TYPE __ViewControllerTransitionHelpers____c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field toPresentViewController offset 0x10
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field moveOffset offset 0x18
 __declspec(property(get=__get_moveOffset, put=__set_moveOffset)) float_t  moveOffset;

/// @brief Field toDismissViewController offset 0x20
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

/// @brief Field baseCanvasGroupAlpha offset 0x28
 __declspec(property(get=__get_baseCanvasGroupAlpha, put=__set_baseCanvasGroupAlpha)) float_t  baseCanvasGroupAlpha;

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_moveOffset(float_t  value) ;

constexpr float_t& __get_moveOffset() ;

constexpr float_t const& __get_moveOffset() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

constexpr void __set_baseCanvasGroupAlpha(float_t  value) ;

constexpr float_t& __get_baseCanvasGroupAlpha() ;

constexpr float_t const& __get_baseCanvasGroupAlpha() const;

static inline ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* New_ctor() ;

/// @brief Method .ctor addr 0x212eb40 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DoHorizontalTransition>b__0 addr 0x212eb48 size 0xd0 virtual false final false
inline void _DoHorizontalTransition_b__0(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers____c__DisplayClass5_0(__ViewControllerTransitionHelpers____c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers____c__DisplayClass5_0(__ViewControllerTransitionHelpers____c__DisplayClass5_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers____c__DisplayClass5_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<DoHorizontalTransition>d__5
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13609))
// CS Name: ::ViewControllerTransitionHelpers::<DoHorizontalTransition>d__5*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 : public ::System::Object {
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

/// @brief Field toPresentViewController offset 0x20
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field toDismissViewController offset 0x28
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

/// @brief Field moveOffsetMultiplier offset 0x30
 __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier)) float_t  moveOffsetMultiplier;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*  __8__1;

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

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

constexpr void __set_moveOffsetMultiplier(float_t  value) ;

constexpr float_t& __get_moveOffsetMultiplier() ;

constexpr float_t const& __get_moveOffsetMultiplier() const;

constexpr void __set___8__1(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*  value) ;

constexpr ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*> __get___8__1() const;

static inline ::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212e804 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212ec18 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212ec1c size 0x158 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212ed74 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212ed7c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212edbc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5(__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers___DoHorizontalTransition_d__5()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5, 0x40>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass6_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13610))
// CS Name: ::ViewControllerTransitionHelpers::<>c__DisplayClass6_0*
class CORDL_TYPE __ViewControllerTransitionHelpers____c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field toPresentViewController offset 0x10
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field moveOffset offset 0x18
 __declspec(property(get=__get_moveOffset, put=__set_moveOffset)) float_t  moveOffset;

/// @brief Field baseCanvasGroupAlpha offset 0x1c
 __declspec(property(get=__get_baseCanvasGroupAlpha, put=__set_baseCanvasGroupAlpha)) float_t  baseCanvasGroupAlpha;

/// @brief Field toDismissViewController offset 0x20
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_moveOffset(float_t  value) ;

constexpr float_t& __get_moveOffset() ;

constexpr float_t const& __get_moveOffset() const;

constexpr void __set_baseCanvasGroupAlpha(float_t  value) ;

constexpr float_t& __get_baseCanvasGroupAlpha() ;

constexpr float_t const& __get_baseCanvasGroupAlpha() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

static inline ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* New_ctor() ;

/// @brief Method .ctor addr 0x212edc4 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <DoVerticalTransition>b__0 addr 0x212edcc size 0xe4 virtual false final false
inline void _DoVerticalTransition_b__0(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers____c__DisplayClass6_0(__ViewControllerTransitionHelpers____c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers____c__DisplayClass6_0(__ViewControllerTransitionHelpers____c__DisplayClass6_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers____c__DisplayClass6_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0, 0x28>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<DoVerticalTransition>d__6
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13611))
// CS Name: ::ViewControllerTransitionHelpers::<DoVerticalTransition>d__6*
class CORDL_TYPE __ViewControllerTransitionHelpers___DoVerticalTransition_d__6 : public ::System::Object {
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

/// @brief Field toPresentViewController offset 0x20
 __declspec(property(get=__get_toPresentViewController, put=__set_toPresentViewController)) ::HMUI::ViewController*  toPresentViewController;

/// @brief Field toDismissViewController offset 0x28
 __declspec(property(get=__get_toDismissViewController, put=__set_toDismissViewController)) ::HMUI::ViewController*  toDismissViewController;

/// @brief Field moveOffsetMultiplier offset 0x30
 __declspec(property(get=__get_moveOffsetMultiplier, put=__set_moveOffsetMultiplier)) float_t  moveOffsetMultiplier;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*  __8__1;

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

constexpr void __set_toPresentViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toPresentViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toPresentViewController() const;

constexpr void __set_toDismissViewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_toDismissViewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_toDismissViewController() const;

constexpr void __set_moveOffsetMultiplier(float_t  value) ;

constexpr float_t& __get_moveOffsetMultiplier() ;

constexpr float_t const& __get_moveOffsetMultiplier() const;

constexpr void __set___8__1(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*  value) ;

constexpr ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*> __get___8__1() const;

static inline ::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212e8b0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212eeb0 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212eeb4 size 0x15c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212f010 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212f018 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212f058 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___DoVerticalTransition_d__6", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers___DoVerticalTransition_d__6(__ViewControllerTransitionHelpers___DoVerticalTransition_d__6 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers___DoVerticalTransition_d__6()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6, 0x40>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<AnimationCoroutine>d__8
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13612))
// CS Name: ::ViewControllerTransitionHelpers::<AnimationCoroutine>d__8*
class CORDL_TYPE __ViewControllerTransitionHelpers___AnimationCoroutine_d__8 : public ::System::Object {
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

/// @brief Field transitionAnimation offset 0x20
 __declspec(property(get=__get_transitionAnimation, put=__set_transitionAnimation)) ::System::Action_1<float_t>*  transitionAnimation;

/// @brief Field <elapsedTime>5__2 offset 0x28
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

constexpr void __set_transitionAnimation(::System::Action_1<float_t>*  value) ;

constexpr ::System::Action_1<float_t>* __get_transitionAnimation() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> __get_transitionAnimation() const;

constexpr void __set__elapsedTime_5__2(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__2() ;

constexpr float_t const& __get__elapsedTime_5__2() const;

static inline ::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x212e940 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x212f060 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x212f064 size 0xdc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x212f140 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x212f148 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x212f188 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ViewControllerTransitionHelpers___AnimationCoroutine_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ViewControllerTransitionHelpers___AnimationCoroutine_d__8(__ViewControllerTransitionHelpers___AnimationCoroutine_d__8 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ViewControllerTransitionHelpers___AnimationCoroutine_d__8()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::ViewControllerTransitionHelpers
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13613))
// CS Name: ::HMUI::ViewControllerTransitionHelpers*
class CORDL_TYPE ViewControllerTransitionHelpers : public ::System::Object {
public:
// Declarations
using _AnimationCoroutine_d__8 = ::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8;

using _DoVerticalTransition_d__6 = ::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6;

using __c__DisplayClass6_0 = ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0;

using _DoHorizontalTransition_d__5 = ::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5;

using __c__DisplayClass5_0 = ::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0;

using _DoDismissTransition_d__4 = ::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4;

using _DoPresentTransition_d__3 = ::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kTransitionDuration offset 0x0
static constexpr float_t  kTransitionDuration{0.4};

/// @brief Field kHorizontalTransitionMoveOffset offset 0x0
static constexpr float_t  kHorizontalTransitionMoveOffset{2.0};

/// @brief Field kVerticalTransitionMoveOffset offset 0x0
static constexpr float_t  kVerticalTransitionMoveOffset{0.5};

/// @brief Method DoPresentTransition addr 0x212e028 size 0x8c virtual false final false
static inline ::System::Collections::IEnumerator* DoPresentTransition(::HMUI::ViewController*  toPresentViewController, ::HMUI::ViewController*  toDismissViewController, ::HMUI::__ViewController__AnimationDirection  animationDirection, float_t  moveOffsetMultiplier) ;

/// @brief Method DoDismissTransition addr 0x212e654 size 0x8c virtual false final false
static inline ::System::Collections::IEnumerator* DoDismissTransition(::HMUI::ViewController*  toPresentViewController, ::HMUI::ViewController*  toDismissViewController, ::HMUI::__ViewController__AnimationDirection  animationDirection, float_t  moveOffsetMultiplier) ;

/// @brief Method DoHorizontalTransition addr 0x212e780 size 0x84 virtual false final false
static inline ::System::Collections::IEnumerator* DoHorizontalTransition(::HMUI::ViewController*  toPresentViewController, ::HMUI::ViewController*  toDismissViewController, float_t  moveOffsetMultiplier) ;

/// @brief Method DoVerticalTransition addr 0x212e82c size 0x84 virtual false final false
static inline ::System::Collections::IEnumerator* DoVerticalTransition(::HMUI::ViewController*  toPresentViewController, ::HMUI::ViewController*  toDismissViewController, float_t  moveOffsetMultiplier) ;

/// @brief Method ImmediateTransition addr 0x212e0b4 size 0xfc virtual false final false
static inline void ImmediateTransition(::HMUI::ViewController*  toPresentViewController, ::HMUI::ViewController*  toDismissViewController) ;

/// @brief Method AnimationCoroutine addr 0x212e8d8 size 0x68 virtual false final false
static inline ::System::Collections::IEnumerator* AnimationCoroutine(::System::Action_1<float_t>*  transitionAnimation) ;

static inline ::HMUI::ViewControllerTransitionHelpers* New_ctor() ;

/// @brief Method .ctor addr 0x212e968 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ViewControllerTransitionHelpers(ViewControllerTransitionHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ViewControllerTransitionHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ViewControllerTransitionHelpers(ViewControllerTransitionHelpers const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ViewControllerTransitionHelpers()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ViewControllerTransitionHelpers, 0x10>, "Size mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ViewControllerTransitionHelpers);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ViewControllerTransitionHelpers*, "HMUI", "ViewControllerTransitionHelpers");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___AnimationCoroutine_d__8*, "HMUI", "ViewControllerTransitionHelpers/<AnimationCoroutine>d__8");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoDismissTransition_d__4*, "HMUI", "ViewControllerTransitionHelpers/<DoDismissTransition>d__4");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoHorizontalTransition_d__5*, "HMUI", "ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoPresentTransition_d__3*, "HMUI", "ViewControllerTransitionHelpers/<DoPresentTransition>d__3");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers___DoVerticalTransition_d__6*, "HMUI", "ViewControllerTransitionHelpers/<DoVerticalTransition>d__6");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass5_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass5_0");
NEED_NO_BOX(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__ViewControllerTransitionHelpers____c__DisplayClass6_0*, "HMUI", "ViewControllerTransitionHelpers/<>c__DisplayClass6_0");
