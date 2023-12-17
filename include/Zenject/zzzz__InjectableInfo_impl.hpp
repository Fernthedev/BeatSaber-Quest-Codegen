#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__InjectableInfo_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::InjectableInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::InjectableInfo::*)(bool, ::System::Object*, ::StringW, ::System::Type*, ::System::Object*, ::Zenject::InjectSources)>(&::Zenject::InjectableInfo::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2eb974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::InjectableInfo::__set_Optional(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::InjectableInfo::__get_Optional()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Zenject::InjectableInfo::__get_Optional() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Zenject::InjectableInfo::__set_Identifier(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::InjectableInfo::__get_Identifier()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::InjectableInfo::__get_Identifier() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void Zenject::InjectableInfo::__set_SourceType(::Zenject::InjectSources  value)  {
::cordl_internals::setInstanceField<::Zenject::InjectSources, 0x20>(this, std::forward<::Zenject::InjectSources>(value));
}
constexpr ::Zenject::InjectSources& Zenject::InjectableInfo::__get_SourceType()  {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x20>(this);
}
constexpr ::Zenject::InjectSources const& Zenject::InjectableInfo::__get_SourceType() const {
return ::cordl_internals::getInstanceField<::Zenject::InjectSources, 0x20>(this);
}
constexpr void Zenject::InjectableInfo::__set_MemberName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Zenject::InjectableInfo::__get_MemberName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& Zenject::InjectableInfo::__get_MemberName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void Zenject::InjectableInfo::__set_MemberType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x30>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* Zenject::InjectableInfo::__get_MemberType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> Zenject::InjectableInfo::__get_MemberType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x30>(this);
}
constexpr void Zenject::InjectableInfo::__set_DefaultValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* Zenject::InjectableInfo::__get_DefaultValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> Zenject::InjectableInfo::__get_DefaultValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
inline ::Zenject::InjectableInfo* Zenject::InjectableInfo::New_ctor(bool  optional, ::System::Object*  identifier, ::StringW  memberName, ::System::Type*  memberType, ::System::Object*  defaultValue, ::Zenject::InjectSources  sourceType)  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::InjectableInfo*>(optional, identifier, memberName, memberType, defaultValue, sourceType));
}
inline void Zenject::InjectableInfo::_ctor(bool  optional, ::System::Object*  identifier, ::StringW  memberName, ::System::Type*  memberType, ::System::Object*  defaultValue, ::Zenject::InjectSources  sourceType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::InjectableInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectSources>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, optional, identifier, memberName, memberType, defaultValue, sourceType);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
