#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class __SavedStructState_1__TypedRestore;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class __Touch____c;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct __InputStateHistory_1__Record;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__GlobalState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class __Touch____c;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__ExtraDataPerTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__FingerAndTouchState;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct __Touch__GlobalState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState);
// Type: ::GlobalState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6415))
// CS Name: ::Touch::GlobalState
struct CORDL_TYPE __Touch__GlobalState : public ::bs_hook::ValueTypeWrapper<0x150> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x150};

/// @brief Field touchscreens offset 0x0
 __declspec(property(get=__get_touchscreens, put=__set_touchscreens)) ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens;

/// @brief Field historyLengthPerFinger offset 0x18
 __declspec(property(get=__get_historyLengthPerFinger, put=__set_historyLengthPerFinger)) int32_t  historyLengthPerFinger;

/// @brief Field onFingerDown offset 0x20
 __declspec(property(get=__get_onFingerDown, put=__set_onFingerDown)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown;

/// @brief Field onFingerMove offset 0x70
 __declspec(property(get=__get_onFingerMove, put=__set_onFingerMove)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove;

/// @brief Field onFingerUp offset 0xc0
 __declspec(property(get=__get_onFingerUp, put=__set_onFingerUp)) ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp;

/// @brief Field playerState offset 0x110
 __declspec(property(get=__get_playerState, put=__set_playerState)) ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState  playerState;

constexpr void __set_touchscreens(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>& __get_touchscreens() ;

constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*> const& __get_touchscreens() const;

constexpr void __set_historyLengthPerFinger(int32_t  value) ;

constexpr int32_t& __get_historyLengthPerFinger() ;

constexpr int32_t const& __get_historyLengthPerFinger() const;

constexpr void __set_onFingerDown(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& __get_onFingerDown() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& __get_onFingerDown() const;

constexpr void __set_onFingerMove(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& __get_onFingerMove() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& __get_onFingerMove() const;

constexpr void __set_onFingerUp(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& __get_onFingerUp() ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& __get_onFingerUp() const;

constexpr void __set_playerState(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState  value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState& __get_playerState() ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState const& __get_playerState() const;

// Ctor Parameters [CppParam { name: "touchscreens", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>", modifiers: "", def_value: None }, CppParam { name: "historyLengthPerFinger", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFingerDown", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "onFingerMove", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "onFingerUp", ty: "::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "playerState", ty: "::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState", modifiers: "", def_value: None }]
constexpr __Touch__GlobalState(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Touchscreen*>  touchscreens, int32_t  historyLengthPerFinger, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerDown, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerMove, ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  onFingerUp, ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState  playerState) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Touch__GlobalState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x150>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Touch__GlobalState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, 0x150>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::FingerAndTouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6416))
// CS Name: ::Touch::FingerAndTouchState
struct CORDL_TYPE __Touch__FingerAndTouchState : public ::bs_hook::ValueTypeWrapper<0x40> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field updateMask offset 0x0
 __declspec(property(get=__get_updateMask, put=__set_updateMask)) ::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask;

/// @brief Field fingers offset 0x8
 __declspec(property(get=__get_fingers, put=__set_fingers)) ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  fingers;

/// @brief Field activeFingers offset 0x10
 __declspec(property(get=__get_activeFingers, put=__set_activeFingers)) ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  activeFingers;

/// @brief Field activeTouches offset 0x18
 __declspec(property(get=__get_activeTouches, put=__set_activeTouches)) ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  activeTouches;

/// @brief Field activeFingerCount offset 0x20
 __declspec(property(get=__get_activeFingerCount, put=__set_activeFingerCount)) int32_t  activeFingerCount;

/// @brief Field activeTouchCount offset 0x24
 __declspec(property(get=__get_activeTouchCount, put=__set_activeTouchCount)) int32_t  activeTouchCount;

/// @brief Field totalFingerCount offset 0x28
 __declspec(property(get=__get_totalFingerCount, put=__set_totalFingerCount)) int32_t  totalFingerCount;

/// @brief Field lastId offset 0x2c
 __declspec(property(get=__get_lastId, put=__set_lastId)) uint32_t  lastId;

/// @brief Field haveBuiltActiveTouches offset 0x30
 __declspec(property(get=__get_haveBuiltActiveTouches, put=__set_haveBuiltActiveTouches)) bool  haveBuiltActiveTouches;

/// @brief Field haveActiveTouchesNeedingRefreshNextUpdate offset 0x31
 __declspec(property(get=__get_haveActiveTouchesNeedingRefreshNextUpdate, put=__set_haveActiveTouchesNeedingRefreshNextUpdate)) bool  haveActiveTouchesNeedingRefreshNextUpdate;

/// @brief Field activeTouchState offset 0x38
 __declspec(property(get=__get_activeTouchState, put=__set_activeTouchState)) ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState;

constexpr void __set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType& __get_updateMask() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateType const& __get_updateMask() const;

constexpr void __set_fingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& __get_fingers() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& __get_fingers() const;

constexpr void __set_activeFingers(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>& __get_activeFingers() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*> const& __get_activeFingers() const;

constexpr void __set_activeTouches(::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  value) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>& __get_activeTouches() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*> const& __get_activeTouches() const;

constexpr void __set_activeFingerCount(int32_t  value) ;

constexpr int32_t& __get_activeFingerCount() ;

constexpr int32_t const& __get_activeFingerCount() const;

constexpr void __set_activeTouchCount(int32_t  value) ;

constexpr int32_t& __get_activeTouchCount() ;

constexpr int32_t const& __get_activeTouchCount() const;

constexpr void __set_totalFingerCount(int32_t  value) ;

constexpr int32_t& __get_totalFingerCount() ;

constexpr int32_t const& __get_totalFingerCount() const;

constexpr void __set_lastId(uint32_t  value) ;

constexpr uint32_t& __get_lastId() ;

constexpr uint32_t const& __get_lastId() const;

constexpr void __set_haveBuiltActiveTouches(bool  value) ;

constexpr bool& __get_haveBuiltActiveTouches() ;

constexpr bool const& __get_haveBuiltActiveTouches() const;

constexpr void __set_haveActiveTouchesNeedingRefreshNextUpdate(bool  value) ;

constexpr bool& __get_haveActiveTouchesNeedingRefreshNextUpdate() ;

constexpr bool const& __get_haveActiveTouchesNeedingRefreshNextUpdate() const;

constexpr void __set_activeTouchState(::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>* __get_activeTouchState() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*> __get_activeTouchState() const;

/// @brief Method AddFingers addr 0x2ae3040 size 0x118 virtual false final false
inline void AddFingers(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method RemoveFingers addr 0x2ae323c size 0x144 virtual false final false
inline void RemoveFingers(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method Destroy addr 0x2ae369c size 0x84 virtual false final false
inline void Destroy() ;

/// @brief Method UpdateActiveFingers addr 0x2ae2550 size 0xf4 virtual false final false
inline void UpdateActiveFingers() ;

/// @brief Method UpdateActiveTouches addr 0x2ae1e60 size 0x5c0 virtual false final false
inline void UpdateActiveTouches() ;

// Ctor Parameters [CppParam { name: "updateMask", ty: "::UnityEngine::InputSystem::LowLevel::InputUpdateType", modifiers: "", def_value: None }, CppParam { name: "fingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "activeFingers", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>", modifiers: "", def_value: None }, CppParam { name: "activeTouches", ty: "::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>", modifiers: "", def_value: None }, CppParam { name: "activeFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "activeTouchCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalFingerCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "haveBuiltActiveTouches", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveActiveTouchesNeedingRefreshNextUpdate", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "activeTouchState", ty: "::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*", modifiers: "", def_value: None }]
constexpr __Touch__FingerAndTouchState(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateMask, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  fingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Finger*,::Array<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*>  activeFingers, ::ArrayW<::UnityEngine::InputSystem::EnhancedTouch::Touch,::Array<::UnityEngine::InputSystem::EnhancedTouch::Touch>*>  activeTouches, int32_t  activeFingerCount, int32_t  activeTouchCount, int32_t  totalFingerCount, uint32_t  lastId, bool  haveBuiltActiveTouches, bool  haveActiveTouchesNeedingRefreshNextUpdate, ::UnityEngine::InputSystem::LowLevel::InputStateHistory_1<::UnityEngine::InputSystem::LowLevel::TouchState>*  activeTouchState) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Touch__FingerAndTouchState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x40>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Touch__FingerAndTouchState()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::ExtraDataPerTouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6417))
// CS Name: ::Touch::ExtraDataPerTouchState
struct CORDL_TYPE __Touch__ExtraDataPerTouchState : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field accumulatedDelta offset 0x0
 __declspec(property(get=__get_accumulatedDelta, put=__set_accumulatedDelta)) ::UnityEngine::Vector2  accumulatedDelta;

/// @brief Field uniqueId offset 0x8
 __declspec(property(get=__get_uniqueId, put=__set_uniqueId)) uint32_t  uniqueId;

constexpr void __set_accumulatedDelta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_accumulatedDelta() ;

constexpr ::UnityEngine::Vector2 const& __get_accumulatedDelta() const;

constexpr void __set_uniqueId(uint32_t  value) ;

constexpr uint32_t& __get_uniqueId() ;

constexpr uint32_t const& __get_uniqueId() const;

// Ctor Parameters [CppParam { name: "accumulatedDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "uniqueId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr __Touch__ExtraDataPerTouchState(::UnityEngine::Vector2  accumulatedDelta, uint32_t  uniqueId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Touch__ExtraDataPerTouchState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Touch__ExtraDataPerTouchState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: ::<>c
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6418))
// CS Name: ::Touch::<>c*
class CORDL_TYPE __Touch____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*  value) ;

static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* getStaticF___9() ;

static inline void setStaticF___9__78_0(::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>*  value) ;

static inline ::UnityEngine::InputSystem::Utilities::__SavedStructState_1__TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>* getStaticF___9__78_0() ;

static inline void setStaticF___9__78_1(::System::Action*  value) ;

static inline ::System::Action* getStaticF___9__78_1() ;

static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c* New_ctor() ;

/// @brief Method .ctor addr 0x2ae378c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SaveAndResetState>b__78_0 addr 0x2ae3794 size 0x84 virtual false final false
inline void _SaveAndResetState_b__78_0(ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState>  state) ;

/// @brief Method <SaveAndResetState>b__78_1 addr 0x2ae3818 size 0x4 virtual false final false
inline void _SaveAndResetState_b__78_1() ;

// Ctor Parameters [CppParam { name: "", ty: "__Touch____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Touch____c(__Touch____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Touch____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Touch____c(__Touch____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __Touch____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__78_0

// Static field <>9__78_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::__Touch____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// Type: UnityEngine.InputSystem.EnhancedTouch::Touch
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6419))
// CS Name: ::UnityEngine.InputSystem.EnhancedTouch::Touch
struct CORDL_TYPE Touch : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
using __c = ::UnityEngine::InputSystem::EnhancedTouch::__Touch____c;

using ExtraDataPerTouchState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState;

using FingerAndTouchState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState;

using GlobalState = ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Finger offset 0x0
 __declspec(property(get=__get_m_Finger, put=__set_m_Finger)) ::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger;

/// @brief Field m_TouchRecord offset 0x8
 __declspec(property(get=__get_m_TouchRecord, put=__set_m_TouchRecord)) ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord;

 __declspec(property(get=get_valid)) bool  valid;

 __declspec(property(get=get_finger)) ::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger;

 __declspec(property(get=get_phase)) ::UnityEngine::InputSystem::TouchPhase  phase;

 __declspec(property(get=get_began)) bool  began;

 __declspec(property(get=get_inProgress)) bool  inProgress;

 __declspec(property(get=get_ended)) bool  ended;

 __declspec(property(get=get_touchId)) int32_t  touchId;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_radius)) ::UnityEngine::Vector2  radius;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_screen)) ::UnityEngine::InputSystem::Touchscreen*  screen;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_startScreenPosition)) ::UnityEngine::Vector2  startScreenPosition;

 __declspec(property(get=get_delta)) ::UnityEngine::Vector2  delta;

 __declspec(property(get=get_tapCount)) int32_t  tapCount;

 __declspec(property(get=get_isTap)) bool  isTap;

 __declspec(property(get=get_isInProgress)) bool  isInProgress;

 __declspec(property(get=get_updateStepCount)) uint32_t  updateStepCount;

 __declspec(property(get=get_uniqueId)) uint32_t  uniqueId;

 __declspec(property(get=get_state)) ::UnityEngine::InputSystem::LowLevel::TouchState  state;

 __declspec(property(get=get_extraData)) ::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState  extraData;

 __declspec(property(get=get_history)) ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  history;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

