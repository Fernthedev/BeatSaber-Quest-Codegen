#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ObjectProgress_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__ParseRecord_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalObjectTypeE_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryTypeEnum_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalMemberValueE_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24c4138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)()>(&::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24c41a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.ArrayCountIncrement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c41f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "ArrayCountIncrement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress.GetNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::*)(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ByRef<::System::Object*>)>(&::System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x24c4208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "GetNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::setStaticF_opRecordIdCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "opRecordIdCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Runtime::Serialization::Formatters::Binary::ObjectProgress::getStaticF_opRecordIdCount()  {
return ::cordl_internals::getStaticField<int32_t, "opRecordIdCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get>();
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_isInitial(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_isInitial()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_isInitial() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_count(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_count()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_count() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_expectedType(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x18>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_expectedType()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x18>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_expectedType() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_expectedTypeInformation(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_expectedTypeInformation()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_expectedTypeInformation() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_objectTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x30>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_objectTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x30>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_objectTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_memberTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x34>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x34>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE, 0x34>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_memberValueEnum(::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x38>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberValueEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x38>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberValueEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_dtType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x40>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_dtType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_dtType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x40>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_numItems(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_numItems()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_numItems() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_binaryTypeEnum(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x4c>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_binaryTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x4c>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_binaryTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, 0x4c>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_typeInformation(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x50>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_typeInformation()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_typeInformation() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x50>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_nullCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_nullCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_nullCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_memberLength(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x5c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberLength()  {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr int32_t const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x5c>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_binaryTypeEnumA(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>, 0x60>(this, std::forward<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>>(value));
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_binaryTypeEnumA()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>, 0x60>(this);
}
constexpr ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_binaryTypeEnumA() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum,::Array<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>*>, 0x60>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_typeInformationA(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x68>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_typeInformationA()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x68>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_typeInformationA() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x68>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_memberNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x70>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_memberTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x78>(this, std::forward<::ArrayW<::System::Type*,::Array<::System::Type*>*>>(value));
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x78>(this);
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_memberTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x78>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__set_pr(::System::Runtime::Serialization::Formatters::Binary::ParseRecord*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, 0x80>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::ParseRecord* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_pr()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*> System::Runtime::Serialization::Formatters::Binary::ObjectProgress::__get_pr() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::ParseRecord*, 0x80>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* System::Runtime::Serialization::Formatters::Binary::ObjectProgress::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::ObjectProgress::ArrayCountIncrement(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "ArrayCountIncrement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::Formatters::Binary::ObjectProgress::GetNext(ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>  outBinaryTypeEnum, ByRef<::System::Object*>  outTypeInformation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*>::get(),
                            "GetNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, outBinaryTypeEnum, outTypeInformation);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
