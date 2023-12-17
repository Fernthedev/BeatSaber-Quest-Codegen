#pragma once
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/zzzz__AssemblyLoadEventArgs_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
//  Writing Method size for method: ::System::AssemblyLoadEventArgs._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AssemblyLoadEventArgs::*)(::System::Reflection::Assembly*)>(&::System::AssemblyLoadEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2521160;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AssemblyLoadEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::AssemblyLoadEventArgs::__set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly*  value)  {
::cordl_internals::setInstanceField<::System::Reflection::Assembly*, 0x10>(this, std::forward<::System::Reflection::Assembly*>(value));
}
constexpr ::System::Reflection::Assembly* System::AssemblyLoadEventArgs::__get__LoadedAssembly_k__BackingField()  {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> System::AssemblyLoadEventArgs::__get__LoadedAssembly_k__BackingField() const {
return ::cordl_internals::getInstanceField<::System::Reflection::Assembly*, 0x10>(this);
}
inline ::System::AssemblyLoadEventArgs* System::AssemblyLoadEventArgs::New_ctor(::System::Reflection::Assembly*  loadedAssembly)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::AssemblyLoadEventArgs*>(loadedAssembly));
}
inline void System::AssemblyLoadEventArgs::_ctor(::System::Reflection::Assembly*  loadedAssembly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AssemblyLoadEventArgs*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, loadedAssembly);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
