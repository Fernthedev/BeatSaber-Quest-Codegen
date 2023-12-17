#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboard)
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class BoxCollider;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__KeyboardPresentation;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___Start_d__88;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___InitializeHandPresenceData_d__89;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard____c;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__KeyboardPresentation;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardState;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___Start_d__88;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class __OVRTrackedKeyboard____c;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState);
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboard);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTrackedKeyboard____c);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent);
// Type: ::TrackedKeyboardState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8028))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardState
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped
enum struct ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_NoTrackableKeyboard = static_cast<int32_t>(0x1),
__E_Offline = static_cast<int32_t>(0x2),
__E_StartedNotTracked = static_cast<int32_t>(0x3),
__E_Stale = static_cast<int32_t>(0x4),
__E_Valid = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
__E_ErrorExtensionFailed = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Uninitialized;

/// @brief Field NoTrackableKeyboard value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const NoTrackableKeyboard;

/// @brief Field Offline value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Offline;

/// @brief Field StartedNotTracked value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const StartedNotTracked;

/// @brief Field Stale value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Stale;

/// @brief Field Valid value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Valid;

/// @brief Field Error value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const Error;

/// @brief Field ErrorExtensionFailed value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const ErrorExtensionFailed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped () const noexcept {
return std::bit_cast<____OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRTrackedKeyboard__TrackedKeyboardState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTrackedKeyboard__TrackedKeyboardState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard__TrackedKeyboardState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::KeyboardPresentation
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8029))
// CS Name: ::OVRTrackedKeyboard::KeyboardPresentation
struct CORDL_TYPE __OVRTrackedKeyboard__KeyboardPresentation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped
enum struct ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped : int32_t {
__E_PreferOpaque = static_cast<int32_t>(0x0),
__E_PreferKeyLabels = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field PreferOpaque value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const PreferOpaque;

/// @brief Field PreferKeyLabels value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const PreferKeyLabels;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped () const noexcept {
return std::bit_cast<____OVRTrackedKeyboard__KeyboardPresentation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRTrackedKeyboard__KeyboardPresentation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTrackedKeyboard__KeyboardPresentation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard__KeyboardPresentation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardVisibilityChangedEvent
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8030))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardVisibilityChangedEvent
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ActiveKeyboardName offset 0x0
 __declspec(property(get=__get_ActiveKeyboardName, put=__set_ActiveKeyboardName)) ::StringW  ActiveKeyboardName;

/// @brief Field State offset 0x8
 __declspec(property(get=__get_State, put=__set_State)) ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  State;

/// @brief Field TrackingTimeout offset 0xc
 __declspec(property(get=__get_TrackingTimeout, put=__set_TrackingTimeout)) bool  TrackingTimeout;

constexpr void __set_ActiveKeyboardName(::StringW  value) ;

constexpr ::StringW& __get_ActiveKeyboardName() ;

constexpr ::StringW const& __get_ActiveKeyboardName() const;

constexpr void __set_State(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value) ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& __get_State() ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& __get_State() const;

constexpr void __set_TrackingTimeout(bool  value) ;

constexpr bool& __get_TrackingTimeout() ;

constexpr bool const& __get_TrackingTimeout() const;

/// @brief Method .ctor addr 0x2795680 size 0x14 virtual false final false
inline void _ctor(::StringW  keyboardModel, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  state, bool  timeout) ;

// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "State", ty: "::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: None }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: None }]
constexpr __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(::StringW  ActiveKeyboardName, ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  State, bool  TrackingTimeout) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardSetActiveEvent
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8031))
// CS Name: ::OVRTrackedKeyboard::TrackedKeyboardSetActiveEvent
struct CORDL_TYPE __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field IsEnabled offset 0x0
 __declspec(property(get=__get_IsEnabled, put=__set_IsEnabled)) bool  IsEnabled;

constexpr void __set_IsEnabled(bool  value) ;

constexpr bool& __get_IsEnabled() ;

constexpr bool const& __get_IsEnabled() const;

/// @brief Method .ctor addr 0x279589c size 0xc virtual false final false
inline void _ctor(bool  isEnabled) ;

// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: None }]
constexpr __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool  IsEnabled) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<Start>d__88
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8032))
// CS Name: ::OVRTrackedKeyboard::<Start>d__88*
class CORDL_TYPE __OVRTrackedKeyboard___Start_d__88 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRTrackedKeyboard*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2793de0 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27958a8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27958ac size 0x104 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x27959b0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27959b8 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27959f8 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___Start_d__88", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard___Start_d__88(__OVRTrackedKeyboard___Start_d__88 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___Start_d__88", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard___Start_d__88(__OVRTrackedKeyboard___Start_d__88 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard___Start_d__88()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<InitializeHandPresenceData>d__89
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8033))
// CS Name: ::OVRTrackedKeyboard::<InitializeHandPresenceData>d__89*
class CORDL_TYPE __OVRTrackedKeyboard___InitializeHandPresenceData_d__89 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRTrackedKeyboard*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2793e70 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2795a00 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2795a04 size 0x170 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2795b74 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2795b7c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2795bbc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard___InitializeHandPresenceData_d__89()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<UpdateTrackingStateCoroutine>d__95
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8034))
// CS Name: ::OVRTrackedKeyboard::<UpdateTrackingStateCoroutine>d__95*
class CORDL_TYPE __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRTrackedKeyboard*  __4__this;

