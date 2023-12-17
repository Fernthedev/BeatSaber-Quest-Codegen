#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RuntimeCompatibilityAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)()>(&::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24db240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute.set_WrapNonExceptionThrows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::*)(bool)>(&::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24db248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(),
                            "set_WrapNonExceptionThrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__set__WrapNonExceptionThrows_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__get__WrapNonExceptionThrows_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::__get__WrapNonExceptionThrows_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute* System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>());
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::CompilerServices::RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*>::get(),
                            "set_WrapNonExceptionThrows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
