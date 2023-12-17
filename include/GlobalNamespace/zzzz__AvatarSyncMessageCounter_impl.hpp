#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AvatarSyncMessageCounter_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)(::System::TimeSpan)>(&::GlobalNamespace::AvatarSyncMessageCounter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2635468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.MessageReceived
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(&::GlobalNamespace::AvatarSyncMessageCounter::MessageReceived)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26354f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "MessageReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.CurrentMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(&::GlobalNamespace::AvatarSyncMessageCounter::CurrentMessages)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26356bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "CurrentMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AvatarSyncMessageCounter.CleanOldMessages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AvatarSyncMessageCounter::*)()>(&::GlobalNamespace::AvatarSyncMessageCounter::CleanOldMessages)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2635584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "CleanOldMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AvatarSyncMessageCounter::__set_messageTimestamps(::System::Collections::Generic::Queue_1<::System::DateTime>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::System::DateTime>*, 0x10>(this, std::forward<::System::Collections::Generic::Queue_1<::System::DateTime>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::System::DateTime>* GlobalNamespace::AvatarSyncMessageCounter::__get_messageTimestamps()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::System::DateTime>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::System::DateTime>*> GlobalNamespace::AvatarSyncMessageCounter::__get_messageTimestamps() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::System::DateTime>*, 0x10>(this);
}
constexpr void GlobalNamespace::AvatarSyncMessageCounter::__set_period(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x18>(this, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& GlobalNamespace::AvatarSyncMessageCounter::__get_period()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x18>(this);
}
constexpr ::System::TimeSpan const& GlobalNamespace::AvatarSyncMessageCounter::__get_period() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x18>(this);
}
inline ::GlobalNamespace::AvatarSyncMessageCounter* GlobalNamespace::AvatarSyncMessageCounter::New_ctor(::System::TimeSpan  period)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AvatarSyncMessageCounter*>(period));
}
inline void GlobalNamespace::AvatarSyncMessageCounter::_ctor(::System::TimeSpan  period)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, period);
}
inline void GlobalNamespace::AvatarSyncMessageCounter::MessageReceived()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "MessageReceived",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AvatarSyncMessageCounter::CurrentMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "CurrentMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::AvatarSyncMessageCounter::CleanOldMessages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AvatarSyncMessageCounter*>::get(),
                            "CleanOldMessages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
