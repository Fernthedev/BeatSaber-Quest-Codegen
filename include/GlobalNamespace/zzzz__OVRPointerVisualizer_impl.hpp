#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPointerVisualizer_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::Update)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x277ed04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPointerVisualizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRPointerVisualizer::*)()>(&::GlobalNamespace::OVRPointerVisualizer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x277eea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::OVRPointerVisualizer::__set_rayTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::OVRPointerVisualizer::__get_rayTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::OVRPointerVisualizer::__get_rayTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__set_linePointer(::UnityEngine::LineRenderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::LineRenderer*, 0x20>(this, std::forward<::UnityEngine::LineRenderer*>(value));
}
constexpr ::UnityEngine::LineRenderer* GlobalNamespace::OVRPointerVisualizer::__get_linePointer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::LineRenderer*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> GlobalNamespace::OVRPointerVisualizer::__get_linePointer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::LineRenderer*, 0x20>(this);
}
constexpr void GlobalNamespace::OVRPointerVisualizer::__set_rayDrawDistance(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::OVRPointerVisualizer::__get_rayDrawDistance()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::OVRPointerVisualizer::__get_rayDrawDistance() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
inline void GlobalNamespace::OVRPointerVisualizer::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPointerVisualizer* GlobalNamespace::OVRPointerVisualizer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRPointerVisualizer*>());
}
inline void GlobalNamespace::OVRPointerVisualizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRPointerVisualizer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
