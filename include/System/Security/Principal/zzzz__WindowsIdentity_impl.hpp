#pragma once
#include "System/Security/Claims/zzzz__ClaimsIdentity_impl.hpp"
#include "System/Security/Principal/zzzz__WindowsIdentity_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
#include "System/Security/Principal/zzzz__WindowsImpersonationContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::cordl_internals::intptr_t, ::StringW, ::System::Security::Principal::WindowsAccountType, bool)>(&::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x247abac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::WindowsAccountType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x247ad70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Security::Claims::ClaimsIdentity*, ::cordl_internals::intptr_t)>(&::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x247adac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x247ae50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetCurrent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::WindowsIdentity* (*)()>(&::System::Security::Principal::WindowsIdentity::GetCurrent)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x247aea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.Impersonate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::WindowsImpersonationContext* (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::Impersonate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x247af28;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.get_AuthenticationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247b018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::get_Name)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x247b020;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Object*)>(&::System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x247b08c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x247b364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.CloneAsBase
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::ClaimsIdentity* (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::CloneAsBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247b4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "CloneAsBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetTokenInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::GetTokenInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247b620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetTokenInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.SetToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::cordl_internals::intptr_t)>(&::System::Security::Principal::WindowsIdentity::SetToken)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x247ac10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "SetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetCurrentToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::intptr_t (*)()>(&::System::Security::Principal::WindowsIdentity::GetCurrentToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247af24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetCurrentToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetTokenName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::cordl_internals::intptr_t)>(&::System::Security::Principal::WindowsIdentity::GetTokenName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x247b088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetTokenName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::Principal::IIdentity"
constexpr  System::Security::Principal::WindowsIdentity::operator ::System::Security::Principal::IIdentity*() noexcept {
return static_cast<::System::Security::Principal::IIdentity*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Security::Principal::WindowsIdentity::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Security::Principal::WindowsIdentity::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Principal::WindowsIdentity::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void System::Security::Principal::WindowsIdentity::__set__token(::cordl_internals::intptr_t  value)  {
::cordl_internals::setInstanceField<::cordl_internals::intptr_t, 0x78>(this, std::forward<::cordl_internals::intptr_t>(value));
}
constexpr ::cordl_internals::intptr_t& System::Security::Principal::WindowsIdentity::__get__token()  {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x78>(this);
}
constexpr ::cordl_internals::intptr_t const& System::Security::Principal::WindowsIdentity::__get__token() const {
return ::cordl_internals::getInstanceField<::cordl_internals::intptr_t, 0x78>(this);
}
constexpr void System::Security::Principal::WindowsIdentity::__set__type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x80>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Principal::WindowsIdentity::__get__type()  {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr ::StringW const& System::Security::Principal::WindowsIdentity::__get__type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x80>(this);
}
constexpr void System::Security::Principal::WindowsIdentity::__set__account(::System::Security::Principal::WindowsAccountType  value)  {
::cordl_internals::setInstanceField<::System::Security::Principal::WindowsAccountType, 0x88>(this, std::forward<::System::Security::Principal::WindowsAccountType>(value));
}
constexpr ::System::Security::Principal::WindowsAccountType& System::Security::Principal::WindowsIdentity::__get__account()  {
return ::cordl_internals::getInstanceField<::System::Security::Principal::WindowsAccountType, 0x88>(this);
}
constexpr ::System::Security::Principal::WindowsAccountType const& System::Security::Principal::WindowsIdentity::__get__account() const {
return ::cordl_internals::getInstanceField<::System::Security::Principal::WindowsAccountType, 0x88>(this);
}
constexpr void System::Security::Principal::WindowsIdentity::__set__authenticated(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8c>(this, std::forward<bool>(value));
}
constexpr bool& System::Security::Principal::WindowsIdentity::__get__authenticated()  {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr bool const& System::Security::Principal::WindowsIdentity::__get__authenticated() const {
return ::cordl_internals::getInstanceField<bool, 0x8c>(this);
}
constexpr void System::Security::Principal::WindowsIdentity::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x90>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Principal::WindowsIdentity::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr ::StringW const& System::Security::Principal::WindowsIdentity::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x90>(this);
}
constexpr void System::Security::Principal::WindowsIdentity::__set__info(::System::Runtime::Serialization::SerializationInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x98>(this, std::forward<::System::Runtime::Serialization::SerializationInfo*>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo* System::Security::Principal::WindowsIdentity::__get__info()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> System::Security::Principal::WindowsIdentity::__get__info() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x98>(this);
}
inline void System::Security::Principal::WindowsIdentity::setStaticF_invalidWindows(::cordl_internals::intptr_t  value)  {
::cordl_internals::setStaticField<::cordl_internals::intptr_t, "invalidWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get>(std::forward<::cordl_internals::intptr_t>(value));
}
inline ::cordl_internals::intptr_t System::Security::Principal::WindowsIdentity::getStaticF_invalidWindows()  {
return ::cordl_internals::getStaticField<::cordl_internals::intptr_t, "invalidWindows", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get>();
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::cordl_internals::intptr_t  userToken, ::StringW  type, ::System::Security::Principal::WindowsAccountType  acctType, bool  isAuthenticated)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::WindowsIdentity*>(userToken, type, acctType, isAuthenticated));
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::cordl_internals::intptr_t  userToken, ::StringW  type, ::System::Security::Principal::WindowsAccountType  acctType, bool  isAuthenticated)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::WindowsAccountType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, userToken, type, acctType, isAuthenticated);
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::WindowsIdentity*>(info, context));
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::System::Security::Claims::ClaimsIdentity*  claimsIdentity, ::cordl_internals::intptr_t  userToken)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::WindowsIdentity*>(claimsIdentity, userToken));
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::System::Security::Claims::ClaimsIdentity*  claimsIdentity, ::cordl_internals::intptr_t  userToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Claims::ClaimsIdentity*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, claimsIdentity, userToken);
}
inline void System::Security::Principal::WindowsIdentity::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::GetCurrent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetCurrent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsIdentity*, false>(nullptr, ___internal_method);
}
inline ::System::Security::Principal::WindowsImpersonationContext* System::Security::Principal::WindowsIdentity::Impersonate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "Impersonate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsImpersonationContext*, false>(*this, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::get_AuthenticationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "get_AuthenticationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sender);
}
inline void System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Principal::WindowsIdentity::CloneAsBase()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "CloneAsBase",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*, false>(*this, ___internal_method);
}
inline ::cordl_internals::intptr_t System::Security::Principal::WindowsIdentity::GetTokenInternal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetTokenInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(*this, ___internal_method);
}
inline void System::Security::Principal::WindowsIdentity::SetToken(::cordl_internals::intptr_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "SetToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, token);
}
inline ::cordl_internals::intptr_t System::Security::Principal::WindowsIdentity::GetCurrentToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetCurrentToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::intptr_t, false>(nullptr, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::GetTokenName(::cordl_internals::intptr_t  token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::WindowsIdentity*>::get(),
                            "GetTokenName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, token);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
