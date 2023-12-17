#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixup_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ReadObjectInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ValueFixupEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/zzzz__Array_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::System::Array*, ::ArrayW<int32_t,::Array<int32_t>*>)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24ce520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::System::Object*, ::StringW, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x24ce978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ValueFixup.Fixup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ValueFixup::*)(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*)>(&::System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x24cd978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            "Fixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_valueFixupEnum(::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x10>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueFixupEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x10>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_valueFixupEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_arrayObj(::System::Array*  value)  {
::cordl_internals::setInstanceField<::System::Array*, 0x18>(this, std::forward<::System::Array*>(value));
}
constexpr ::System::Array* System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_arrayObj()  {
return ::cordl_internals::getInstanceField<::System::Array*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Array*> System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_arrayObj() const {
return ::cordl_internals::getInstanceField<::System::Array*, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_indexMap(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_indexMap()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_indexMap() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_header(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_header()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_header() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberObject(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x30>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberObject()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberObject() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x30>(this);
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::setStaticF_valueInfo(::System::Reflection::MemberInfo*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MemberInfo*, "valueInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get>(std::forward<::System::Reflection::MemberInfo*>(value));
}
inline ::System::Reflection::MemberInfo* System::Runtime::Serialization::Formatters::Binary::ValueFixup::getStaticF_valueInfo()  {
return ::cordl_internals::getStaticField<::System::Reflection::MemberInfo*, "valueInfo", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_objectInfo(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0x38>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_objectInfo()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*> System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_objectInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ValueFixup::__set_memberName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ValueFixup::__get_memberName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Array*  arrayObj, ::ArrayW<int32_t,::Array<int32_t>*>  indexMap)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(arrayObj, indexMap));
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Array*  arrayObj, ::ArrayW<int32_t,::Array<int32_t>*>  indexMap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arrayObj, indexMap);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ValueFixup* System::Runtime::Serialization::Formatters::Binary::ValueFixup::New_ctor(::System::Object*  memberObject, ::StringW  memberName, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*  objectInfo)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>(memberObject, memberName, objectInfo));
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::_ctor(::System::Object*  memberObject, ::StringW  memberName, ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*  objectInfo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, memberObject, memberName, objectInfo);
}
inline void System::Runtime::Serialization::Formatters::Binary::ValueFixup::Fixup(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  record, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ValueFixup*>::get(),
                            "Fixup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, record, parent);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