/// @brief Field <keyboardInfo>5__2 offset 0x28
 __declspec(property(get=__get__keyboardInfo_5__2, put=__set__keyboardInfo_5__2)) ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  _keyboardInfo_5__2;

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

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> __get___4__this() const;

constexpr void __set__keyboardInfo_5__2(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value) ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __get__keyboardInfo_5__2() ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __get__keyboardInfo_5__2() const;

static inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2794544 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2795bc4 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2795bc8 size 0x4bc virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2796084 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x279608c size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27960cc size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<StartKeyboardTrackingCoroutine>d__96
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8035))
// CS Name: ::OVRTrackedKeyboard::<StartKeyboardTrackingCoroutine>d__96*
class CORDL_TYPE __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRTrackedKeyboard*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x27945d4 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27960d4 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27960d8 size 0x2c4 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x279639c size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27963a4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27963e4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<UpdateKeyboardPose>d__98
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8036))
// CS Name: ::OVRTrackedKeyboard::<UpdateKeyboardPose>d__98*
class CORDL_TYPE __OVRTrackedKeyboard___UpdateKeyboardPose_d__98 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRTrackedKeyboard*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> __get___4__this() const;

static inline ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x279498c size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27963ec size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27963f0 size 0x9a8 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2796d98 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2796da0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2796de0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard___UpdateKeyboardPose_d__98()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8037))
// CS Name: ::OVRTrackedKeyboard::<>c*
class CORDL_TYPE __OVRTrackedKeyboard____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::GlobalNamespace::__OVRTrackedKeyboard____c*  value) ;

static inline ::GlobalNamespace::__OVRTrackedKeyboard____c* getStaticF___9() ;

static inline void setStaticF___9__113_0(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*  value) ;

static inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* getStaticF___9__113_0() ;

static inline void setStaticF___9__113_1(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*  value) ;

static inline ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* getStaticF___9__113_1() ;

static inline ::GlobalNamespace::__OVRTrackedKeyboard____c* New_ctor() ;

/// @brief Method .ctor addr 0x2796e4c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__113_0 addr 0x2796e54 size 0x4 virtual false final false
inline void __ctor_b__113_0(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent  _p0_) ;

