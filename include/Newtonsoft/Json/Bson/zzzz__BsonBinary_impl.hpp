#pragma once
#include "Newtonsoft/Json/Bson/zzzz__BsonValue_impl.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinary_def.hpp"
#include "Newtonsoft/Json/Bson/zzzz__BsonBinaryType_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.get_BinaryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Bson::BsonBinaryType (::Newtonsoft::Json::Bson::BsonBinary::*)()>(&::Newtonsoft::Json::Bson::BsonBinary::get_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c842c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            "get_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary.set_BinaryType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::Newtonsoft::Json::Bson::BsonBinaryType)>(&::Newtonsoft::Json::Bson::BsonBinary::set_BinaryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c8434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            "set_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Bson::BsonBinary._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Bson::BsonBinary::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, ::Newtonsoft::Json::Bson::BsonBinaryType)>(&::Newtonsoft::Json::Bson::BsonBinary::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26c843c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Newtonsoft::Json::Bson::BsonBinary::__set__BinaryType_k__BackingField(::Newtonsoft::Json::Bson::BsonBinaryType  value)  {
::cordl_internals::setInstanceField<::Newtonsoft::Json::Bson::BsonBinaryType, 0x29>(this, std::forward<::Newtonsoft::Json::Bson::BsonBinaryType>(value));
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType& Newtonsoft::Json::Bson::BsonBinary::__get__BinaryType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonBinaryType, 0x29>(this);
}
constexpr ::Newtonsoft::Json::Bson::BsonBinaryType const& Newtonsoft::Json::Bson::BsonBinary::__get__BinaryType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::Newtonsoft::Json::Bson::BsonBinaryType, 0x29>(this);
}
inline ::Newtonsoft::Json::Bson::BsonBinaryType Newtonsoft::Json::Bson::BsonBinary::get_BinaryType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            "get_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Bson::BsonBinaryType, false>(*this, ___internal_method);
}
inline void Newtonsoft::Json::Bson::BsonBinary::set_BinaryType(::Newtonsoft::Json::Bson::BsonBinaryType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            "set_BinaryType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::Newtonsoft::Json::Bson::BsonBinary* Newtonsoft::Json::Bson::BsonBinary::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::Newtonsoft::Json::Bson::BsonBinaryType  binaryType)  {
return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Bson::BsonBinary*>(value, binaryType));
}
inline void Newtonsoft::Json::Bson::BsonBinary::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::Newtonsoft::Json::Bson::BsonBinaryType  binaryType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Bson::BsonBinary*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::Bson::BsonBinaryType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, binaryType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