constexpr void __set_m_Finger(::UnityEngine::InputSystem::EnhancedTouch::Finger*  value) ;

constexpr ::UnityEngine::InputSystem::EnhancedTouch::Finger* __get_m_Finger() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::EnhancedTouch::Finger*> __get_m_Finger() const;

constexpr void __set_m_TouchRecord(::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>& __get_m_TouchRecord() ;

constexpr ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState> const& __get_m_TouchRecord() const;

static inline void setStaticF_s_GlobalState(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState  value) ;

static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState getStaticF_s_GlobalState() ;

/// @brief Method get_valid addr 0x2ae0c74 size 0x48 virtual false final false
inline bool get_valid() ;

/// @brief Method get_finger addr 0x2ae1ac8 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger() ;

/// @brief Method get_phase addr 0x2ae1ab4 size 0x14 virtual false final false
inline ::UnityEngine::InputSystem::TouchPhase get_phase() ;

/// @brief Method get_began addr 0x2ae1b18 size 0x1c virtual false final false
inline bool get_began() ;

/// @brief Method get_inProgress addr 0x2ae1b34 size 0x50 virtual false final false
inline bool get_inProgress() ;

/// @brief Method get_ended addr 0x2ae1b84 size 0x3c virtual false final false
inline bool get_ended() ;

/// @brief Method get_touchId addr 0x2ae1aa0 size 0x14 virtual false final false
inline int32_t get_touchId() ;

/// @brief Method get_pressure addr 0x2ae1bc0 size 0x14 virtual false final false
inline float_t get_pressure() ;

/// @brief Method get_radius addr 0x2ae1bd4 size 0x14 virtual false final false
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_startTime addr 0x2ae1be8 size 0x14 virtual false final false
inline double_t get_startTime() ;

/// @brief Method get_time addr 0x2ae1bfc size 0x48 virtual false final false
inline double_t get_time() ;

/// @brief Method get_screen addr 0x2ae1c44 size 0x1c virtual false final false
inline ::UnityEngine::InputSystem::Touchscreen* get_screen() ;

/// @brief Method get_screenPosition addr 0x2ae0d74 size 0x14 virtual false final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_startScreenPosition addr 0x2ae1c60 size 0x14 virtual false final false
inline ::UnityEngine::Vector2 get_startScreenPosition() ;

/// @brief Method get_delta addr 0x2ae1c74 size 0x14 virtual false final false
inline ::UnityEngine::Vector2 get_delta() ;

/// @brief Method get_tapCount addr 0x2ae1c88 size 0x14 virtual false final false
inline int32_t get_tapCount() ;

/// @brief Method get_isTap addr 0x2ae1c9c size 0x18 virtual false final false
inline bool get_isTap() ;

/// @brief Method get_isInProgress addr 0x2ae0d94 size 0x34 virtual false final false
inline bool get_isInProgress() ;

/// @brief Method get_updateStepCount addr 0x2ae0dc8 size 0x14 virtual false final false
inline uint32_t get_updateStepCount() ;

/// @brief Method get_uniqueId addr 0x2ae1a8c size 0x14 virtual false final false
inline uint32_t get_uniqueId() ;

/// @brief Method get_state addr 0x2ae1ad0 size 0x48 virtual false final false
inline ByRef<::UnityEngine::InputSystem::LowLevel::TouchState> get_state() ;

/// @brief Method get_extraData addr 0x2ae1cc0 size 0x48 virtual false final false
inline ByRef<::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState> get_extraData() ;

/// @brief Method get_history addr 0x2ae1d08 size 0xb8 virtual false final false
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history() ;

/// @brief Method get_activeTouches addr 0x2ae1dc0 size 0xa0 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches() ;

/// @brief Method get_fingers addr 0x2ae2420 size 0x90 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers() ;

/// @brief Method get_activeFingers addr 0x2ae24b0 size 0xa0 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers() ;

/// @brief Method get_screens addr 0x2ae2644 size 0x8c virtual false final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens() ;

/// @brief Method add_onFingerDown addr 0x2ae26d0 size 0xc8 virtual false final false
static inline void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method remove_onFingerDown addr 0x2ae2798 size 0xc8 virtual false final false
static inline void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method add_onFingerUp addr 0x2ae2860 size 0xc8 virtual false final false
static inline void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method remove_onFingerUp addr 0x2ae2928 size 0xc8 virtual false final false
static inline void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method add_onFingerMove addr 0x2ae29f0 size 0xc8 virtual false final false
static inline void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method remove_onFingerMove addr 0x2ae2ab8 size 0xc8 virtual false final false
static inline void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method get_maxHistoryLengthPerFinger addr 0x2ae1168 size 0x58 virtual false final false
static inline int32_t get_maxHistoryLengthPerFinger() ;

/// @brief Method .ctor addr 0x2ae0d88 size 0xc virtual false final false
inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  touchRecord) ;

