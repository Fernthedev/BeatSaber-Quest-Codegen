#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Target_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__GeneralName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__Target_def.hpp"
constexpr void Org::BouncyCastle::Asn1::X509::__Target__Choice::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Org::BouncyCastle::Asn1::X509::__Target__Choice::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Org::BouncyCastle::Asn1::X509::__Target__Choice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::X509::__Target__Choice::__Target__Choice(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Org::BouncyCastle::Asn1::X509::__Target__Choice  Org::BouncyCastle::Asn1::X509::__Target__Choice::Name{static_cast<int32_t>(0x0)};
constexpr ::Org::BouncyCastle::Asn1::X509::__Target__Choice  Org::BouncyCastle::Asn1::X509::__Target__Choice::Group{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Target* (*)(::System::Object*)>(&::Org::BouncyCastle::Asn1::X509::Target::GetInstance)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1197ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Target::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*)>(&::Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x1197c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Target::*)(::Org::BouncyCastle::Asn1::X509::__Target__Choice, ::Org::BouncyCastle::Asn1::X509::GeneralName*)>(&::Org::BouncyCastle::Asn1::X509::Target::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1197d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::__Target__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.get_TargetGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(&::Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1197de8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.get_TargetName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::GeneralName* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(&::Org::BouncyCastle::Asn1::X509::Target::get_TargetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1197df0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Target.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::X509::Target::*)()>(&::Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1197df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr  Org::BouncyCastle::Asn1::X509::Target::operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept {
return static_cast<::Org::BouncyCastle::Asn1::IAsn1Choice*>(static_cast<void*>(this));
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__set_targetName(::Org::BouncyCastle::Asn1::X509::GeneralName*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x10>(this, std::forward<::Org::BouncyCastle::Asn1::X509::GeneralName*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::__get_targetName()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> Org::BouncyCastle::Asn1::X509::Target::__get_targetName() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x10>(this);
}
constexpr void Org::BouncyCastle::Asn1::X509::Target::__set_targetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName*  value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this, std::forward<::Org::BouncyCastle::Asn1::X509::GeneralName*>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::__get_targetGroup()  {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> Org::BouncyCastle::Asn1::X509::Target::__get_targetGroup() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::GeneralName*, 0x18>(this);
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::GetInstance(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Target*, false>(nullptr, ___internal_method, obj);
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagObj)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::Target*>(tagObj));
}
inline void Org::BouncyCastle::Asn1::X509::Target::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagObj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tagObj);
}
inline ::Org::BouncyCastle::Asn1::X509::Target* Org::BouncyCastle::Asn1::X509::Target::New_ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice  type, ::Org::BouncyCastle::Asn1::X509::GeneralName*  name)  {
return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::X509::Target*>(type, name));
}
inline void Org::BouncyCastle::Asn1::X509::Target::_ctor(::Org::BouncyCastle::Asn1::X509::__Target__Choice  type, ::Org::BouncyCastle::Asn1::X509::GeneralName*  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::__Target__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::GeneralName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, name);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::get_TargetGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            "get_TargetGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* Org::BouncyCastle::Asn1::X509::Target::get_TargetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            "get_TargetName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::GeneralName*, false>(*this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::Target::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Target*>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
