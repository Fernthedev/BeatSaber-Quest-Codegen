#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerOutroAnimator_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::Start)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23dd26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::*)()>(&::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dd2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__set__outroPlayableDirector(::UnityEngine::Playables::PlayableDirector*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x18>(this, std::forward<::UnityEngine::Playables::PlayableDirector*>(value));
}
constexpr ::UnityEngine::Playables::PlayableDirector* GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__get__outroPlayableDirector()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__get__outroPlayableDirector() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableDirector*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__set__multiplayerController(::GlobalNamespace::MultiplayerController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this, std::forward<::GlobalNamespace::MultiplayerController*>(value));
}
constexpr ::GlobalNamespace::MultiplayerController* GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__get__multiplayerController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerController*> GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::__get__multiplayerController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerController*, 0x20>(this);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator* GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>());
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
