#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationError_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationStyle_def.hpp"
#include "OVR/OpenVR/zzzz__NotificationBitmap_t_def.hpp"
#include "OVR/OpenVR/zzzz__EVRNotificationType_def.hpp"
#include "OVR/OpenVR/zzzz__IVRNotifications_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRNotifications___CreateNotification::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ea9ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVRNotifications___CreateNotification::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27eaa70;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(uint64_t, uint64_t, ::OVR::OpenVR::EVRNotificationType, ::StringW, ::OVR::OpenVR::EVRNotificationStyle, ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRNotifications___CreateNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x27eaa88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___CreateNotification.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___CreateNotification::*)(ByRef<::OVR::OpenVR::NotificationBitmap_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRNotifications___CreateNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27eabe4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRNotifications___CreateNotification* OVR::OpenVR::__IVRNotifications___CreateNotification::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRNotifications___CreateNotification*>(object, method));
}
inline void OVR::OpenVR::__IVRNotifications___CreateNotification::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___CreateNotification::Invoke(uint64_t  ulOverlayHandle, uint64_t  ulUserValue, ::OVR::OpenVR::EVRNotificationType  type, ::StringW  pchText, ::OVR::OpenVR::EVRNotificationStyle  style, ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(*this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRNotifications___CreateNotification::BeginInvoke(uint64_t  ulOverlayHandle, uint64_t  ulUserValue, ::OVR::OpenVR::EVRNotificationType  type, ::StringW  pchText, ::OVR::OpenVR::EVRNotificationStyle  style, ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EVRNotificationStyle>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, ulOverlayHandle, ulUserValue, type, pchText, style, pImage, pNotificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___CreateNotification::EndInvoke(ByRef<::OVR::OpenVR::NotificationBitmap_t>  pImage, ByRef<uint32_t>  pNotificationId, ::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___CreateNotification*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::NotificationBitmap_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(*this, ___internal_method, pImage, pNotificationId, result);
}
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27eac18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(uint32_t)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x27eacdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x27eacf0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVRNotifications___RemoveNotification.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRNotificationError (::OVR::OpenVR::__IVRNotifications___RemoveNotification::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVRNotifications___RemoveNotification::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27ead74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVRNotifications___RemoveNotification* OVR::OpenVR::__IVRNotifications___RemoveNotification::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>(object, method));
}
inline void OVR::OpenVR::__IVRNotifications___RemoveNotification::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___RemoveNotification::Invoke(uint32_t  notificationId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(*this, ___internal_method, notificationId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVRNotifications___RemoveNotification::BeginInvoke(uint32_t  notificationId, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, notificationId, callback, object);
}
inline ::OVR::OpenVR::EVRNotificationError OVR::OpenVR::__IVRNotifications___RemoveNotification::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVRNotificationError, false>(*this, ___internal_method, result);
}
constexpr void OVR::OpenVR::IVRNotifications::__set_CreateNotification(::OVR::OpenVR::__IVRNotifications___CreateNotification*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRNotifications___CreateNotification*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRNotifications___CreateNotification*>(value));
}
constexpr ::OVR::OpenVR::__IVRNotifications___CreateNotification* OVR::OpenVR::IVRNotifications::__get_CreateNotification()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRNotifications___CreateNotification*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRNotifications___CreateNotification*> OVR::OpenVR::IVRNotifications::__get_CreateNotification() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRNotifications___CreateNotification*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void OVR::OpenVR::IVRNotifications::__set_RemoveNotification(::OVR::OpenVR::__IVRNotifications___RemoveNotification*  value)  {
::cordl_internals::setInstanceField<::OVR::OpenVR::__IVRNotifications___RemoveNotification*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::OVR::OpenVR::__IVRNotifications___RemoveNotification*>(value));
}
constexpr ::OVR::OpenVR::__IVRNotifications___RemoveNotification* OVR::OpenVR::IVRNotifications::__get_RemoveNotification()  {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRNotifications___RemoveNotification*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRNotifications___RemoveNotification*> OVR::OpenVR::IVRNotifications::__get_RemoveNotification() const {
return ::cordl_internals::getInstanceField<::OVR::OpenVR::__IVRNotifications___RemoveNotification*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "CreateNotification", ty: "::OVR::OpenVR::__IVRNotifications___CreateNotification*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "RemoveNotification", ty: "::OVR::OpenVR::__IVRNotifications___RemoveNotification*", modifiers: "", def_value: Some("csnull") }]
constexpr ::OVR::OpenVR::IVRNotifications::IVRNotifications(::OVR::OpenVR::__IVRNotifications___CreateNotification*  CreateNotification, ::OVR::OpenVR::__IVRNotifications___RemoveNotification*  RemoveNotification) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->CreateNotification = CreateNotification;
this->RemoveNotification = RemoveNotification;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
