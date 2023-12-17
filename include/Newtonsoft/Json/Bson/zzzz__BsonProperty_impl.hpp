#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonProperty_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonString_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonString* (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.set_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonString*)>(&::Newtonsoft::Json::Bson::BsonProperty::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "set_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonString*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonToken* (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty.set_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)(::Newtonsoft::Json::Bson::BsonToken*)>(&::Newtonsoft::Json::Bson::BsonProperty::set_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonProperty._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonProperty::*)()>(&::Newtonsoft::Json::Bson::BsonProperty::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c81c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::BsonProperty::__set__Name_k__BackingField(::Newtonsoft::Json::Bson::BsonString*  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Bson::BsonString*, 0x10>(this, std::forward<::Newtonsoft::Json::Bson::BsonString*>(value));
}
constexpr ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonProperty::__get__Name_k__BackingField()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonString*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonString*> Newtonsoft::Json::Bson::BsonProperty::__get__Name_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonString*, 0x10>(this);
}
constexpr void Newtonsoft::Json::Bson::BsonProperty::__set__Value_k__BackingField(::Newtonsoft::Json::Bson::BsonToken*  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Bson::BsonToken*, 0x18>(this, std::forward<::Newtonsoft::Json::Bson::BsonToken*>(value));
}
constexpr ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonProperty::__get__Value_k__BackingField()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonToken*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Bson::BsonToken*> Newtonsoft::Json::Bson::BsonProperty::__get__Value_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonToken*, 0x18>(this);
}
inline ::Newtonsoft::Json::Bson::BsonString* Newtonsoft::Json::Bson::BsonProperty::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonString*, false>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonProperty::set_Name(::Newtonsoft::Json::Bson::BsonString*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "set_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonString*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonToken* Newtonsoft::Json::Bson::BsonProperty::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonToken*, false>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonProperty::set_Value(::Newtonsoft::Json::Bson::BsonToken*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            "set_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonToken*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonProperty* Newtonsoft::Json::Bson::BsonProperty::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Bson::BsonProperty*>());
}
inline void Newtonsoft::Json::Bson::BsonProperty::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonProperty*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
