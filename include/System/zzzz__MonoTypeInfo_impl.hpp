#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__MonoTypeInfo_def.hpp"
#include "System/Reflection/zzzz__RuntimeConstructorInfo_def.hpp"
//  Writing Method size for method: ::System::MonoTypeInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::MonoTypeInfo::*)()>(&::System::MonoTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f6248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::MonoTypeInfo::__set_full_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::MonoTypeInfo::__get_full_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::MonoTypeInfo::__get_full_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::MonoTypeInfo::__set_default_ctor(::System::Reflection::RuntimeConstructorInfo*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::RuntimeConstructorInfo*, 0x18>(this, std::forward<::System::Reflection::RuntimeConstructorInfo*>(value));
}
constexpr ::System::Reflection::RuntimeConstructorInfo* System::MonoTypeInfo::__get_default_ctor()  {
return ::cordl_internals::getInstanceField<::System::Reflection::RuntimeConstructorInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::RuntimeConstructorInfo*> System::MonoTypeInfo::__get_default_ctor() const {
return ::cordl_internals::getInstanceField<::System::Reflection::RuntimeConstructorInfo*, 0x18>(this);
}
inline ::System::MonoTypeInfo* System::MonoTypeInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::MonoTypeInfo*>());
}
inline void System::MonoTypeInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::MonoTypeInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
