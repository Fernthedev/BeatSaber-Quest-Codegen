#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
constexpr void GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__set_globalPropertyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_globalPropertyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_globalPropertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__set_materialPropertyNameCouples(::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>& GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_materialPropertyNameCouples()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*> const& GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__get_materialPropertyNameCouples() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialPropertyNameCouples", ty: "::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__Noise3DTexturesGenerator__MaterialTextureParamsCouple(::StringW  globalPropertyName, ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>  materialPropertyNameCouples) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->globalPropertyName = globalPropertyName;
this->materialPropertyNameCouples = materialPropertyNameCouples;
}
constexpr void GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__set_texturePropertyName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_texturePropertyName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_texturePropertyName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW  texturePropertyName, ::UnityEngine::Material*  material) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->texturePropertyName = texturePropertyName;
this->material = material;
}
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x280afac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.CreateNoisePixels
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> (*)(int32_t, int32_t, int32_t, float_t, int32_t, float_t)>(&::GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x280b1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            "CreateNoisePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280b4e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::Noise3DTexturesGenerator::__set__data(::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>& GlobalNamespace::Noise3DTexturesGenerator::__get__data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> const& GlobalNamespace::Noise3DTexturesGenerator::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>, 0x18>(this);
}
inline void GlobalNamespace::Noise3DTexturesGenerator::setStaticF__texture(::UnityEngine::Texture3D*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Texture3D*, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get>(std::forward<::UnityEngine::Texture3D*>(value));
}
inline ::UnityEngine::Texture3D* GlobalNamespace::Noise3DTexturesGenerator::getStaticF__texture()  {
return ::cordl_internals::getStaticField<::UnityEngine::Texture3D*, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get>();
}
inline void GlobalNamespace::Noise3DTexturesGenerator::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels(int32_t  width, int32_t  height, int32_t  depth, float_t  scale, int32_t  repeat, float_t  contrast)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            "CreateNoisePixels",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>, false>(nullptr, ___internal_method, width, height, depth, scale, repeat, contrast);
}
inline ::GlobalNamespace::Noise3DTexturesGenerator* GlobalNamespace::Noise3DTexturesGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Noise3DTexturesGenerator*>());
}
inline void GlobalNamespace::Noise3DTexturesGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
