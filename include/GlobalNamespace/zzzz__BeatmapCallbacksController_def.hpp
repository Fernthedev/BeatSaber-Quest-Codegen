#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapCallbacksController)
namespace GlobalNamespace {
class __BeatmapCallbacksController__InitData;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
template<typename T>
class BeatmapDataCallback_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class CallbacksInTime;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class BeatmapEventData;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehavior;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehavior;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__ICallCallbacksBehavior;
}
namespace GlobalNamespace {
class __BeatmapCallbacksController__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCallbacksController);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapCallbacksController__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4704))
// CS Name: ::BeatmapCallbacksController::InitData*
class CORDL_TYPE __BeatmapCallbacksController__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field beatmapData offset 0x10
 __declspec(property(get=__get_beatmapData, put=__set_beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  beatmapData;

/// @brief Field startFilterTime offset 0x18
 __declspec(property(get=__get_startFilterTime, put=__set_startFilterTime)) float_t  startFilterTime;

/// @brief Field shouldKeepReplayState offset 0x1c
 __declspec(property(get=__get_shouldKeepReplayState, put=__set_shouldKeepReplayState)) bool  shouldKeepReplayState;

constexpr void __set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get_beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get_beatmapData() const;

constexpr void __set_startFilterTime(float_t  value) ;

constexpr float_t& __get_startFilterTime() ;

constexpr float_t const& __get_startFilterTime() const;

constexpr void __set_shouldKeepReplayState(bool  value) ;

constexpr bool& __get_shouldKeepReplayState() ;

constexpr bool const& __get_shouldKeepReplayState() const;

static inline ::GlobalNamespace::__BeatmapCallbacksController__InitData* New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, float_t  startFilterTime, bool  shouldKeepReplayState) ;

/// @brief Method .ctor addr 0x237b7f0 size 0x40 virtual false final false
inline void _ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, float_t  startFilterTime, bool  shouldKeepReplayState) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCallbacksController__InitData(__BeatmapCallbacksController__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCallbacksController__InitData(__BeatmapCallbacksController__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapCallbacksController__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ICallCallbacksBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4705))
// CS Name: ::BeatmapCallbacksController::ICallCallbacksBehavior*
class CORDL_TYPE __BeatmapCallbacksController__ICallCallbacksBehavior {
public:
// Declarations
/// @brief Method CallCallbacks addr 0x0 size 0xffffffffffffffff virtual true final false
inline void CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem) ;

/// @brief Method Replay addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__ICallCallbacksBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCallbacksController__ICallCallbacksBehavior(__BeatmapCallbacksController__ICallCallbacksBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__ICallCallbacksBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCallbacksController__ICallCallbacksBehavior(__BeatmapCallbacksController__ICallCallbacksBehavior const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CallCallbacksBehavior
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4706))
// CS Name: ::BeatmapCallbacksController::CallCallbacksBehavior*
class CORDL_TYPE __BeatmapCallbacksController__CallCallbacksBehavior : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr operator  ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept;

/// @brief Method CallCallbacks addr 0x237b830 size 0x18 virtual true final true
inline void CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem) ;

/// @brief Method Replay addr 0x237b848 size 0x4 virtual true final true
inline void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes) ;

static inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior* New_ctor() ;

/// @brief Method .ctor addr 0x2379f08 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCallbacksController__CallCallbacksBehavior(__BeatmapCallbacksController__CallCallbacksBehavior && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehavior", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCallbacksController__CallCallbacksBehavior(__BeatmapCallbacksController__CallCallbacksBehavior const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapCallbacksController__CallCallbacksBehavior()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::CallCallbacksBehaviorWithLastState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4707))
// CS Name: ::BeatmapCallbacksController::CallCallbacksBehaviorWithLastState*
class CORDL_TYPE __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _replayState offset 0x10
 __declspec(property(get=__get__replayState, put=__set__replayState)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*  _replayState;

/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr operator  ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept;

constexpr void __set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>* __get__replayState() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*> __get__replayState() const;

/// @brief Method CallCallbacks addr 0x237b84c size 0xc4 virtual true final true
inline void CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem) ;

