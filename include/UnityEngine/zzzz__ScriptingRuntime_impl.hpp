#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingRuntime_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScriptingRuntime.GetAllUserAssemblies
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)()>(&::UnityEngine::ScriptingRuntime::GetAllUserAssemblies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cd0a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingRuntime*>::get(),
                            "GetAllUserAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::ScriptingRuntime::GetAllUserAssemblies()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingRuntime*>::get(),
                            "GetAllUserAssemblies",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
