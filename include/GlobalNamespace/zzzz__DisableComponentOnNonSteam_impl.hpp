#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableComponentOnNonSteam_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableComponentOnNonSteam.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableComponentOnNonSteam::*)()>(&::GlobalNamespace::DisableComponentOnNonSteam::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226c460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableComponentOnNonSteam._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableComponentOnNonSteam::*)()>(&::GlobalNamespace::DisableComponentOnNonSteam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c480;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DisableComponentOnNonSteam::__set__component(::UnityEngine::MonoBehaviour*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MonoBehaviour*, 0x18>(this, std::forward<::UnityEngine::MonoBehaviour*>(value));
}
constexpr ::UnityEngine::MonoBehaviour* GlobalNamespace::DisableComponentOnNonSteam::__get__component()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MonoBehaviour*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> GlobalNamespace::DisableComponentOnNonSteam::__get__component() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MonoBehaviour*, 0x18>(this);
}
inline void GlobalNamespace::DisableComponentOnNonSteam::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DisableComponentOnNonSteam* GlobalNamespace::DisableComponentOnNonSteam::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisableComponentOnNonSteam*>());
}
inline void GlobalNamespace::DisableComponentOnNonSteam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableComponentOnNonSteam*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
