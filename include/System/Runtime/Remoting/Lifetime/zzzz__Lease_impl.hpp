#pragma once
#include "System/zzzz__MarshalByRefObject_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ILease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__ISponsor_def.hpp"
#include "System/Collections/zzzz__Queue_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__Lease_def.hpp"
#include "System/Runtime/Remoting/Lifetime/zzzz__LeaseState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x249b2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::*)(::System::Runtime::Remoting::Lifetime::ILease*)>(&::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x249b644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::*)(::System::Runtime::Remoting::Lifetime::ILease*, ::System::AsyncCallback*, ::System::Object*)>(&::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x249b418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::*)(::System::IAsyncResult*)>(&::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x249b61c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>(object, method));
}
inline void System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::Invoke(::System::Runtime::Remoting::Lifetime::ILease*  lease)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method, lease);
}
inline ::System::IAsyncResult* System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::BeginInvoke(::System::Runtime::Remoting::Lifetime::ILease*  lease, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ILease*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, lease, callback, object);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x249294c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentLeaseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x249acb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_CurrentLeaseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_CurrentState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Lifetime::LeaseState (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249ad1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_CurrentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Activate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::Activate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x249ad24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.get_RenewOnCallTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249ad30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_RenewOnCallTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Renew
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::TimeSpan)>(&::System::Runtime::Remoting::Lifetime::Lease::Renew)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x249ad38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Renew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.Unregister
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::Runtime::Remoting::Lifetime::ISponsor*)>(&::System::Runtime::Remoting::Lifetime::Lease::Unregister)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x249adc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::UpdateState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x249af08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.CheckNextSponsor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)()>(&::System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x249b0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "CheckNextSponsor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Lifetime::Lease.ProcessSponsorResponse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Lifetime::Lease::*)(::System::Object*, bool)>(&::System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x249b438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "ProcessSponsorResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Lifetime::ILease"
constexpr  System::Runtime::Remoting::Lifetime::Lease::operator ::System::Runtime::Remoting::Lifetime::ILease*() noexcept {
return static_cast<::System::Runtime::Remoting::Lifetime::ILease*>(static_cast<void*>(this));
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__leaseExpireTime(::System::DateTime  value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime& System::Runtime::Remoting::Lifetime::Lease::__get__leaseExpireTime()  {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr ::System::DateTime const& System::Runtime::Remoting::Lifetime::Lease::__get__leaseExpireTime() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__currentState(::System::Runtime::Remoting::Lifetime::LeaseState  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Lifetime::LeaseState, 0x20>(this, std::forward<::System::Runtime::Remoting::Lifetime::LeaseState>(value));
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState& System::Runtime::Remoting::Lifetime::Lease::__get__currentState()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::LeaseState, 0x20>(this);
}
constexpr ::System::Runtime::Remoting::Lifetime::LeaseState const& System::Runtime::Remoting::Lifetime::Lease::__get__currentState() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::LeaseState, 0x20>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__initialLeaseTime(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x28>(this, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__get__initialLeaseTime()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x28>(this);
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__get__initialLeaseTime() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x28>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__renewOnCallTime(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x30>(this, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__get__renewOnCallTime()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x30>(this);
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__get__renewOnCallTime() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x30>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__sponsorshipTimeout(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x38>(this, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& System::Runtime::Remoting::Lifetime::Lease::__get__sponsorshipTimeout()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x38>(this);
}
constexpr ::System::TimeSpan const& System::Runtime::Remoting::Lifetime::Lease::__get__sponsorshipTimeout() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x38>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__sponsors(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x40>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Runtime::Remoting::Lifetime::Lease::__get__sponsors()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Runtime::Remoting::Lifetime::Lease::__get__sponsors() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x40>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__renewingSponsors(::System::Collections::Queue*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Queue*, 0x48>(this, std::forward<::System::Collections::Queue*>(value));
}
constexpr ::System::Collections::Queue* System::Runtime::Remoting::Lifetime::Lease::__get__renewingSponsors()  {
return ::cordl_internals::getInstanceField<::System::Collections::Queue*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Queue*> System::Runtime::Remoting::Lifetime::Lease::__get__renewingSponsors() const {
return ::cordl_internals::getInstanceField<::System::Collections::Queue*, 0x48>(this);
}
constexpr void System::Runtime::Remoting::Lifetime::Lease::__set__renewalDelegate(::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, 0x50>(this, std::forward<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*>(value));
}
constexpr ::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate* System::Runtime::Remoting::Lifetime::Lease::__get__renewalDelegate()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*> System::Runtime::Remoting::Lifetime::Lease::__get__renewalDelegate() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Lifetime::__Lease__RenewalDelegate*, 0x50>(this);
}
inline ::System::Runtime::Remoting::Lifetime::Lease* System::Runtime::Remoting::Lifetime::Lease::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Lifetime::Lease*>());
}
inline void System::Runtime::Remoting::Lifetime::Lease::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_CurrentLeaseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method);
}
inline ::System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::Lease::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_CurrentState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Lifetime::LeaseState, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::Activate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Activate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "get_RenewOnCallTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method);
}
inline ::System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::Renew(::System::TimeSpan  renewalTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Renew",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TimeSpan>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(*this, ___internal_method, renewalTime);
}
inline void System::Runtime::Remoting::Lifetime::Lease::Unregister(::System::Runtime::Remoting::Lifetime::ISponsor*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "Unregister",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Lifetime::ISponsor*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj);
}
inline void System::Runtime::Remoting::Lifetime::Lease::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "CheckNextSponsor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse(::System::Object*  state, bool  timedOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Lifetime::Lease*>::get(),
                            "ProcessSponsorResponse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, state, timedOut);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
