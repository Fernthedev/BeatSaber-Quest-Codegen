#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__SinglePositionTween_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SinglePositionTween.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::SinglePositionTween::*)()>(&::GlobalNamespace::SinglePositionTween::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePositionTween.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::SinglePositionTween::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::SinglePositionTween::CreatePlayable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2317b34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SinglePositionTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SinglePositionTween::*)()>(&::GlobalNamespace::SinglePositionTween::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2317cf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr  GlobalNamespace::SinglePositionTween::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::SinglePositionTween::__set_transformReference(::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>, 0x18>(this, std::forward<::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>>(value));
}
constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>& GlobalNamespace::SinglePositionTween::__get_transformReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>, 0x18>(this);
}
constexpr ::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> const& GlobalNamespace::SinglePositionTween::__get_transformReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ExposedReference_1<::UnityEngine::Transform*>, 0x18>(this);
}
constexpr void GlobalNamespace::SinglePositionTween::__set__cordl_template(::GlobalNamespace::CustomTweenBehaviour*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x28>(this, std::forward<::GlobalNamespace::CustomTweenBehaviour*>(value));
}
constexpr ::GlobalNamespace::CustomTweenBehaviour* GlobalNamespace::SinglePositionTween::__get__cordl_template()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> GlobalNamespace::SinglePositionTween::__get__cordl_template() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x28>(this);
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::SinglePositionTween::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::SinglePositionTween::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, go);
}
inline ::GlobalNamespace::SinglePositionTween* GlobalNamespace::SinglePositionTween::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SinglePositionTween*>());
}
inline void GlobalNamespace::SinglePositionTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SinglePositionTween*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
