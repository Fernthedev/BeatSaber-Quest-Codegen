#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounterManager_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounterManager_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
constexpr void GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::__AvatarSyncMessageCounterManager__MessageType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::Sync{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType::Delta{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.get_Instance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::AvatarSyncMessageCounterManager* (*)()>(&::GlobalNamespace::AvatarSyncMessageCounterManager::get_Instance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x263570c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)()>(&::GlobalNamespace::AvatarSyncMessageCounterManager::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2635788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.SetMessageTypePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType, ::System::TimeSpan)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::SetMessageTypePeriod)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x26358d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "SetMessageTypePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.GetMessageTypePeriod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::GetMessageTypePeriod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x263593c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "GetMessageTypePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.MessageReceived
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(::StringW, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::MessageReceived)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2635ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "MessageReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounterManager.GetPlayerMessageCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AvatarSyncMessageCounterManager::*)(::StringW, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType)>(&::GlobalNamespace::AvatarSyncMessageCounterManager::GetPlayerMessageCount)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2635cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "GetPlayerMessageCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AvatarSyncMessageCounterManager::setStaticF__instance(::GlobalNamespace::AvatarSyncMessageCounterManager*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::AvatarSyncMessageCounterManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get>(std::forward<::GlobalNamespace::AvatarSyncMessageCounterManager*>(value));
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::AvatarSyncMessageCounterManager*, "_instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get>();
}
constexpr void GlobalNamespace::AvatarSyncMessageCounterManager::__set_userMessageCounters(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*, 0x10>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>* GlobalNamespace::AvatarSyncMessageCounterManager::__get_userMessageCounters()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*> GlobalNamespace::AvatarSyncMessageCounterManager::__get_userMessageCounters() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::GlobalNamespace::AvatarSyncMessageCounter*>*>*, 0x10>(this);
}
constexpr void GlobalNamespace::AvatarSyncMessageCounterManager::__set_messageTypePeriods(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*, 0x18>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>* GlobalNamespace::AvatarSyncMessageCounterManager::__get_messageTypePeriods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*> GlobalNamespace::AvatarSyncMessageCounterManager::__get_messageTypePeriods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType,::System::TimeSpan>*, 0x18>(this);
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "get_Instance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AvatarSyncMessageCounterManager*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::AvatarSyncMessageCounterManager* GlobalNamespace::AvatarSyncMessageCounterManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarSyncMessageCounterManager*>());
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::SetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType, ::System::TimeSpan  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "SetMessageTypePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, messageType, period);
}
inline ::StringW GlobalNamespace::AvatarSyncMessageCounterManager::GetMessageTypePeriod(::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "GetMessageTypePeriod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, messageType);
}
inline void GlobalNamespace::AvatarSyncMessageCounterManager::MessageReceived(::StringW  userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "MessageReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userId, messageType);
}
inline int32_t GlobalNamespace::AvatarSyncMessageCounterManager::GetPlayerMessageCount(::StringW  userId, ::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounterManager*>::get(),
                            "GetPlayerMessageCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__AvatarSyncMessageCounterManager__MessageType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, userId, messageType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
