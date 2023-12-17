#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleMaterialSetter_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQualitySO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x238e5b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetCoreMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::GlobalNamespace::ObstaclesQuality)>(&::GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x238e61c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "SetCoreMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter.SetFakeGlowMaterial
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)(::UnityEngine::Renderer*, ::GlobalNamespace::ObstaclesQuality)>(&::GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x238e754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "SetFakeGlowMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleMaterialSetter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleMaterialSetter::*)()>(&::GlobalNamespace::ObstacleMaterialSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x238e790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__screenDisplacement(::GlobalNamespace::BoolSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this, std::forward<::GlobalNamespace::BoolSO*>(value));
}
constexpr ::GlobalNamespace::BoolSO* GlobalNamespace::ObstacleMaterialSetter::__get__screenDisplacement()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> GlobalNamespace::ObstacleMaterialSetter::__get__screenDisplacement() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BoolSO*, 0x18>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0x20>(this, std::forward<::GlobalNamespace::ObstaclesQualitySO*>(value));
}
constexpr ::GlobalNamespace::ObstaclesQualitySO* GlobalNamespace::ObstacleMaterialSetter::__get__obstaclesQuality()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> GlobalNamespace::ObstacleMaterialSetter::__get__obstaclesQuality() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ObstaclesQualitySO*, 0x20>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__lwCoreMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x28>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::ObstacleMaterialSetter::__get__lwCoreMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::ObstacleMaterialSetter::__get__lwCoreMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x28>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__hwCoreMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x30>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::ObstacleMaterialSetter::__get__hwCoreMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::ObstacleMaterialSetter::__get__hwCoreMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x30>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__texturedCoreMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x38>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::ObstacleMaterialSetter::__get__texturedCoreMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::ObstacleMaterialSetter::__get__texturedCoreMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x38>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__fakeGlowLWMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x40>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowLWMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowLWMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x40>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__fakeGlowTexturedMaterial(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x48>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowTexturedMaterial()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::ObstacleMaterialSetter::__get__fakeGlowTexturedMaterial() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x48>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstacleCoreRenderer(::UnityEngine::Renderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Renderer*, 0x50>(this, std::forward<::UnityEngine::Renderer*>(value));
}
constexpr ::UnityEngine::Renderer* GlobalNamespace::ObstacleMaterialSetter::__get__obstacleCoreRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> GlobalNamespace::ObstacleMaterialSetter::__get__obstacleCoreRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x50>(this);
}
constexpr void GlobalNamespace::ObstacleMaterialSetter::__set__obstacleFakeGlowRenderer(::UnityEngine::Renderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Renderer*, 0x58>(this, std::forward<::UnityEngine::Renderer*>(value));
}
constexpr ::UnityEngine::Renderer* GlobalNamespace::ObstacleMaterialSetter::__get__obstacleFakeGlowRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> GlobalNamespace::ObstacleMaterialSetter::__get__obstacleFakeGlowRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x58>(this);
}
inline void GlobalNamespace::ObstacleMaterialSetter::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetCoreMaterial(::UnityEngine::Renderer*  renderer, ::GlobalNamespace::ObstaclesQuality  obstaclesQuality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "SetCoreMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, renderer, obstaclesQuality);
}
inline void GlobalNamespace::ObstacleMaterialSetter::SetFakeGlowMaterial(::UnityEngine::Renderer*  renderer, ::GlobalNamespace::ObstaclesQuality  obstaclesQuality)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            "SetFakeGlowMaterial",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstaclesQuality>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, renderer, obstaclesQuality);
}
inline ::GlobalNamespace::ObstacleMaterialSetter* GlobalNamespace::ObstacleMaterialSetter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleMaterialSetter*>());
}
inline void GlobalNamespace::ObstacleMaterialSetter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleMaterialSetter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
