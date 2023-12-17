#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBoundingBox_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x20f1db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20f1e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxCenter(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__get__boundingBoxCenter()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__get__boundingBoxCenter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxSize(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x24>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__get__boundingBoxSize()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__get__boundingBoxSize() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x24>(this);
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__meshRenderer(::UnityEngine::MeshRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this, std::forward<::UnityEngine::MeshRenderer*>(value));
}
constexpr ::UnityEngine::MeshRenderer* GlobalNamespace::CustomBoundingBox::__get__meshRenderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> GlobalNamespace::CustomBoundingBox::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer*, 0x30>(this);
}
inline void GlobalNamespace::CustomBoundingBox::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CustomBoundingBox* GlobalNamespace::CustomBoundingBox::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomBoundingBox*>());
}
inline void GlobalNamespace::CustomBoundingBox::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
