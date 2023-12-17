#pragma once
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IHapticFeedbackPlayer.PlayHapticFeedback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IHapticFeedbackPlayer::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::IHapticFeedbackPlayer::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IHapticFeedbackPlayer.CanPlayHapticPreset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::IHapticFeedbackPlayer::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::IHapticFeedbackPlayer::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IHapticFeedbackPlayer::PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                            "PlayHapticFeedback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::IHapticFeedbackPlayer::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IHapticFeedbackPlayer*>::get(),
                            "CanPlayHapticPreset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, hapticPreset);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
