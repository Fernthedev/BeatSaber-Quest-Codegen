#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Claims/zzzz__ClaimsPrincipal_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/Security/Principal/zzzz__IPrincipal_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.SelectPrimaryIdentity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::ClaimsIdentity* (*)(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*)>(&::System::Security::Claims::ClaimsPrincipal::SelectPrimaryIdentity)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x247ec6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "SelectPrimaryIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.get_ClaimsPrincipalSelector
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* (*)()>(&::System::Security::Claims::ClaimsPrincipal::get_ClaimsPrincipalSelector)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x247efec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "get_ClaimsPrincipalSelector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)()>(&::System::Security::Claims::ClaimsPrincipal::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2476d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Claims::ClaimsPrincipal::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x247f044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.OnSerializingMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Claims::ClaimsPrincipal::OnSerializingMethod)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x247f298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "OnSerializingMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.OnDeserializedMethod
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Claims::ClaimsPrincipal::OnDeserializedMethod)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x247fd08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "OnDeserializedMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.Deserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Claims::ClaimsPrincipal::Deserialize)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x247f144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.DeserializeIdentities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Claims::ClaimsPrincipal::*)(::StringW)>(&::System::Security::Claims::ClaimsPrincipal::DeserializeIdentities)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x247fd68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "DeserializeIdentities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Claims::ClaimsPrincipal.SerializeIdentities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Claims::ClaimsPrincipal::*)()>(&::System::Security::Claims::ClaimsPrincipal::SerializeIdentities)> {
  constexpr static std::size_t size = 0xa14;
  constexpr static std::size_t addrs = 0x247f2f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "SerializeIdentities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Security::Principal::IPrincipal"
constexpr  System::Security::Claims::ClaimsPrincipal::operator ::System::Security::Principal::IPrincipal*() noexcept {
return static_cast<::System::Security::Principal::IPrincipal*>(static_cast<void*>(this));
}
constexpr void System::Security::Claims::ClaimsPrincipal::__set_m_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Claims::ClaimsPrincipal::__get_m_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Security::Claims::ClaimsPrincipal::__get_m_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Security::Claims::ClaimsPrincipal::__set_m_serializedClaimsIdentities(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::Claims::ClaimsPrincipal::__get_m_serializedClaimsIdentities()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Security::Claims::ClaimsPrincipal::__get_m_serializedClaimsIdentities() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Security::Claims::ClaimsPrincipal::__set_m_identities(::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>* System::Security::Claims::ClaimsPrincipal::__get_m_identities()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*> System::Security::Claims::ClaimsPrincipal::__get_m_identities() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Security::Claims::ClaimsIdentity*>*, 0x20>(this);
}
inline void System::Security::Claims::ClaimsPrincipal::setStaticF_s_identitySelector(::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,::System::Security::Claims::ClaimsIdentity*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,::System::Security::Claims::ClaimsIdentity*>*, "s_identitySelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get>(std::forward<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,::System::Security::Claims::ClaimsIdentity*>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,::System::Security::Claims::ClaimsIdentity*>* System::Security::Claims::ClaimsPrincipal::getStaticF_s_identitySelector()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*,::System::Security::Claims::ClaimsIdentity*>*, "s_identitySelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get>();
}
inline void System::Security::Claims::ClaimsPrincipal::setStaticF_s_principalSelector(::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*, "s_principalSelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get>(std::forward<::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*>(value));
}
inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* System::Security::Claims::ClaimsPrincipal::getStaticF_s_principalSelector()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*, "s_principalSelector", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get>();
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Claims::ClaimsPrincipal::SelectPrimaryIdentity(::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*  identities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "SelectPrimaryIdentity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Security::Claims::ClaimsIdentity*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*, false>(nullptr, ___internal_method, identities);
}
inline ::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>* System::Security::Claims::ClaimsPrincipal::get_ClaimsPrincipalSelector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "get_ClaimsPrincipalSelector",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Security::Claims::ClaimsPrincipal*>*, false>(nullptr, ___internal_method);
}
inline ::System::Security::Claims::ClaimsPrincipal* System::Security::Claims::ClaimsPrincipal::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Claims::ClaimsPrincipal*>());
}
inline void System::Security::Claims::ClaimsPrincipal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Security::Claims::ClaimsPrincipal* System::Security::Claims::ClaimsPrincipal::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Claims::ClaimsPrincipal*>(info, context));
}
inline void System::Security::Claims::ClaimsPrincipal::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Security::Claims::ClaimsPrincipal::OnSerializingMethod(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "OnSerializingMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void System::Security::Claims::ClaimsPrincipal::OnDeserializedMethod(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "OnDeserializedMethod",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
inline void System::Security::Claims::ClaimsPrincipal::Deserialize(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "Deserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline void System::Security::Claims::ClaimsPrincipal::DeserializeIdentities(::StringW  identities)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "DeserializeIdentities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, identities);
}
inline ::StringW System::Security::Claims::ClaimsPrincipal::SerializeIdentities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Claims::ClaimsPrincipal*>::get(),
                            "SerializeIdentities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
