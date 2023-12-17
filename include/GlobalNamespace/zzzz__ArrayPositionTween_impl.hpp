#pragma once
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__ArrayPositionTween_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_def.hpp"
#include "GlobalNamespace/zzzz__CustomTweenBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::ArrayPositionTween::*)()>(&::GlobalNamespace::ArrayPositionTween::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2315044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::ArrayPositionTween::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::ArrayPositionTween::CreatePlayable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x231504c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArrayPositionTween._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ArrayPositionTween::*)()>(&::GlobalNamespace::ArrayPositionTween::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2315190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr  GlobalNamespace::ArrayPositionTween::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::ArrayPositionTween::__set_arrayReference(::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>, 0x18>(this, std::forward<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>>(value));
}
constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>& GlobalNamespace::ArrayPositionTween::__get_arrayReference()  {
return ::cordl_internals::getInstanceField<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>, 0x18>(this);
}
constexpr ::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*> const& GlobalNamespace::ArrayPositionTween::__get_arrayReference() const {
return ::cordl_internals::getInstanceField<::UnityEngine::ExposedReference_1<::GlobalNamespace::TimelineArrayReference*>, 0x18>(this);
}
constexpr void GlobalNamespace::ArrayPositionTween::__set_elementDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ArrayPositionTween::__get_elementDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::ArrayPositionTween::__get_elementDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::ArrayPositionTween::__set__cordl_template(::GlobalNamespace::CustomTweenBehaviour*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x30>(this, std::forward<::GlobalNamespace::CustomTweenBehaviour*>(value));
}
constexpr ::GlobalNamespace::CustomTweenBehaviour* GlobalNamespace::ArrayPositionTween::__get__cordl_template()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CustomTweenBehaviour*> GlobalNamespace::ArrayPositionTween::__get__cordl_template() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::CustomTweenBehaviour*, 0x30>(this);
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::ArrayPositionTween::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::ArrayPositionTween::CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(*this, ___internal_method, graph, go);
}
inline ::GlobalNamespace::ArrayPositionTween* GlobalNamespace::ArrayPositionTween::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ArrayPositionTween*>());
}
inline void GlobalNamespace::ArrayPositionTween::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArrayPositionTween*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
