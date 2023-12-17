#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__CallbacksInTime_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__InitData::*)(::GlobalNamespace::IReadonlyBeatmapData*, float_t, bool)>(&::GlobalNamespace::__BeatmapCallbacksController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x237b7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__set_beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x10>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::__BeatmapCallbacksController__InitData::__get_beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::__BeatmapCallbacksController__InitData::__get_beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__set_startFilterTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__BeatmapCallbacksController__InitData::__get_startFilterTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__BeatmapCallbacksController__InitData::__get_startFilterTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__InitData::__set_shouldKeepReplayState(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__BeatmapCallbacksController__InitData::__get_shouldKeepReplayState()  {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
constexpr bool const& GlobalNamespace::__BeatmapCallbacksController__InitData::__get_shouldKeepReplayState() const {
return ::cordl_internals::getInstanceField<bool, 0x1c>(this);
}
inline ::GlobalNamespace::__BeatmapCallbacksController__InitData* GlobalNamespace::__BeatmapCallbacksController__InitData::New_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, float_t  startFilterTime, bool  shouldKeepReplayState)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapCallbacksController__InitData*>(beatmapData, startFilterTime, shouldKeepReplayState));
}
inline void GlobalNamespace::__BeatmapCallbacksController__InitData::_ctor(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, float_t  startFilterTime, bool  shouldKeepReplayState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapData, startFilterTime, shouldKeepReplayState);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::*)(::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTimes);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)(::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x237b830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::Replay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x237b848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::*)()>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379f08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr  GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept {
return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTimes);
}
inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior* GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>());
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehavior*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.CallCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(::GlobalNamespace::CallbacksInTime*, ::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x237b84c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState.Replay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*)>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x237b910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::*)()>(&::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2379f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior"
constexpr  GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::operator ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*() noexcept {
return static_cast<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__set__replayState(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>* GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__get__replayState()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*> GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::__get__replayState() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,int32_t>,::GlobalNamespace::BeatmapDataItem*>*, 0x10>(this);
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::CallCallbacks(::GlobalNamespace::CallbacksInTime*  callbacksInTime, ::GlobalNamespace::BeatmapDataItem*  beatmapDataItem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            "CallCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CallbacksInTime*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTime, beatmapDataItem);
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::Replay(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  callbacksInTimes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            "Replay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbacksInTimes);
}
inline ::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState* GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>());
}
inline void GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapCallbacksController__CallCallbacksBehaviorWithLastState*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_sendCallbacksOnBeatmapDataChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "get_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.set_sendCallbacksOnBeatmapDataChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(bool)>(&::GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2379a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "set_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.get_songTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::get_songTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2379aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.add_didProcessAllCallbacksThisFrameEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(&::GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2379aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "add_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.remove_didProcessAllCallbacksThisFrameEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::System::Action*)>(&::GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2379b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "remove_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::__BeatmapCallbacksController__InitData*)>(&::GlobalNamespace::BeatmapCallbacksController::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2379be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::Dispose)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2379f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ReplayState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)()>(&::GlobalNamespace::BeatmapCallbacksController::ReplayState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x237a1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "ReplayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(float_t)>(&::GlobalNamespace::BeatmapCallbacksController::ManualUpdate)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x237a28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.RemoveBeatmapCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapDataCallbackWrapper*)>(&::GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x237a86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "RemoveBeatmapCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.TriggerBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(&::GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x237ab9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "TriggerBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasInserted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x237add0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWasInserted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWillBeRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x237b3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCallbacksController.HandleBeatmapEventDataWasRemoved
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCallbacksController::*)(::GlobalNamespace::BeatmapEventData*)>(&::GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x237b5fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWasRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BeatmapCallbacksController::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set_didProcessAllCallbacksThisFrameEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::BeatmapCallbacksController::__get_didProcessAllCallbacksThisFrameEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::BeatmapCallbacksController::__get_didProcessAllCallbacksThisFrameEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__callbacksInTimes(::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>* GlobalNamespace::BeatmapCallbacksController::__get__callbacksInTimes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*> GlobalNamespace::BeatmapCallbacksController::__get__callbacksInTimes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<float_t,::GlobalNamespace::CallbacksInTime*>*, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x20>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapCallbacksController::__get__beatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::BeatmapCallbacksController::__get__beatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x20>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__callCallbacksBehavior(::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*, 0x28>(this, std::forward<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*>(value));
}
constexpr ::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior* GlobalNamespace::BeatmapCallbacksController::__get__callCallbacksBehavior()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*> GlobalNamespace::BeatmapCallbacksController::__get__callCallbacksBehavior() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapCallbacksController__ICallCallbacksBehavior*, 0x28>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__startFilterTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__get__startFilterTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__get__startFilterTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__prevSongTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__get__prevSongTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__get__prevSongTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__songTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapCallbacksController::__get__songTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapCallbacksController::__get__songTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__sendCallbacksOnBeatmapDataChangeChange(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__get__sendCallbacksOnBeatmapDataChangeChange()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__get__sendCallbacksOnBeatmapDataChangeChange() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::BeatmapCallbacksController::__set__processingCallbacks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BeatmapCallbacksController::__get__processingCallbacks()  {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
constexpr bool const& GlobalNamespace::BeatmapCallbacksController::__get__processingCallbacks() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
inline bool GlobalNamespace::BeatmapCallbacksController::get_sendCallbacksOnBeatmapDataChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "get_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::set_sendCallbacksOnBeatmapDataChange(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "set_sendCallbacksOnBeatmapDataChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeatmapCallbacksController::get_songTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "get_songTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::add_didProcessAllCallbacksThisFrameEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "add_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCallbacksController::remove_didProcessAllCallbacksThisFrameEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "remove_didProcessAllCallbacksThisFrameEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::BeatmapCallbacksController::New_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData*  initData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapCallbacksController*>(initData));
}
inline void GlobalNamespace::BeatmapCallbacksController::_ctor(::GlobalNamespace::__BeatmapCallbacksController__InitData*  initData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapCallbacksController__InitData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData);
}
inline void GlobalNamespace::BeatmapCallbacksController::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ReplayState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "ReplayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCallbacksController::ManualUpdate(float_t  songTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, songTime);
}
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t  aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(*this, ___internal_method, aheadTime, callback);
}
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(*this, ___internal_method, callback);
}
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapDataSubtypeIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(*this, ___internal_method, callback, beatmapDataSubtypeIdentifiers);
}
template<typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BeatmapCallbacksController::AddBeatmapCallback(float_t  aheadTime, ::GlobalNamespace::BeatmapDataCallback_1<T>*  callback, ::ArrayW<int32_t,::Array<int32_t>*>  beatmapDataSubtypeIdentifiers)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                        "AddBeatmapCallback",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallbackWrapper*, false>(*this, ___internal_method, aheadTime, callback, beatmapDataSubtypeIdentifiers);
}
inline void GlobalNamespace::BeatmapCallbacksController::RemoveBeatmapCallback(::GlobalNamespace::BeatmapDataCallbackWrapper*  callbackWrapper)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "RemoveBeatmapCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallbackWrapper*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callbackWrapper);
}
inline void GlobalNamespace::BeatmapCallbacksController::TriggerBeatmapEvent(::GlobalNamespace::BeatmapEventData*  beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "TriggerBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventData);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasInserted(::GlobalNamespace::BeatmapEventData*  beatmapEventData, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWasInserted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventData, node);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWillBeRemoved(::GlobalNamespace::BeatmapEventData*  beatmapEventDataToRemove, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*  nodeToRemove)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWillBeRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::BeatmapDataItem*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventDataToRemove, nodeToRemove);
}
inline void GlobalNamespace::BeatmapCallbacksController::HandleBeatmapEventDataWasRemoved(::GlobalNamespace::BeatmapEventData*  beatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                            "HandleBeatmapEventDataWasRemoved",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapEventData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
