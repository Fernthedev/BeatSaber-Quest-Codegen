#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase.AnimateCutout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)(float_t, float_t, float_t)>(&::GlobalNamespace::SliderControllerBase::AnimateCutout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2391ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(),
                            "AnimateCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)()>(&::GlobalNamespace::SliderControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23925e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderControllerBase::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockController*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::SliderControllerBase::__get__materialPropertyBlockController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> GlobalNamespace::SliderControllerBase::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
constexpr void GlobalNamespace::SliderControllerBase::__set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CutoutAnimateEffect*, 0x20>(this, std::forward<::GlobalNamespace::CutoutAnimateEffect*>(value));
}
constexpr ::GlobalNamespace::CutoutAnimateEffect* GlobalNamespace::SliderControllerBase::__get__cutoutAnimateEffect()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CutoutAnimateEffect*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutAnimateEffect*> GlobalNamespace::SliderControllerBase::__get__cutoutAnimateEffect() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CutoutAnimateEffect*, 0x20>(this);
}
constexpr void GlobalNamespace::SliderControllerBase::__set__dissolving(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::SliderControllerBase::__get__dissolving()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::SliderControllerBase::__get__dissolving() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
inline void GlobalNamespace::SliderControllerBase::AnimateCutout(float_t  cutoutStart, float_t  cutoutEnd, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(),
                            "AnimateCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cutoutStart, cutoutEnd, duration);
}
inline ::GlobalNamespace::SliderControllerBase* GlobalNamespace::SliderControllerBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderControllerBase*>());
}
inline void GlobalNamespace::SliderControllerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderControllerBase*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
