#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SortingLayer_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SortingLayer.get_renderer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (::GlobalNamespace::SortingLayer::*)()>(&::GlobalNamespace::SortingLayer::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SortingLayer.Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SortingLayer::*)()>(&::GlobalNamespace::SortingLayer::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x20f5b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SortingLayer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SortingLayer::*)()>(&::GlobalNamespace::SortingLayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20f5b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SortingLayer::__set__renderer(::UnityEngine::Renderer*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Renderer*, 0x18>(this, std::forward<::UnityEngine::Renderer*>(value));
}
constexpr ::UnityEngine::Renderer* GlobalNamespace::SortingLayer::__get__renderer()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> GlobalNamespace::SortingLayer::__get__renderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Renderer*, 0x18>(this);
}
inline ::UnityEngine::Renderer* GlobalNamespace::SortingLayer::get_renderer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            "get_renderer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Renderer*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SortingLayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            "Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SortingLayer* GlobalNamespace::SortingLayer::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SortingLayer*>());
}
inline void GlobalNamespace::SortingLayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SortingLayer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
