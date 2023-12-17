#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenBackButtonAnimationController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "GlobalNamespace/zzzz__ScreenBackButtonAnimationController_def.hpp"
constexpr void GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::__ScreenBackButtonAnimationController__AnimationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::FadeIn{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::FadeOut{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveIn{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveOut{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveIn2{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType::MoveOut2{static_cast<int32_t>(0x5)};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(&::GlobalNamespace::ScreenBackButtonAnimationController::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2115f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController.StartAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType)>(&::GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2115f74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenBackButtonAnimationController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenBackButtonAnimationController::*)()>(&::GlobalNamespace::ScreenBackButtonAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2115fe4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScreenBackButtonAnimationController::__set__animator(::UnityEngine::Animator*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Animator*, 0x18>(this, std::forward<::UnityEngine::Animator*>(value));
}
constexpr ::UnityEngine::Animator* GlobalNamespace::ScreenBackButtonAnimationController::__get__animator()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> GlobalNamespace::ScreenBackButtonAnimationController::__get__animator() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Animator*, 0x18>(this);
}
constexpr void GlobalNamespace::ScreenBackButtonAnimationController::__set__animationHashes(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>* GlobalNamespace::ScreenBackButtonAnimationController::__get__animationHashes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*> GlobalNamespace::ScreenBackButtonAnimationController::__get__animationHashes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType,int32_t>*, 0x20>(this);
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::StartAnimation(::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType  animationType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            "StartAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenBackButtonAnimationController__AnimationType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, animationType);
}
inline ::GlobalNamespace::ScreenBackButtonAnimationController* GlobalNamespace::ScreenBackButtonAnimationController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScreenBackButtonAnimationController*>());
}
inline void GlobalNamespace::ScreenBackButtonAnimationController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenBackButtonAnimationController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
