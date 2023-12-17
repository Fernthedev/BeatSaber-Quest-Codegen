#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23959c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2395b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderShaderWarmup::__set__sliderMeshController(::GlobalNamespace::SliderMeshController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderMeshController*, 0x18>(this, std::forward<::GlobalNamespace::SliderMeshController*>(value));
}
constexpr ::GlobalNamespace::SliderMeshController* GlobalNamespace::SliderShaderWarmup::__get__sliderMeshController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMeshController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshController*> GlobalNamespace::SliderShaderWarmup::__get__sliderMeshController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMeshController*, 0x18>(this);
}
constexpr void GlobalNamespace::SliderShaderWarmup::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x20>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockController*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::SliderShaderWarmup::__get__materialPropertyBlockController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> GlobalNamespace::SliderShaderWarmup::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x20>(this);
}
inline void GlobalNamespace::SliderShaderWarmup::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SliderShaderWarmup* GlobalNamespace::SliderShaderWarmup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderShaderWarmup*>());
}
inline void GlobalNamespace::SliderShaderWarmup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
