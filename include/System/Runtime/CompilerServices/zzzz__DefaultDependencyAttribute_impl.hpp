#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DefaultDependencyAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DefaultDependencyAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::DefaultDependencyAttribute::*)(::System::Runtime::CompilerServices::LoadHint)>(&::System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24debb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::CompilerServices::DefaultDependencyAttribute::__set_loadHint(::System::Runtime::CompilerServices::LoadHint  value)  {
::cordl_internals::setInstanceField<::System::Runtime::CompilerServices::LoadHint, 0x10>(this, std::forward<::System::Runtime::CompilerServices::LoadHint>(value));
}
constexpr ::System::Runtime::CompilerServices::LoadHint& System::Runtime::CompilerServices::DefaultDependencyAttribute::__get_loadHint()  {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::LoadHint, 0x10>(this);
}
constexpr ::System::Runtime::CompilerServices::LoadHint const& System::Runtime::CompilerServices::DefaultDependencyAttribute::__get_loadHint() const {
return ::cordl_internals::getInstanceField<::System::Runtime::CompilerServices::LoadHint, 0x10>(this);
}
inline ::System::Runtime::CompilerServices::DefaultDependencyAttribute* System::Runtime::CompilerServices::DefaultDependencyAttribute::New_ctor(::System::Runtime::CompilerServices::LoadHint  loadHintArgument)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>(loadHintArgument));
}
inline void System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor(::System::Runtime::CompilerServices::LoadHint  loadHintArgument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadHintArgument);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