/// @brief Method ToString addr 0x2ae2b80 size 0x2bc virtual true final false
inline ::StringW ToString() ;

/// @brief Method Equals addr 0x2ae2e3c size 0x74 virtual true final true
inline bool Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch  other) ;

/// @brief Method Equals addr 0x2ae2eb0 size 0x90 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x2ae2f40 size 0x74 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method AddTouchscreen addr 0x2ae2fb4 size 0x8c virtual false final false
static inline void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method RemoveTouchscreen addr 0x2ae3158 size 0xe4 virtual false final false
static inline void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method BeginUpdate addr 0x2ae3380 size 0x74 virtual false final false
static inline void BeginUpdate() ;

/// @brief Method CreateGlobalState addr 0x2ae33f4 size 0x2c virtual false final false
static inline ::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState CreateGlobalState() ;

/// @brief Method SaveAndResetState addr 0x2ae3420 size 0x218 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState() ;

// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None }, CppParam { name: "m_TouchRecord", ty: "::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }]
constexpr Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger, ::UnityEngine::InputSystem::LowLevel::__InputStateHistory_1__Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Touch(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Touch()  = default;


// Fields

// Static field s_GlobalState


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::EnhancedTouch::Touch, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch____c*, "UnityEngine.InputSystem.EnhancedTouch", "Touch/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::Touch, "UnityEngine.InputSystem.EnhancedTouch", "Touch");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__ExtraDataPerTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/ExtraDataPerTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__FingerAndTouchState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/FingerAndTouchState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::EnhancedTouch::__Touch__GlobalState, "UnityEngine.InputSystem.EnhancedTouch", "Touch/GlobalState");
