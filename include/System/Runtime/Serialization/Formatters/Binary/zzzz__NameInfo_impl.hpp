#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__NameInfo_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalArrayTypeE_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&::System::Runtime::Serialization::Formatters::Binary::NameInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d1e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&::System::Runtime::Serialization::Formatters::Binary::NameInfo::Init)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24d1e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.get_IsSealed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&::System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x24d1b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "get_IsSealed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.get_NIname
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)()>(&::System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x24d6188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "get_NIname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::NameInfo.set_NIname
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::NameInfo::*)(::StringW)>(&::System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24d61c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "set_NIname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIFullName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIFullName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIFullName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIobjectId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x18>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIobjectId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIobjectId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIassemId(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x20>(this, std::forward<int64_t>(value));
}
constexpr int64_t& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIassemId()  {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr int64_t const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIassemId() const {
return ::cordl_internals::getInstanceField<int64_t, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIprimitiveTypeEnum(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x28>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIprimitiveTypeEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x28>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIprimitiveTypeEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NItype(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x30>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItype()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItype() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIisSealed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisSealed()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisSealed() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIisArray(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisArray()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisArray() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIisArrayItem(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisArrayItem()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisArrayItem() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NItransmitTypeOnObject(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3b>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItransmitTypeOnObject()  {
return ::cordl_internals::getInstanceField<bool, 0x3b>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItransmitTypeOnObject() const {
return ::cordl_internals::getInstanceField<bool, 0x3b>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NItransmitTypeOnMember(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItransmitTypeOnMember()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NItransmitTypeOnMember() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIisParentTypeOnObject(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisParentTypeOnObject()  {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIisParentTypeOnObject() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIarrayEnum(::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x40>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIarrayEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x40>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIarrayEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE, 0x40>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::NameInfo::__set_NIsealedStatusChecked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x44>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIsealedStatusChecked()  {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::NameInfo::__get_NIsealedStatusChecked() const {
return ::cordl_internals::getInstanceField<bool, 0x44>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::NameInfo* System::Runtime::Serialization::Formatters::Binary::NameInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Runtime::Serialization::Formatters::Binary::NameInfo::get_IsSealed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "get_IsSealed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Serialization::Formatters::Binary::NameInfo::get_NIname()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "get_NIname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::NameInfo::set_NIname(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::NameInfo*>::get(),
                            "set_NIname",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
