#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutHapticEffect_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
constexpr void GlobalNamespace::__NoteCutHapticEffect__Type::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__NoteCutHapticEffect__Type::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__NoteCutHapticEffect__Type::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type::__NoteCutHapticEffect__Type(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type  GlobalNamespace::__NoteCutHapticEffect__Type::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type  GlobalNamespace::__NoteCutHapticEffect__Type::ShortNormal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type  GlobalNamespace::__NoteCutHapticEffect__Type::ShortWeak{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type  GlobalNamespace::__NoteCutHapticEffect__Type::Bomb{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__NoteCutHapticEffect__Type  GlobalNamespace::__NoteCutHapticEffect__Type::BadCut{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect.HitNote
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)(::GlobalNamespace::SaberType, ::GlobalNamespace::__NoteCutHapticEffect__Type)>(&::GlobalNamespace::NoteCutHapticEffect::HitNote)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x239a8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(),
                            "HitNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutHapticEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutHapticEffect::*)()>(&::GlobalNamespace::NoteCutHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239a954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__normalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x18>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::NoteCutHapticEffect::__get__normalPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::NoteCutHapticEffect::__get__normalPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x18>(this);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortNormalPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::NoteCutHapticEffect::__get__shortNormalPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::NoteCutHapticEffect::__get__shortNormalPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x20>(this);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__shortWeakPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::NoteCutHapticEffect::__get__shortWeakPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::NoteCutHapticEffect::__get__shortWeakPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x28>(this);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__bombPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x30>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::NoteCutHapticEffect::__get__bombPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::NoteCutHapticEffect::__get__bombPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x30>(this);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__badCutPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value)  {
::cordl_internals::setInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x38>(this, std::forward<::Libraries::HM::HMLib::VR::HapticPresetSO*>(value));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* GlobalNamespace::NoteCutHapticEffect::__get__badCutPreset()  {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> GlobalNamespace::NoteCutHapticEffect::__get__badCutPreset() const {
return ::cordl_internals::getInstanceField<::Libraries::HM::HMLib::VR::HapticPresetSO*, 0x38>(this);
}
constexpr void GlobalNamespace::NoteCutHapticEffect::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x40>(this, std::forward<::GlobalNamespace::HapticFeedbackManager*>(value));
}
constexpr ::GlobalNamespace::HapticFeedbackManager* GlobalNamespace::NoteCutHapticEffect::__get__hapticFeedbackManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> GlobalNamespace::NoteCutHapticEffect::__get__hapticFeedbackManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::HapticFeedbackManager*, 0x40>(this);
}
inline void GlobalNamespace::NoteCutHapticEffect::HitNote(::GlobalNamespace::SaberType  saberType, ::GlobalNamespace::__NoteCutHapticEffect__Type  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(),
                            "HitNote",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteCutHapticEffect__Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, saberType, type);
}
inline ::GlobalNamespace::NoteCutHapticEffect* GlobalNamespace::NoteCutHapticEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutHapticEffect*>());
}
inline void GlobalNamespace::NoteCutHapticEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutHapticEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