/// @brief Method <.ctor>b__113_1 addr 0x2796e58 size 0x4 virtual false final false
inline void __ctor_b__113_1(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent  _p0_) ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRTrackedKeyboard____c(__OVRTrackedKeyboard____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRTrackedKeyboard____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRTrackedKeyboard____c(__OVRTrackedKeyboard____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRTrackedKeyboard____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__113_0

// Static field <>9__113_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboard____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRTrackedKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8038))
// CS Name: ::OVRTrackedKeyboard*
class CORDL_TYPE OVRTrackedKeyboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__OVRTrackedKeyboard____c;

using _UpdateKeyboardPose_d__98 = ::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98;

using _StartKeyboardTrackingCoroutine_d__96 = ::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;

using _UpdateTrackingStateCoroutine_d__95 = ::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;

using _InitializeHandPresenceData_d__89 = ::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89;

using _Start_d__88 = ::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88;

using TrackedKeyboardSetActiveEvent = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;

using TrackedKeyboardVisibilityChangedEvent = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;

using KeyboardPresentation = ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation;

using TrackedKeyboardState = ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x190};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x190 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field STALE_TIMEOUT offset 0x0
static constexpr float_t  STALE_TIMEOUT{10.0};

/// @brief Field FILTERED_POSE_TIMEOUT offset 0x0
static constexpr float_t  FILTERED_POSE_TIMEOUT{15.0};

/// @brief Field <CurrentKeyboardAngleFromUp>k__BackingField offset 0x18
 __declspec(property(get=__get__CurrentKeyboardAngleFromUp_k__BackingField, put=__set__CurrentKeyboardAngleFromUp_k__BackingField)) float_t  _CurrentKeyboardAngleFromUp_k__BackingField;

/// @brief Field <TrackingState>k__BackingField offset 0x1c
 __declspec(property(get=__get__TrackingState_k__BackingField, put=__set__TrackingState_k__BackingField)) ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  _TrackingState_k__BackingField;

/// @brief Field <ActiveKeyboardInfo>k__BackingField offset 0x20
 __declspec(property(get=__get__ActiveKeyboardInfo_k__BackingField, put=__set__ActiveKeyboardInfo_k__BackingField)) ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  _ActiveKeyboardInfo_k__BackingField;

/// @brief Field <SystemKeyboardInfo>k__BackingField offset 0x48
 __declspec(property(get=__get__SystemKeyboardInfo_k__BackingField, put=__set__SystemKeyboardInfo_k__BackingField)) ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  _SystemKeyboardInfo_k__BackingField;

/// @brief Field trackingEnabled offset 0x70
 __declspec(property(get=__get_trackingEnabled, put=__set_trackingEnabled)) bool  trackingEnabled;

/// @brief Field connectionRequired offset 0x71
 __declspec(property(get=__get_connectionRequired, put=__set_connectionRequired)) bool  connectionRequired;

/// @brief Field showUntracked offset 0x72
 __declspec(property(get=__get_showUntracked, put=__set_showUntracked)) bool  showUntracked;

/// @brief Field keyboardQueryFlags offset 0x74
 __declspec(property(get=__get_keyboardQueryFlags, put=__set_keyboardQueryFlags)) ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  keyboardQueryFlags;

/// @brief Field presentation offset 0x78
 __declspec(property(get=__get_presentation, put=__set_presentation)) ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  presentation;

/// @brief Field textureFiltering offset 0x7c
 __declspec(property(get=__get_textureFiltering, put=__set_textureFiltering)) ::GlobalNamespace::OVRTextureQualityFiltering  textureFiltering;

/// @brief Field mipmapBias offset 0x80
 __declspec(property(get=__get_mipmapBias, put=__set_mipmapBias)) float_t  mipmapBias;

/// @brief Field PassthroughBorderMultiplier offset 0x84
 __declspec(property(get=__get_PassthroughBorderMultiplier, put=__set_PassthroughBorderMultiplier)) float_t  PassthroughBorderMultiplier;

/// @brief Field keyboardModelShader offset 0x88
 __declspec(property(get=__get_keyboardModelShader, put=__set_keyboardModelShader)) ::UnityEngine::Shader*  keyboardModelShader;

/// @brief Field keyboardModelAlphaBlendShader offset 0x90
 __declspec(property(get=__get_keyboardModelAlphaBlendShader, put=__set_keyboardModelAlphaBlendShader)) ::UnityEngine::Shader*  keyboardModelAlphaBlendShader;

/// @brief Field currentKeyboardPresentationStyles offset 0x98
 __declspec(property(get=__get_currentKeyboardPresentationStyles, put=__set_currentKeyboardPresentationStyles)) ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  currentKeyboardPresentationStyles;

/// @brief Field projectedPassthroughOpaque_ offset 0xa0
 __declspec(property(get=__get_projectedPassthroughOpaque_, put=__set_projectedPassthroughOpaque_)) ::GlobalNamespace::OVROverlay*  projectedPassthroughOpaque_;

/// @brief Field activeKeyboardRenderers_ offset 0xa8
 __declspec(property(get=__get_activeKeyboardRenderers_, put=__set_activeKeyboardRenderers_)) ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  activeKeyboardRenderers_;

/// @brief Field activeKeyboardMesh_ offset 0xb0
 __declspec(property(get=__get_activeKeyboardMesh_, put=__set_activeKeyboardMesh_)) ::UnityEngine::GameObject*  activeKeyboardMesh_;

/// @brief Field keyboardMeshNodes_ offset 0xb8
 __declspec(property(get=__get_keyboardMeshNodes_, put=__set_keyboardMeshNodes_)) ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  keyboardMeshNodes_;

/// @brief Field activeKeyboardMeshRenderer_ offset 0xc0
 __declspec(property(get=__get_activeKeyboardMeshRenderer_, put=__set_activeKeyboardMeshRenderer_)) ::UnityEngine::MeshRenderer*  activeKeyboardMeshRenderer_;

/// @brief Field passthroughQuad_ offset 0xc8
 __declspec(property(get=__get_passthroughQuad_, put=__set_passthroughQuad_)) ::UnityEngine::GameObject*  passthroughQuad_;

/// @brief Field opaqueShader_ offset 0xd0
 __declspec(property(get=__get_opaqueShader_, put=__set_opaqueShader_)) ::UnityEngine::Shader*  opaqueShader_;

/// @brief Field dynamicQualityTexture_ offset 0xd8
 __declspec(property(get=__get_dynamicQualityTexture_, put=__set_dynamicQualityTexture_)) ::UnityEngine::Texture2D*  dynamicQualityTexture_;

/// @brief Field untrackedPosition_ offset 0xe0
 __declspec(property(get=__get_untrackedPosition_, put=__set_untrackedPosition_)) ::UnityEngine::Vector3  untrackedPosition_;

/// @brief Field KeyLabelModeShader offset 0xf0
 __declspec(property(get=__get_KeyLabelModeShader, put=__set_KeyLabelModeShader)) ::UnityEngine::Shader*  KeyLabelModeShader;

/// @brief Field PassthroughShader offset 0xf8
 __declspec(property(get=__get_PassthroughShader, put=__set_PassthroughShader)) ::UnityEngine::Shader*  PassthroughShader;

/// @brief Field projectedPassthroughRoot offset 0x100
 __declspec(property(get=__get_projectedPassthroughRoot, put=__set_projectedPassthroughRoot)) ::UnityEngine::Transform*  projectedPassthroughRoot;

/// @brief Field projectedPassthroughMesh offset 0x108
 __declspec(property(get=__get_projectedPassthroughMesh, put=__set_projectedPassthroughMesh)) ::UnityEngine::MeshFilter*  projectedPassthroughMesh;

/// @brief Field ProjectedPassthroughKeyLabel offset 0x110
 __declspec(property(get=__get_ProjectedPassthroughKeyLabel, put=__set_ProjectedPassthroughKeyLabel)) ::GlobalNamespace::OVRPassthroughLayer*  ProjectedPassthroughKeyLabel;

/// @brief Field TrackedKeyboardActiveChanged offset 0x118
 __declspec(property(get=__get_TrackedKeyboardActiveChanged, put=__set_TrackedKeyboardActiveChanged)) ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*  TrackedKeyboardActiveChanged;

/// @brief Field TrackedKeyboardVisibilityChanged offset 0x120
 __declspec(property(get=__get_TrackedKeyboardVisibilityChanged, put=__set_TrackedKeyboardVisibilityChanged)) ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*  TrackedKeyboardVisibilityChanged;

/// @brief Field ActiveKeyboardTransform offset 0x128
 __declspec(property(get=__get_ActiveKeyboardTransform, put=__set_ActiveKeyboardTransform)) ::UnityEngine::Transform*  ActiveKeyboardTransform;

/// @brief Field HandsOverKeyboard offset 0x130
 __declspec(property(get=__get_HandsOverKeyboard, put=__set_HandsOverKeyboard)) bool  HandsOverKeyboard;

/// @brief Field cameraRig_ offset 0x138
 __declspec(property(get=__get_cameraRig_, put=__set_cameraRig_)) ::GlobalNamespace::OVRCameraRig*  cameraRig_;

/// @brief Field updateKeyboardRoutine_ offset 0x140
 __declspec(property(get=__get_updateKeyboardRoutine_, put=__set_updateKeyboardRoutine_)) ::UnityEngine::Coroutine*  updateKeyboardRoutine_;

/// @brief Field keyboardBoundingBox_ offset 0x148
 __declspec(property(get=__get_keyboardBoundingBox_, put=__set_keyboardBoundingBox_)) ::UnityEngine::BoxCollider*  keyboardBoundingBox_;

/// @brief Field staleTimeoutCounter_ offset 0x150
 __declspec(property(get=__get_staleTimeoutCounter_, put=__set_staleTimeoutCounter_)) float_t  staleTimeoutCounter_;

/// @brief Field reacquisitionTimer_ offset 0x154
 __declspec(property(get=__get_reacquisitionTimer_, put=__set_reacquisitionTimer_)) float_t  reacquisitionTimer_;

/// @brief Field sendFilteredPoseEventTimer_ offset 0x158
 __declspec(property(get=__get_sendFilteredPoseEventTimer_, put=__set_sendFilteredPoseEventTimer_)) float_t  sendFilteredPoseEventTimer_;

/// @brief Field skippedPoseCount_ offset 0x15c
 __declspec(property(get=__get_skippedPoseCount_, put=__set_skippedPoseCount_)) int32_t  skippedPoseCount_;

/// @brief Field EWAPosition offset 0x160
 __declspec(property(get=__get_EWAPosition, put=__set_EWAPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  EWAPosition;

/// @brief Field EWARotation offset 0x170
 __declspec(property(get=__get_EWARotation, put=__set_EWARotation)) ::System::Nullable_1<::UnityEngine::Quaternion>  EWARotation;

/// @brief Field HAND_HEIGHT_TUNING offset 0x184
 __declspec(property(get=__get_HAND_HEIGHT_TUNING, put=__set_HAND_HEIGHT_TUNING)) float_t  HAND_HEIGHT_TUNING;

/// @brief Field UseHeuristicRollback offset 0x188
 __declspec(property(get=__get_UseHeuristicRollback, put=__set_UseHeuristicRollback)) bool  UseHeuristicRollback;

 __declspec(property(get=get_CurrentKeyboardAngleFromUp, put=set_CurrentKeyboardAngleFromUp)) float_t  CurrentKeyboardAngleFromUp;

 __declspec(property(get=get_TrackingState, put=set_TrackingState)) ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  TrackingState;

 __declspec(property(get=get_ActiveKeyboardInfo, put=set_ActiveKeyboardInfo)) ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  ActiveKeyboardInfo;

 __declspec(property(get=get_SystemKeyboardInfo, put=set_SystemKeyboardInfo)) ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  SystemKeyboardInfo;

 __declspec(property(get=get_Presentation, put=set_Presentation)) ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  Presentation;

 __declspec(property(get=get_TrackingEnabled, put=set_TrackingEnabled)) bool  TrackingEnabled;

 __declspec(property(get=get_ConnectionRequired, put=set_ConnectionRequired)) bool  ConnectionRequired;

 __declspec(property(get=get_ShowUntracked, put=set_ShowUntracked)) bool  ShowUntracked;

 __declspec(property(get=get_RemoteKeyboard, put=set_RemoteKeyboard)) bool  RemoteKeyboard;

 __declspec(property(get=get_KeyboardQueryFlags, put=set_KeyboardQueryFlags)) ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  KeyboardQueryFlags;

 __declspec(property(get=get_PassthroughOverlay, put=set_PassthroughOverlay)) ::GlobalNamespace::OVROverlay*  PassthroughOverlay;

static inline void setStaticF_underlayScaleMultX_(float_t  value) ;

static inline float_t getStaticF_underlayScaleMultX_() ;

static inline void setStaticF_underlayScaleConstY_(float_t  value) ;

static inline float_t getStaticF_underlayScaleConstY_() ;

static inline void setStaticF_underlayScaleMultZ_(float_t  value) ;

static inline float_t getStaticF_underlayScaleMultZ_() ;

static inline void setStaticF_underlayOffset_(::UnityEngine::Vector3  value) ;

static inline ::UnityEngine::Vector3 getStaticF_underlayOffset_() ;

static inline void setStaticF_boundingBoxAboveKeyboardY_(float_t  value) ;

static inline float_t getStaticF_boundingBoxAboveKeyboardY_() ;

static inline void setStaticF_initialHorizontalDistanceKeyboard_(float_t  value) ;

static inline float_t getStaticF_initialHorizontalDistanceKeyboard_() ;

static inline void setStaticF_initialVerticalDistanceKeyboard_(float_t  value) ;

static inline float_t getStaticF_initialVerticalDistanceKeyboard_() ;

constexpr void __set__CurrentKeyboardAngleFromUp_k__BackingField(float_t  value) ;

constexpr float_t& __get__CurrentKeyboardAngleFromUp_k__BackingField() ;

constexpr float_t const& __get__CurrentKeyboardAngleFromUp_k__BackingField() const;

constexpr void __set__TrackingState_k__BackingField(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value) ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState& __get__TrackingState_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState const& __get__TrackingState_k__BackingField() const;

constexpr void __set__ActiveKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value) ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __get__ActiveKeyboardInfo_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __get__ActiveKeyboardInfo_k__BackingField() const;

constexpr void __set__SystemKeyboardInfo_k__BackingField(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value) ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo& __get__SystemKeyboardInfo_k__BackingField() ;

constexpr ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo const& __get__SystemKeyboardInfo_k__BackingField() const;

constexpr void __set_trackingEnabled(bool  value) ;

constexpr bool& __get_trackingEnabled() ;

constexpr bool const& __get_trackingEnabled() const;

constexpr void __set_connectionRequired(bool  value) ;

constexpr bool& __get_connectionRequired() ;

constexpr bool const& __get_connectionRequired() const;

constexpr void __set_showUntracked(bool  value) ;

constexpr bool& __get_showUntracked() ;

constexpr bool const& __get_showUntracked() const;

constexpr void __set_keyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags& __get_keyboardQueryFlags() ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags const& __get_keyboardQueryFlags() const;

constexpr void __set_presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  value) ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation& __get_presentation() ;

constexpr ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation const& __get_presentation() const;

constexpr void __set_textureFiltering(::GlobalNamespace::OVRTextureQualityFiltering  value) ;

constexpr ::GlobalNamespace::OVRTextureQualityFiltering& __get_textureFiltering() ;

constexpr ::GlobalNamespace::OVRTextureQualityFiltering const& __get_textureFiltering() const;

constexpr void __set_mipmapBias(float_t  value) ;

constexpr float_t& __get_mipmapBias() ;

constexpr float_t const& __get_mipmapBias() const;

constexpr void __set_PassthroughBorderMultiplier(float_t  value) ;

constexpr float_t& __get_PassthroughBorderMultiplier() ;

constexpr float_t const& __get_PassthroughBorderMultiplier() const;

constexpr void __set_keyboardModelShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_keyboardModelShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_keyboardModelShader() const;

constexpr void __set_keyboardModelAlphaBlendShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_keyboardModelAlphaBlendShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_keyboardModelAlphaBlendShader() const;

constexpr void __set_currentKeyboardPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& __get_currentKeyboardPresentationStyles() ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& __get_currentKeyboardPresentationStyles() const;

constexpr void __set_projectedPassthroughOpaque_(::GlobalNamespace::OVROverlay*  value) ;

constexpr ::GlobalNamespace::OVROverlay* __get_projectedPassthroughOpaque_() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVROverlay*> __get_projectedPassthroughOpaque_() const;

constexpr void __set_activeKeyboardRenderers_(::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*>& __get_activeKeyboardRenderers_() ;

constexpr ::ArrayW<::UnityEngine::MeshRenderer*,::Array<::UnityEngine::MeshRenderer*>*> const& __get_activeKeyboardRenderers_() const;

constexpr void __set_activeKeyboardMesh_(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_activeKeyboardMesh_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_activeKeyboardMesh_() const;

constexpr void __set_keyboardMeshNodes_(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& __get_keyboardMeshNodes_() ;

constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& __get_keyboardMeshNodes_() const;

constexpr void __set_activeKeyboardMeshRenderer_(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get_activeKeyboardMeshRenderer_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get_activeKeyboardMeshRenderer_() const;

constexpr void __set_passthroughQuad_(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get_passthroughQuad_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get_passthroughQuad_() const;

constexpr void __set_opaqueShader_(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_opaqueShader_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_opaqueShader_() const;

constexpr void __set_dynamicQualityTexture_(::UnityEngine::Texture2D*  value) ;

constexpr ::UnityEngine::Texture2D* __get_dynamicQualityTexture_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> __get_dynamicQualityTexture_() const;

constexpr void __set_untrackedPosition_(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_untrackedPosition_() ;

constexpr ::UnityEngine::Vector3 const& __get_untrackedPosition_() const;

constexpr void __set_KeyLabelModeShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_KeyLabelModeShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_KeyLabelModeShader() const;

constexpr void __set_PassthroughShader(::UnityEngine::Shader*  value) ;

constexpr ::UnityEngine::Shader* __get_PassthroughShader() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> __get_PassthroughShader() const;

constexpr void __set_projectedPassthroughRoot(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_projectedPassthroughRoot() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_projectedPassthroughRoot() const;

constexpr void __set_projectedPassthroughMesh(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get_projectedPassthroughMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get_projectedPassthroughMesh() const;

constexpr void __set_ProjectedPassthroughKeyLabel(::GlobalNamespace::OVRPassthroughLayer*  value) ;

constexpr ::GlobalNamespace::OVRPassthroughLayer* __get_ProjectedPassthroughKeyLabel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPassthroughLayer*> __get_ProjectedPassthroughKeyLabel() const;

constexpr void __set_TrackedKeyboardActiveChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>* __get_TrackedKeyboardActiveChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent>*> __get_TrackedKeyboardActiveChanged() const;

constexpr void __set_TrackedKeyboardVisibilityChanged(::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*  value) ;

constexpr ::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>* __get_TrackedKeyboardVisibilityChanged() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent>*> __get_TrackedKeyboardVisibilityChanged() const;

constexpr void __set_ActiveKeyboardTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get_ActiveKeyboardTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get_ActiveKeyboardTransform() const;

constexpr void __set_HandsOverKeyboard(bool  value) ;

constexpr bool& __get_HandsOverKeyboard() ;

constexpr bool const& __get_HandsOverKeyboard() const;

constexpr void __set_cameraRig_(::GlobalNamespace::OVRCameraRig*  value) ;

constexpr ::GlobalNamespace::OVRCameraRig* __get_cameraRig_() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> __get_cameraRig_() const;

constexpr void __set_updateKeyboardRoutine_(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get_updateKeyboardRoutine_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get_updateKeyboardRoutine_() const;

constexpr void __set_keyboardBoundingBox_(::UnityEngine::BoxCollider*  value) ;

constexpr ::UnityEngine::BoxCollider* __get_keyboardBoundingBox_() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::BoxCollider*> __get_keyboardBoundingBox_() const;

constexpr void __set_staleTimeoutCounter_(float_t  value) ;

constexpr float_t& __get_staleTimeoutCounter_() ;

constexpr float_t const& __get_staleTimeoutCounter_() const;

constexpr void __set_reacquisitionTimer_(float_t  value) ;

constexpr float_t& __get_reacquisitionTimer_() ;

constexpr float_t const& __get_reacquisitionTimer_() const;

constexpr void __set_sendFilteredPoseEventTimer_(float_t  value) ;

constexpr float_t& __get_sendFilteredPoseEventTimer_() ;

constexpr float_t const& __get_sendFilteredPoseEventTimer_() const;

constexpr void __set_skippedPoseCount_(int32_t  value) ;

constexpr int32_t& __get_skippedPoseCount_() ;

constexpr int32_t const& __get_skippedPoseCount_() const;

constexpr void __set_EWAPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __get_EWAPosition() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __get_EWAPosition() const;

constexpr void __set_EWARotation(::System::Nullable_1<::UnityEngine::Quaternion>  value) ;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& __get_EWARotation() ;

constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& __get_EWARotation() const;

constexpr void __set_HAND_HEIGHT_TUNING(float_t  value) ;

constexpr float_t& __get_HAND_HEIGHT_TUNING() ;

constexpr float_t const& __get_HAND_HEIGHT_TUNING() const;

constexpr void __set_UseHeuristicRollback(bool  value) ;

constexpr bool& __get_UseHeuristicRollback() ;

constexpr bool const& __get_UseHeuristicRollback() const;

/// @brief Method get_CurrentKeyboardAngleFromUp addr 0x27939ec size 0x8 virtual false final false
inline float_t get_CurrentKeyboardAngleFromUp() ;

/// @brief Method set_CurrentKeyboardAngleFromUp addr 0x27939f4 size 0x8 virtual false final false
inline void set_CurrentKeyboardAngleFromUp(float_t  value) ;

/// @brief Method get_TrackingState addr 0x27939fc size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState get_TrackingState() ;

/// @brief Method set_TrackingState addr 0x2793a04 size 0x8 virtual false final false
inline void set_TrackingState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  value) ;

/// @brief Method get_ActiveKeyboardInfo addr 0x2793a0c size 0x14 virtual false final false
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo get_ActiveKeyboardInfo() ;

/// @brief Method set_ActiveKeyboardInfo addr 0x2793a20 size 0x14 virtual false final false
inline void set_ActiveKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value) ;

/// @brief Method get_SystemKeyboardInfo addr 0x2793a34 size 0x18 virtual false final false
inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo get_SystemKeyboardInfo() ;

/// @brief Method set_SystemKeyboardInfo addr 0x2793a4c size 0x18 virtual false final false
inline void set_SystemKeyboardInfo(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  value) ;

/// @brief Method get_Presentation addr 0x2793a64 size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation get_Presentation() ;

/// @brief Method set_Presentation addr 0x2793a6c size 0x50 virtual false final false
inline void set_Presentation(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation  value) ;

/// @brief Method get_TrackingEnabled addr 0x2793cf8 size 0x8 virtual false final false
inline bool get_TrackingEnabled() ;

/// @brief Method set_TrackingEnabled addr 0x2793d00 size 0xc virtual false final false
inline void set_TrackingEnabled(bool  value) ;

/// @brief Method get_ConnectionRequired addr 0x2793d0c size 0x8 virtual false final false
inline bool get_ConnectionRequired() ;

/// @brief Method set_ConnectionRequired addr 0x2793d14 size 0xc virtual false final false
inline void set_ConnectionRequired(bool  value) ;

/// @brief Method get_ShowUntracked addr 0x2793d20 size 0x8 virtual false final false
inline bool get_ShowUntracked() ;

/// @brief Method set_ShowUntracked addr 0x2793d28 size 0xc virtual false final false
inline void set_ShowUntracked(bool  value) ;

/// @brief Method get_RemoteKeyboard addr 0x2793d34 size 0x10 virtual false final false
inline bool get_RemoteKeyboard() ;

/// @brief Method set_RemoteKeyboard addr 0x2793d44 size 0x18 virtual false final false
inline void set_RemoteKeyboard(bool  value) ;

/// @brief Method get_KeyboardQueryFlags addr 0x2793d5c size 0x8 virtual false final false
inline ::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags get_KeyboardQueryFlags() ;

/// @brief Method set_KeyboardQueryFlags addr 0x2793d64 size 0x8 virtual false final false
inline void set_KeyboardQueryFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  value) ;

/// @brief Method get_PassthroughOverlay addr 0x2793d6c size 0x8 virtual false final false
inline ::GlobalNamespace::OVROverlay* get_PassthroughOverlay() ;

/// @brief Method set_PassthroughOverlay addr 0x2793d74 size 0x4 virtual false final false
inline void set_PassthroughOverlay(::GlobalNamespace::OVROverlay*  value) ;

/// @brief Method Start addr 0x2793d78 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method InitializeHandPresenceData addr 0x2793e08 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* InitializeHandPresenceData() ;

/// @brief Method RegisterPassthroughMeshToSDK addr 0x2793e98 size 0x98 virtual false final false
inline void RegisterPassthroughMeshToSDK() ;

/// @brief Method GetDistanceToKeyboard addr 0x2793f30 size 0x18c virtual false final false
inline float_t GetDistanceToKeyboard(::UnityEngine::Vector3  point) ;

/// @brief Method LaunchLocalKeyboardSelectionDialog addr 0x27940bc size 0x40 virtual false final false
inline void LaunchLocalKeyboardSelectionDialog() ;

/// @brief Method LaunchRemoteKeyboardSelectionDialog addr 0x2794488 size 0x40 virtual false final false
inline void LaunchRemoteKeyboardSelectionDialog() ;

/// @brief Method KeyboardTrackerIsRunning addr 0x27944c8 size 0x14 virtual false final false
inline bool KeyboardTrackerIsRunning() ;

/// @brief Method UpdateTrackingStateCoroutine addr 0x27944dc size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* UpdateTrackingStateCoroutine() ;

/// @brief Method StartKeyboardTrackingCoroutine addr 0x279456c size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* StartKeyboardTrackingCoroutine() ;

/// @brief Method StopKeyboardTrackingInternal addr 0x27945fc size 0x1f8 virtual false final false
inline void StopKeyboardTrackingInternal() ;

/// @brief Method UpdateKeyboardPose addr 0x2794924 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* UpdateKeyboardPose() ;

/// @brief Method UpdateSkippedPoseTimer addr 0x27949b4 size 0x48 virtual false final false
inline void UpdateSkippedPoseTimer() ;

/// @brief Method LoadKeyboardMesh addr 0x27949fc size 0x648 virtual false final false
inline void LoadKeyboardMesh() ;

/// @brief Method UpdateTextureQuality addr 0x27952f8 size 0x130 virtual false final false
inline void UpdateTextureQuality() ;

/// @brief Method UpdatePresentation addr 0x2793b00 size 0x1f8 virtual false final false
inline void UpdatePresentation(bool  isVisible) ;

/// @brief Method LoadRuntimeKeyboardMesh addr 0x2795044 size 0x2b4 virtual false final false
inline ::UnityEngine::GameObject* LoadRuntimeKeyboardMesh() ;

/// @brief Method UpdateKeyboardVisibility addr 0x2795428 size 0x114 virtual false final false
inline void UpdateKeyboardVisibility() ;

/// @brief Method SetKeyboardState addr 0x27947f4 size 0xdc virtual false final false
inline void SetKeyboardState(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState  state) ;

/// @brief Method GetKeyboardVisibility addr 0x2793abc size 0x44 virtual false final false
inline bool GetKeyboardVisibility() ;

/// @brief Method InitializeKeyboardInfo addr 0x27948d0 size 0x54 virtual false final false
inline void InitializeKeyboardInfo() ;

/// @brief Method LaunchOverlayIntent addr 0x27940fc size 0x38c virtual false final false
inline void LaunchOverlayIntent(::StringW  dataUri) ;

/// @brief Method Dispose addr 0x279556c size 0x114 virtual false final false
inline void Dispose() ;

/// @brief Method DispatchVisibilityEvent addr 0x279553c size 0x30 virtual false final false
inline void DispatchVisibilityEvent(bool  timeOut) ;

static inline ::GlobalNamespace::OVRTrackedKeyboard* New_ctor() ;

/// @brief Method .ctor addr 0x2795694 size 0x190 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTrackedKeyboard(OVRTrackedKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTrackedKeyboard(OVRTrackedKeyboard const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRTrackedKeyboard()  = default;
public:


// Fields

// Static field underlayScaleMultX_

// Static field underlayScaleConstY_

// Static field underlayScaleMultZ_

// Static field underlayOffset_

// Static field boundingBoxAboveKeyboardY_

// Static field initialHorizontalDistanceKeyboard_

// Static field initialVerticalDistanceKeyboard_


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboard, 0x190>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__KeyboardPresentation, "", "OVRTrackedKeyboard/KeyboardPresentation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardState, "", "OVRTrackedKeyboard/TrackedKeyboardState");
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboard*, "", "OVRTrackedKeyboard");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___InitializeHandPresenceData_d__89*, "", "OVRTrackedKeyboard/<InitializeHandPresenceData>d__89");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96*, "", "OVRTrackedKeyboard/<StartKeyboardTrackingCoroutine>d__96");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___Start_d__88*, "", "OVRTrackedKeyboard/<Start>d__88");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___UpdateKeyboardPose_d__98*, "", "OVRTrackedKeyboard/<UpdateKeyboardPose>d__98");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95*, "", "OVRTrackedKeyboard/<UpdateTrackingStateCoroutine>d__95");
NEED_NO_BOX(::GlobalNamespace::__OVRTrackedKeyboard____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard____c*, "", "OVRTrackedKeyboard/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, "", "OVRTrackedKeyboard/TrackedKeyboardSetActiveEvent");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, "", "OVRTrackedKeyboard/TrackedKeyboardVisibilityChangedEvent");