/// @brief Method Replay addr 0x237b910 size 0x288 virtual true final true
inline void Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes) ;

static inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState* New_ctor() ;

/// @brief Method .ctor addr 0x2379f10 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState(__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapCallbacksController__CallCallbacksBehaviorWithLastState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapCallbacksController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4708))
// CS Name: ::BeatmapCallbacksController*
class CORDL_TYPE BeatmapCallbacksController : public ::System::Object {
public:
// Declarations
using CallCallbacksBehaviorWithLastState = ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState;

using CallCallbacksBehavior = ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior;

using ICallCallbacksBehavior = ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior;

using InitData = ::GlobalNamespace::__BeatmapCallbacksController__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field didProcessAllCallbacksThisFrameEvent offset 0x10
 __declspec(property(get=__get_didProcessAllCallbacksThisFrameEvent, put=__set_didProcessAllCallbacksThisFrameEvent)) ::System::Action*  didProcessAllCallbacksThisFrameEvent;

/// @brief Field _callbacksInTimes offset 0x18
 __declspec(property(get=__get__callbacksInTimes, put=__set__callbacksInTimes)) ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  _callbacksInTimes;

/// @brief Field _beatmapData offset 0x20
 __declspec(property(get=__get__beatmapData, put=__set__beatmapData)) ::GlobalNamespace::IReadonlyBeatmapData*  _beatmapData;

/// @brief Field _callCallbacksBehavior offset 0x28
 __declspec(property(get=__get__callCallbacksBehavior, put=__set__callCallbacksBehavior)) ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*  _callCallbacksBehavior;

/// @brief Field _startFilterTime offset 0x30
 __declspec(property(get=__get__startFilterTime, put=__set__startFilterTime)) float_t  _startFilterTime;

/// @brief Field _prevSongTime offset 0x34
 __declspec(property(get=__get__prevSongTime, put=__set__prevSongTime)) float_t  _prevSongTime;

/// @brief Field _songTime offset 0x38
 __declspec(property(get=__get__songTime, put=__set__songTime)) float_t  _songTime;

/// @brief Field _sendCallbacksOnBeatmapDataChangeChange offset 0x3c
 __declspec(property(get=__get__sendCallbacksOnBeatmapDataChangeChange, put=__set__sendCallbacksOnBeatmapDataChangeChange)) bool  _sendCallbacksOnBeatmapDataChangeChange;

/// @brief Field _processingCallbacks offset 0x3d
 __declspec(property(get=__get__processingCallbacks, put=__set__processingCallbacks)) bool  _processingCallbacks;

 __declspec(property(get=get_sendCallbacksOnBeatmapDataChange, put=set_sendCallbacksOnBeatmapDataChange)) bool  sendCallbacksOnBeatmapDataChange;

 __declspec(property(get=get_songTime)) float_t  songTime;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_didProcessAllCallbacksThisFrameEvent(::System::Action*  value) ;

constexpr ::System::Action* __get_didProcessAllCallbacksThisFrameEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_didProcessAllCallbacksThisFrameEvent() const;

constexpr void __set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>* __get__callbacksInTimes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*> __get__callbacksInTimes() const;

constexpr void __set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value) ;

constexpr ::GlobalNamespace::IReadonlyBeatmapData* __get__beatmapData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> __get__beatmapData() const;

constexpr void __set__callCallbacksBehavior(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*  value) ;

constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* __get__callCallbacksBehavior() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*> __get__callCallbacksBehavior() const;

constexpr void __set__startFilterTime(float_t  value) ;

constexpr float_t& __get__startFilterTime() ;

constexpr float_t const& __get__startFilterTime() const;

constexpr void __set__prevSongTime(float_t  value) ;

constexpr float_t& __get__prevSongTime() ;

