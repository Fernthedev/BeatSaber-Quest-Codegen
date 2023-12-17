#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Manipulator_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyboardNavigationManipulator)
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass5_0;
}
namespace UnityEngine::UIElements {
struct KeyboardNavigationOperation;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass6_0;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyboardNavigationManipulator;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass5_0;
}
namespace UnityEngine::UIElements {
struct __KeyboardNavigationManipulator____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyboardNavigationManipulator);
MARK_VAL_T(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0);
MARK_VAL_T(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass5_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6828))
// CS Name: ::KeyboardNavigationManipulator::<>c__DisplayClass5_0
struct CORDL_TYPE __KeyboardNavigationManipulator____c__DisplayClass5_0 : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field evt offset 0x0
 __declspec(property(get=__get_evt, put=__set_evt)) ::UnityEngine::UIElements::KeyDownEvent*  evt;

constexpr void __set_evt(::UnityEngine::UIElements::KeyDownEvent*  value) ;

constexpr ::UnityEngine::UIElements::KeyDownEvent* __get_evt() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyDownEvent*> __get_evt() const;

// Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: None }]
constexpr __KeyboardNavigationManipulator____c__DisplayClass5_0(::UnityEngine::UIElements::KeyDownEvent*  evt) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __KeyboardNavigationManipulator____c__DisplayClass5_0(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __KeyboardNavigationManipulator____c__DisplayClass5_0()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::<>c__DisplayClass6_0
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6829))
// CS Name: ::KeyboardNavigationManipulator::<>c__DisplayClass6_0
struct CORDL_TYPE __KeyboardNavigationManipulator____c__DisplayClass6_0 : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field evt offset 0x0
 __declspec(property(get=__get_evt, put=__set_evt)) ::UnityEngine::UIElements::KeyDownEvent*  evt;

constexpr void __set_evt(::UnityEngine::UIElements::KeyDownEvent*  value) ;

constexpr ::UnityEngine::UIElements::KeyDownEvent* __get_evt() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyDownEvent*> __get_evt() const;

// Ctor Parameters [CppParam { name: "evt", ty: "::UnityEngine::UIElements::KeyDownEvent*", modifiers: "", def_value: None }]
constexpr __KeyboardNavigationManipulator____c__DisplayClass6_0(::UnityEngine::UIElements::KeyDownEvent*  evt) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __KeyboardNavigationManipulator____c__DisplayClass6_0(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __KeyboardNavigationManipulator____c__DisplayClass6_0()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::KeyboardNavigationManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6905))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6830))
// CS Name: ::UnityEngine.UIElements::KeyboardNavigationManipulator*
class CORDL_TYPE KeyboardNavigationManipulator : public ::UnityEngine::UIElements::Manipulator {
public:
// Declarations
using __c__DisplayClass6_0 = ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0;

using __c__DisplayClass5_0 = ::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::UIElements::Manipulator)]{};

/// @brief Field m_Action offset 0x18
 __declspec(property(get=__get_m_Action, put=__set_m_Action)) ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  m_Action;

constexpr void __set_m_Action(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  value) ;

constexpr ::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>* __get_m_Action() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*> __get_m_Action() const;

static inline ::UnityEngine::UIElements::KeyboardNavigationManipulator* New_ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  action) ;

/// @brief Method .ctor addr 0x2dc3a74 size 0x28 virtual false final false
inline void _ctor(::System::Action_2<::UnityEngine::UIElements::KeyboardNavigationOperation,::UnityEngine::UIElements::EventBase*>*  action) ;

/// @brief Method RegisterCallbacksOnTarget addr 0x2dc3a9c size 0x254 virtual true final false
inline void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x2dc3cf0 size 0x254 virtual true final false
inline void UnregisterCallbacksFromTarget() ;

/// @brief Method OnKeyDown addr 0x2dc3f44 size 0xe8 virtual false final false
inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt) ;

/// @brief Method OnRuntimeKeyDown addr 0x2dc4078 size 0x4c virtual false final false
inline void OnRuntimeKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt) ;

/// @brief Method OnEditorKeyDown addr 0x2dc402c size 0x4c virtual false final false
inline void OnEditorKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt) ;

/// @brief Method OnNavigationCancel addr 0x2dc4294 size 0x24 virtual false final false
inline void OnNavigationCancel(::UnityEngine::UIElements::NavigationCancelEvent*  evt) ;

/// @brief Method OnNavigationSubmit addr 0x2dc42b8 size 0x24 virtual false final false
inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent*  evt) ;

/// @brief Method OnNavigationMove addr 0x2dc42dc size 0x68 virtual false final false
inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent*  evt) ;

/// @brief Method Invoke addr 0x2dc4180 size 0x20 virtual false final false
inline void Invoke(::UnityEngine::UIElements::KeyboardNavigationOperation  operation, ::UnityEngine::UIElements::EventBase*  evt) ;

/// @brief Method <OnRuntimeKeyDown>g__GetOperation|5_0 addr 0x2dc40c4 size 0xbc virtual false final false
static inline ::UnityEngine::UIElements::KeyboardNavigationOperation _OnRuntimeKeyDown_g__GetOperation_5_0(ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method <OnEditorKeyDown>g__GetOperation|6_0 addr 0x2dc41a0 size 0xf4 virtual false final false
static inline ::UnityEngine::UIElements::KeyboardNavigationOperation _OnEditorKeyDown_g__GetOperation_6_0(ByRef<::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0>  _cordl_fixed_empty_name_whitespace) ;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KeyboardNavigationManipulator(KeyboardNavigationManipulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KeyboardNavigationManipulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KeyboardNavigationManipulator(KeyboardNavigationManipulator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KeyboardNavigationManipulator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyboardNavigationManipulator, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyboardNavigationManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyboardNavigationManipulator*, "UnityEngine.UIElements", "KeyboardNavigationManipulator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass5_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass5_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__KeyboardNavigationManipulator____c__DisplayClass6_0, "UnityEngine.UIElements", "KeyboardNavigationManipulator/<>c__DisplayClass6_0");
