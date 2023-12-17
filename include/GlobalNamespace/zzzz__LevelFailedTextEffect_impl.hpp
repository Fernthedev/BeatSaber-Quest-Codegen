#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextEffect_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextEffect.ShowEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextEffect::*)()>(&::GlobalNamespace::LevelFailedTextEffect::ShowEffect)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x239a248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextEffect*>::get(),
                            "ShowEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedTextEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedTextEffect::*)()>(&::GlobalNamespace::LevelFailedTextEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239a284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelFailedTextEffect::__set__animator(::UnityEngine::Animator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator*, 0x18>(this, std::forward<::UnityEngine::Animator*>(value));
}
constexpr ::UnityEngine::Animator* GlobalNamespace::LevelFailedTextEffect::__get__animator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> GlobalNamespace::LevelFailedTextEffect::__get__animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x18>(this);
}
inline void GlobalNamespace::LevelFailedTextEffect::ShowEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextEffect*>::get(),
                            "ShowEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LevelFailedTextEffect* GlobalNamespace::LevelFailedTextEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelFailedTextEffect*>());
}
inline void GlobalNamespace::LevelFailedTextEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedTextEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
