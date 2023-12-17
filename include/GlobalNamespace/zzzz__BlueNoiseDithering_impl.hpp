#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering.SetBlueNoiseShaderParams
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)(int32_t, int32_t)>(&::GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x210ad48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(),
                            "SetBlueNoiseShaderParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)()>(&::GlobalNamespace::BlueNoiseDithering::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210ae34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BlueNoiseDithering::__set__noiseTexture(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x18>(this, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* GlobalNamespace::BlueNoiseDithering::__get__noiseTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> GlobalNamespace::BlueNoiseDithering::__get__noiseTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x18>(this);
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__noiseParamsID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_noiseParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__noiseParamsID()  {
return ::cordl_internals::getStaticField<int32_t, "_noiseParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>();
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__globalNoiseTextureID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_globalNoiseTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__globalNoiseTextureID()  {
return ::cordl_internals::getStaticField<int32_t, "_globalNoiseTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>();
}
inline void GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams(int32_t  cameraPixelWidth, int32_t  cameraPixelHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(),
                            "SetBlueNoiseShaderParams",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cameraPixelWidth, cameraPixelHeight);
}
inline ::GlobalNamespace::BlueNoiseDithering* GlobalNamespace::BlueNoiseDithering::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BlueNoiseDithering*>());
}
inline void GlobalNamespace::BlueNoiseDithering::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
