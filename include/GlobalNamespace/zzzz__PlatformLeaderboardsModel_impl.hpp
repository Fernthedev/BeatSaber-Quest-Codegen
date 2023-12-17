#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardScoreUploader_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__PlatformLeaderboardsHandler_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierParamsSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__State::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__State::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__State::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State::__PlatformLeaderboardsModel__State(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State  GlobalNamespace::__PlatformLeaderboardsModel__State::NotInitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State  GlobalNamespace::__PlatformLeaderboardsModel__State::Initializing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State  GlobalNamespace::__PlatformLeaderboardsModel__State::Initialized{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::__PlatformLeaderboardsModel__GetScoresResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult  GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::Ok{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult  GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult::Failed{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::__PlatformLeaderboardsModel__UploadScoreResult(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult  GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::Ok{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult  GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::Failed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult  GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult::FailedTooManyRequests{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::__PlatformLeaderboardsModel__ScoresScope(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope  GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::Global{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope  GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::AroundPlayer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope  GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope::Friends{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x232b898;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::*)(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult, ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>, int32_t)>(&::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x232b95c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::*)(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult, ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x232b970;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232ba28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler* GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>(object, method));
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult  result, ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>  scores, int32_t  referencePlayerScoreIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result, scores, referencePlayerScoreIndex);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult  result, ::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>  scores, int32_t  referencePlayerScoreIndex, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*,::Array<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, result, scores, referencePlayerScoreIndex, callback, object);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x232893c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::*)(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult)>(&::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x232ba34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::*)(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x232ba48;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232bacc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler* GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>(object, method));
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::Invoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
inline ::System::IAsyncResult* GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::BeginInvoke(::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::*)(int32_t, int32_t, ::StringW, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x232aedc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::*)(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*)>(&::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::CompareTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x232bad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>"
constexpr  GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::operator ::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__set_score(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_score()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_score() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__set_rank(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_rank()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_rank() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__set_playerName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_playerName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_playerName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__set_playerId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_playerId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::__get_playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore* GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::New_ctor(int32_t  score, int32_t  rank, ::StringW  playerName, ::StringW  playerId, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  gameplayModifiers)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>(score, rank, playerName, playerId, gameplayModifiers));
}
inline void GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::_ctor(int32_t  score, int32_t  rank, ::StringW  playerName, ::StringW  playerId, ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*  gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, score, rank, playerName, playerId, gameplayModifiers);
}
inline int32_t GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore::CompareTo(::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__LeaderboardScore*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::*)()>(&::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x232bb04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19.SetStateMachine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232be68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder>(value));
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___t__builder()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___t__builder() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__set___4__this(::GlobalNamespace::PlatformLeaderboardsModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::GlobalNamespace::PlatformLeaderboardsModel*>(value));
}
constexpr ::GlobalNamespace::PlatformLeaderboardsModel* GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsModel*> GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsModel*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>>(value));
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___u__1()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*> const& GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__get___u__1() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19>::get(),
                            "SetStateMachine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformLeaderboardsModel*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel___Initialize_d__19::__PlatformLeaderboardsModel___Initialize_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::PlatformLeaderboardsModel*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::UserInfo*>  __u__1) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.add_allScoresDidUploadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::System::Action*)>(&::GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x232b074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "add_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.remove_allScoresDidUploadEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::System::Action*)>(&::GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x232b110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "remove_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.get_initialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::get_initialized)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x232b1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "get_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::OnDestroy)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x232b268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.Initialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::Initialize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x232b1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.InitializeForUserInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::UserInfo*)>(&::GlobalNamespace::PlatformLeaderboardsModel::InitializeForUserInfo)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x232b414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "InitializeForUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.HandlePlatformUserInfoDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::UserInfo*)>(&::GlobalNamespace::PlatformLeaderboardsModel::HandlePlatformUserInfoDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x232b5b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "HandlePlatformUserInfoDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.UploadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*, ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x232b5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x232b634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.HandleAllScoresDidUpload
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x232b6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "HandleAllScoresDidUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::GetScores)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232b70c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetScoresAroundPlayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x232b718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScoresAroundPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.GetFriendsScores
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*)>(&::GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x232b728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetFriendsScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel.UploadScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)(::GlobalNamespace::IDifficultyBeatmap*, int32_t, int32_t, int32_t, bool, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::PlatformLeaderboardsModel::UploadScore)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x232b734;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformLeaderboardsModel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformLeaderboardsModel::*)()>(&::GlobalNamespace::PlatformLeaderboardsModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232b890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this, std::forward<::GlobalNamespace::GameplayModifiersModelSO*>(value));
}
constexpr ::GlobalNamespace::GameplayModifiersModelSO* GlobalNamespace::PlatformLeaderboardsModel::__get__gameplayModifiersModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> GlobalNamespace::PlatformLeaderboardsModel::__get__gameplayModifiersModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifiersModelSO*, 0x18>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__leaderboardScoreUploader(::GlobalNamespace::LeaderboardScoreUploader*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x20>(this, std::forward<::GlobalNamespace::LeaderboardScoreUploader*>(value));
}
constexpr ::GlobalNamespace::LeaderboardScoreUploader* GlobalNamespace::PlatformLeaderboardsModel::__get__leaderboardScoreUploader()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LeaderboardScoreUploader*> GlobalNamespace::PlatformLeaderboardsModel::__get__leaderboardScoreUploader() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LeaderboardScoreUploader*, 0x20>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__platformUserModel(::GlobalNamespace::IPlatformUserModel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPlatformUserModel*, 0x28>(this, std::forward<::GlobalNamespace::IPlatformUserModel*>(value));
}
constexpr ::GlobalNamespace::IPlatformUserModel* GlobalNamespace::PlatformLeaderboardsModel::__get__platformUserModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformUserModel*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> GlobalNamespace::PlatformLeaderboardsModel::__get__platformUserModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPlatformUserModel*, 0x28>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__platformLeaderboardsHandler(::GlobalNamespace::PlatformLeaderboardsHandler*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlatformLeaderboardsHandler*, 0x30>(this, std::forward<::GlobalNamespace::PlatformLeaderboardsHandler*>(value));
}
constexpr ::GlobalNamespace::PlatformLeaderboardsHandler* GlobalNamespace::PlatformLeaderboardsModel::__get__platformLeaderboardsHandler()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsHandler*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlatformLeaderboardsHandler*> GlobalNamespace::PlatformLeaderboardsModel::__get__platformLeaderboardsHandler() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlatformLeaderboardsHandler*, 0x30>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set_allScoresDidUploadEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x38>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::PlatformLeaderboardsModel::__get_allScoresDidUploadEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::PlatformLeaderboardsModel::__get_allScoresDidUploadEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x38>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__state(::GlobalNamespace::__PlatformLeaderboardsModel__State  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__PlatformLeaderboardsModel__State, 0x40>(this, std::forward<::GlobalNamespace::__PlatformLeaderboardsModel__State>(value));
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State& GlobalNamespace::PlatformLeaderboardsModel::__get__state()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlatformLeaderboardsModel__State, 0x40>(this);
}
constexpr ::GlobalNamespace::__PlatformLeaderboardsModel__State const& GlobalNamespace::PlatformLeaderboardsModel::__get__state() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__PlatformLeaderboardsModel__State, 0x40>(this);
}
constexpr void GlobalNamespace::PlatformLeaderboardsModel::__set__playerId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::PlatformLeaderboardsModel::__get__playerId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::PlatformLeaderboardsModel::__get__playerId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::add_allScoresDidUploadEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "add_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::remove_allScoresDidUploadEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "remove_allScoresDidUploadEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::PlatformLeaderboardsModel::get_initialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "get_initialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "Initialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::InitializeForUserInfo(::GlobalNamespace::UserInfo*  newInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "InitializeForUserInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newInfo);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::HandlePlatformUserInfoDidChange(::GlobalNamespace::UserInfo*  newInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "HandlePlatformUserInfoDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newInfo);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::UploadScore(::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*  scoreData, ::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LeaderboardScoreUploader__ScoreData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__UploadScoreCompletionHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(*this, ___internal_method, scoreData, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetScores(::GlobalNamespace::IDifficultyBeatmap*  beatmap, int32_t  count, int32_t  fromRank, ::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope  scope, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__ScoresScope>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(*this, ___internal_method, beatmap, count, fromRank, scope, completionHandler);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::HandleAllScoresDidUpload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "HandleAllScoresDidUpload",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetScores(::GlobalNamespace::IDifficultyBeatmap*  beatmap, int32_t  count, int32_t  fromRank, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(*this, ___internal_method, beatmap, count, fromRank, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetScoresAroundPlayer(::GlobalNamespace::IDifficultyBeatmap*  beatmap, int32_t  count, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetScoresAroundPlayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(*this, ___internal_method, beatmap, count, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::PlatformLeaderboardsModel::GetFriendsScores(::GlobalNamespace::IDifficultyBeatmap*  beatmap, int32_t  count, int32_t  fromRank, ::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "GetFriendsScores",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlatformLeaderboardsModel__GetScoresCompletionHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(*this, ___internal_method, beatmap, count, fromRank, completionHandler);
}
inline void GlobalNamespace::PlatformLeaderboardsModel::UploadScore(::GlobalNamespace::IDifficultyBeatmap*  beatmap, int32_t  multipliedScore, int32_t  modifiedScore, int32_t  maxPossibleMultipliedScore, bool  fullCombo, int32_t  goodCutsCount, int32_t  badCutsCount, int32_t  missedCount, int32_t  maxCombo, float_t  energy, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            "UploadScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmap, multipliedScore, modifiedScore, maxPossibleMultipliedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, energy, gameplayModifiers);
}
inline ::GlobalNamespace::PlatformLeaderboardsModel* GlobalNamespace::PlatformLeaderboardsModel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformLeaderboardsModel*>());
}
inline void GlobalNamespace::PlatformLeaderboardsModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformLeaderboardsModel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
