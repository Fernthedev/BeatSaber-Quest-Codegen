#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xd08;
  constexpr static std::size_t addrs = 0x2273700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2274408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::TutorialInstaller::__set__audioClip(::UnityEngine::AudioClip*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioClip*, 0x20>(this, std::forward<::UnityEngine::AudioClip*>(value));
}
constexpr ::UnityEngine::AudioClip* GlobalNamespace::TutorialInstaller::__get__audioClip()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> GlobalNamespace::TutorialInstaller::__get__audioClip() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioClip*, 0x20>(this);
}
constexpr void GlobalNamespace::TutorialInstaller::__set__songBPM(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::TutorialInstaller::__get__songBPM()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::TutorialInstaller::__get__songBPM() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::TutorialInstaller::__set__playerHeightDetectorPrefab(::GlobalNamespace::PlayerHeightDetector*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x30>(this, std::forward<::GlobalNamespace::PlayerHeightDetector*>(value));
}
constexpr ::GlobalNamespace::PlayerHeightDetector* GlobalNamespace::TutorialInstaller::__get__playerHeightDetectorPrefab()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightDetector*> GlobalNamespace::TutorialInstaller::__get__playerHeightDetectorPrefab() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PlayerHeightDetector*, 0x30>(this);
}
constexpr void GlobalNamespace::TutorialInstaller::__set__effectPoolsManualInstaller(::GlobalNamespace::EffectPoolsManualInstaller*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x38>(this, std::forward<::GlobalNamespace::EffectPoolsManualInstaller*>(value));
}
constexpr ::GlobalNamespace::EffectPoolsManualInstaller* GlobalNamespace::TutorialInstaller::__get__effectPoolsManualInstaller()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EffectPoolsManualInstaller*> GlobalNamespace::TutorialInstaller::__get__effectPoolsManualInstaller() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EffectPoolsManualInstaller*, 0x38>(this);
}
constexpr void GlobalNamespace::TutorialInstaller::__set__sceneSetupData(::GlobalNamespace::TutorialSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TutorialSceneSetupData*, 0x40>(this, std::forward<::GlobalNamespace::TutorialSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::TutorialSceneSetupData* GlobalNamespace::TutorialInstaller::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialSceneSetupData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialSceneSetupData*> GlobalNamespace::TutorialInstaller::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TutorialSceneSetupData*, 0x40>(this);
}
inline void GlobalNamespace::TutorialInstaller::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::TutorialInstaller* GlobalNamespace::TutorialInstaller::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TutorialInstaller*>());
}
inline void GlobalNamespace::TutorialInstaller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TutorialInstaller*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
