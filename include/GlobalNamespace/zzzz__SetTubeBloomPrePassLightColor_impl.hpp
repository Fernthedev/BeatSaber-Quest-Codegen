#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetTubeBloomPrePassLightColor_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::Start)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2264c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetTubeBloomPrePassLightColor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SetTubeBloomPrePassLightColor::*)()>(&::GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__set__color(::GlobalNamespace::ColorSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this, std::forward<::GlobalNamespace::ColorSO*>(value));
}
constexpr ::GlobalNamespace::ColorSO* GlobalNamespace::SetTubeBloomPrePassLightColor::__get__color()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> GlobalNamespace::SetTubeBloomPrePassLightColor::__get__color() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorSO*, 0x18>(this);
}
constexpr void GlobalNamespace::SetTubeBloomPrePassLightColor::__set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& GlobalNamespace::SetTubeBloomPrePassLightColor::__get__tubeLights()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& GlobalNamespace::SetTubeBloomPrePassLightColor::__get__tubeLights() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>, 0x20>(this);
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SetTubeBloomPrePassLightColor* GlobalNamespace::SetTubeBloomPrePassLightColor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SetTubeBloomPrePassLightColor*>());
}
inline void GlobalNamespace::SetTubeBloomPrePassLightColor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SetTubeBloomPrePassLightColor*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
