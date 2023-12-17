#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OnWillRenderObjectTrigger_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x21159a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2115d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnWillRenderObjectTrigger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OnWillRenderObjectTrigger::*)()>(&::GlobalNamespace::OnWillRenderObjectTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2115dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__overrideShader(::UnityEngine::Shader*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Shader*, 0x18>(this, std::forward<::UnityEngine::Shader*>(value));
}
constexpr ::UnityEngine::Shader* GlobalNamespace::OnWillRenderObjectTrigger::__get__overrideShader()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Shader*> GlobalNamespace::OnWillRenderObjectTrigger::__get__overrideShader() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Shader*, 0x18>(this);
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__renderQueue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::OnWillRenderObjectTrigger::__get__renderQueue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& GlobalNamespace::OnWillRenderObjectTrigger::__get__renderQueue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x28>(this, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* GlobalNamespace::OnWillRenderObjectTrigger::__get__material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> GlobalNamespace::OnWillRenderObjectTrigger::__get__material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x28>(this);
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__mesh(::UnityEngine::Mesh*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Mesh*, 0x30>(this, std::forward<::UnityEngine::Mesh*>(value));
}
constexpr ::UnityEngine::Mesh* GlobalNamespace::OnWillRenderObjectTrigger::__get__mesh()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> GlobalNamespace::OnWillRenderObjectTrigger::__get__mesh() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Mesh*, 0x30>(this);
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__meshFilter(::UnityEngine::MeshFilter*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshFilter*, 0x38>(this, std::forward<::UnityEngine::MeshFilter*>(value));
}
constexpr ::UnityEngine::MeshFilter* GlobalNamespace::OnWillRenderObjectTrigger::__get__meshFilter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> GlobalNamespace::OnWillRenderObjectTrigger::__get__meshFilter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshFilter*, 0x38>(this);
}
constexpr void GlobalNamespace::OnWillRenderObjectTrigger::__set__meshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x40>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::OnWillRenderObjectTrigger::__get__meshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::OnWillRenderObjectTrigger::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x40>(this);
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OnWillRenderObjectTrigger* GlobalNamespace::OnWillRenderObjectTrigger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OnWillRenderObjectTrigger*>());
}
inline void GlobalNamespace::OnWillRenderObjectTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OnWillRenderObjectTrigger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
