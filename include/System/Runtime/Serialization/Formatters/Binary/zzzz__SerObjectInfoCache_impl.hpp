#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__SerObjectInfoCache_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::StringW, ::StringW, bool)>(&::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x24cb308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::*)(::System::Type*)>(&::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x24cb344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_fullTypeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_fullTypeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_fullTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_assemblyString(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_assemblyString()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_assemblyString() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_hasTypeForwardedFrom(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_hasTypeForwardedFrom()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_hasTypeForwardedFrom() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberInfos(::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>, 0x28>(this, std::forward<::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>>(value));
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>, 0x28>(this);
}
constexpr ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*>, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberNames()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberNames() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__set_memberTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x38>(this, std::forward<::ArrayW<::System::Type*,::Array<::System::Type*>*>>(value));
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x38>(this);
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::__get_memberTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x38>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::StringW  typeName, ::StringW  assemblyName, bool  hasTypeForwardedFrom)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(typeName, assemblyName, hasTypeForwardedFrom));
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::StringW  typeName, ::StringW  assemblyName, bool  hasTypeForwardedFrom)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, typeName, assemblyName, hasTypeForwardedFrom);
}
inline ::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache* System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>(type));
}
inline void System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
