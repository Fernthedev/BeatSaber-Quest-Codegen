#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__SaberTrail_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberModelController_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberGlowColor_def.hpp"
#include "GlobalNamespace/zzzz__SetSaberFakeGlowColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SaberModelController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberModelController__InitData::*)()>(&::GlobalNamespace::__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226452c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SaberModelController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SaberModelController__InitData::*)(::UnityEngine::Color)>(&::GlobalNamespace::__SaberModelController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x226454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SaberModelController__InitData::__set_trailTintColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x10>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__SaberModelController__InitData::__get_trailTintColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__SaberModelController__InitData::__get_trailTintColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x10>(this);
}
inline ::GlobalNamespace::__SaberModelController__InitData* GlobalNamespace::__SaberModelController__InitData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SaberModelController__InitData*>());
}
inline void GlobalNamespace::__SaberModelController__InitData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__SaberModelController__InitData* GlobalNamespace::__SaberModelController__InitData::New_ctor(::UnityEngine::Color  trailTintColor)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SaberModelController__InitData*>(trailTintColor));
}
inline void GlobalNamespace::__SaberModelController__InitData::_ctor(::UnityEngine::Color  trailTintColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SaberModelController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trailTintColor);
}
//  Writing Method size for method: ::GlobalNamespace::SaberModelController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)(::UnityEngine::Transform*, ::GlobalNamespace::Saber*)>(&::GlobalNamespace::SaberModelController::Init)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x22641ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberModelController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberModelController::*)()>(&::GlobalNamespace::SaberModelController::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22644bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SaberModelController::__set__saberTrail(::GlobalNamespace::SaberTrail*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberTrail*, 0x18>(this, std::forward<::GlobalNamespace::SaberTrail*>(value));
}
constexpr ::GlobalNamespace::SaberTrail* GlobalNamespace::SaberModelController::__get__saberTrail()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberTrail*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTrail*> GlobalNamespace::SaberModelController::__get__saberTrail() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberTrail*, 0x18>(this);
}
constexpr void GlobalNamespace::SaberModelController::__set__setSaberGlowColors(::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>& GlobalNamespace::SaberModelController::__get__setSaberGlowColors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*> const& GlobalNamespace::SaberModelController::__get__setSaberGlowColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SetSaberGlowColor*,::Array<::GlobalNamespace::SetSaberGlowColor*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::SaberModelController::__set__setSaberFakeGlowColors(::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>, 0x28>(this, std::forward<::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>& GlobalNamespace::SaberModelController::__get__setSaberFakeGlowColors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>, 0x28>(this);
}
constexpr ::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*> const& GlobalNamespace::SaberModelController::__get__setSaberFakeGlowColors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::SetSaberFakeGlowColor*,::Array<::GlobalNamespace::SetSaberFakeGlowColor*>*>, 0x28>(this);
}
constexpr void GlobalNamespace::SaberModelController::__set__saberLight(::GlobalNamespace::TubeBloomPrePassLight*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this, std::forward<::GlobalNamespace::TubeBloomPrePassLight*>(value));
}
constexpr ::GlobalNamespace::TubeBloomPrePassLight* GlobalNamespace::SaberModelController::__get__saberLight()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> GlobalNamespace::SaberModelController::__get__saberLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::TubeBloomPrePassLight*, 0x30>(this);
}
constexpr void GlobalNamespace::SaberModelController::__set__initData(::GlobalNamespace::__SaberModelController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SaberModelController__InitData*, 0x38>(this, std::forward<::GlobalNamespace::__SaberModelController__InitData*>(value));
}
constexpr ::GlobalNamespace::__SaberModelController__InitData* GlobalNamespace::SaberModelController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberModelController__InitData*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SaberModelController__InitData*> GlobalNamespace::SaberModelController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SaberModelController__InitData*, 0x38>(this);
}
constexpr void GlobalNamespace::SaberModelController::__set__colorManager(::GlobalNamespace::ColorManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager*, 0x40>(this, std::forward<::GlobalNamespace::ColorManager*>(value));
}
constexpr ::GlobalNamespace::ColorManager* GlobalNamespace::SaberModelController::__get__colorManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> GlobalNamespace::SaberModelController::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x40>(this);
}
inline void GlobalNamespace::SaberModelController::Init(::UnityEngine::Transform*  parent, ::GlobalNamespace::Saber*  saber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Saber*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, parent, saber);
}
inline ::GlobalNamespace::SaberModelController* GlobalNamespace::SaberModelController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberModelController*>());
}
inline void GlobalNamespace::SaberModelController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberModelController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
