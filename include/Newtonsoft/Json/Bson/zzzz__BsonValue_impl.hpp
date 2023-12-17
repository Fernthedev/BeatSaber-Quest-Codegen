#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonToken_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonValue::*)(::System::Object*, ::Newtonsoft::Json::Bson::BsonType)>(&::Newtonsoft::Json::Bson::BsonValue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x26c83c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Bson::BsonValue::*)()>(&::Newtonsoft::Json::Bson::BsonValue::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c83f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonValue.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonType (::Newtonsoft::Json::Bson::BsonValue::*)()>(&::Newtonsoft::Json::Bson::BsonValue::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8400;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::BsonValue::__set__value(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Newtonsoft::Json::Bson::BsonValue::__get__value()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Newtonsoft::Json::Bson::BsonValue::__get__value() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void Newtonsoft::Json::Bson::BsonValue::__set__type(::Newtonsoft::Json::Bson::BsonType  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Bson::BsonType, 0x28>(this, std::forward<::Newtonsoft::Json::Bson::BsonType>(value));
}
constexpr ::Newtonsoft::Json::Bson::BsonType& Newtonsoft::Json::Bson::BsonValue::__get__type()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonType, 0x28>(this);
}
constexpr ::Newtonsoft::Json::Bson::BsonType const& Newtonsoft::Json::Bson::BsonValue::__get__type() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonType, 0x28>(this);
}
inline ::Newtonsoft::Json::Bson::BsonValue* Newtonsoft::Json::Bson::BsonValue::New_ctor(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Bson::BsonValue*>(value, type));
}
inline void Newtonsoft::Json::Bson::BsonValue::_ctor(::System::Object*  value, ::Newtonsoft::Json::Bson::BsonType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, type);
}
inline ::System::Object* Newtonsoft::Json::Bson::BsonValue::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::Newtonsoft::Json::Bson::BsonType Newtonsoft::Json::Bson::BsonValue::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonValue*>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonType, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