constexpr float_t const& __get__prevSongTime() const;

constexpr void __set__songTime(float_t  value) ;

constexpr float_t& __get__songTime() ;

constexpr float_t const& __get__songTime() const;

constexpr void __set__sendCallbacksOnBeatmapDataChangeChange(bool  value) ;

constexpr bool& __get__sendCallbacksOnBeatmapDataChangeChange() ;

constexpr bool const& __get__sendCallbacksOnBeatmapDataChangeChange() const;

constexpr void __set__processingCallbacks(bool  value) ;

constexpr bool& __get__processingCallbacks() ;

constexpr bool const& __get__processingCallbacks() const;

/// @brief Method get_sendCallbacksOnBeatmapDataChange addr 0x2379a8c size 0x8 virtual false final false
inline bool get_sendCallbacksOnBeatmapDataChange() ;

/// @brief Method set_sendCallbacksOnBeatmapDataChange addr 0x2379a94 size 0xc virtual false final false
inline void set_sendCallbacksOnBeatmapDataChange(bool  value) ;

/// @brief Method get_songTime addr 0x2379aa0 size 0x8 virtual false final false
inline float_t get_songTime() ;

/// @brief Method add_didProcessAllCallbacksThisFrameEvent addr 0x2379aa8 size 0x9c virtual false final false
inline void add_didProcessAllCallbacksThisFrameEvent(::System::Action*  value) ;

/// @brief Method remove_didProcessAllCallbacksThisFrameEvent addr 0x2379b44 size 0x9c virtual false final false
inline void remove_didProcessAllCallbacksThisFrameEvent(::System::Action*  value) ;

static inline ::GlobalNamespace::BeatmapCallbacksController* New_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData*  initData) ;

/// @brief Method .ctor addr 0x2379be0 size 0x328 virtual false final false
inline void _ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData*  initData) ;

/// @brief Method Dispose addr 0x2379f8c size 0x254 virtual true final true
inline void Dispose() ;

/// @brief Method ReplayState addr 0x237a1e0 size 0xac virtual false final false
inline void ReplayState() ;

/// @brief Method ManualUpdate addr 0x237a28c size 0x5e0 virtual false final false
inline void ManualUpdate(float_t  songTime) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t  aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>*  callback) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapDataSubtypeIdentifiers) ;

/// @brief Method AddBeatmapCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* AddBeatmapCallback(float_t  aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapDataSubtypeIdentifiers) ;

/// @brief Method RemoveBeatmapCallback addr 0x237a86c size 0xc0 virtual false final false
inline void RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper*  callbackWrapper) ;

/// @brief Method TriggerBeatmapEvent addr 0x237ab9c size 0x160 virtual false final false
inline void TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData*  beatmapEventData) ;

/// @brief Method HandleBeatmapEventDataWasInserted addr 0x237add0 size 0x5d8 virtual false final false
inline void HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData*  beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node) ;

/// @brief Method HandleBeatmapEventDataWillBeRemoved addr 0x237b3a8 size 0x254 virtual false final false
inline void HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData*  beatmapEventDataToRemove, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToRemove) ;

/// @brief Method HandleBeatmapEventDataWasRemoved addr 0x237b5fc size 0x1f4 virtual false final false
inline void HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData*  beatmapEventData) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapCallbacksController(BeatmapCallbacksController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCallbacksController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapCallbacksController(BeatmapCallbacksController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapCallbacksController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCallbacksController, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCallbacksController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCallbacksController*, "", "BeatmapCallbacksController");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*, "", "BeatmapCallbacksController/CallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*, "", "BeatmapCallbacksController/CallCallbacksBehaviorWithLastState");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*, "", "BeatmapCallbacksController/ICallCallbacksBehavior");
NEED_NO_BOX(::GlobalNamespace::__BeatmapCallbacksController__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapCallbacksController__InitData*, "", "BeatmapCallbacksController/InitData");
