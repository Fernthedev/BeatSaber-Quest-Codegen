#pragma once
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_impl.hpp"
#include "UnityEngine/InputSystem/Android/zzzz__AndroidRelativeHumidity_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::*)()>(&::UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae5a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity* UnityEngine::InputSystem::Android::AndroidRelativeHumidity::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>());
}
inline void UnityEngine::InputSystem::Android::AndroidRelativeHumidity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
