#pragma once
#include "UnityEngine/Timeline/zzzz__ControlPlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__CustomControlPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "GlobalNamespace/zzzz__AvatarColorBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomControlPlayableAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::CustomControlPlayableAsset::*)()>(&::GlobalNamespace::CustomControlPlayableAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2315858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlPlayableAsset*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomControlPlayableAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomControlPlayableAsset::*)()>(&::GlobalNamespace::CustomControlPlayableAsset::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2315860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlPlayableAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr  GlobalNamespace::CustomControlPlayableAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::CustomControlPlayableAsset::__set__template(::GlobalNamespace::AvatarColorBehaviour*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AvatarColorBehaviour*, 0x58>(this, std::forward<::GlobalNamespace::AvatarColorBehaviour*>(value));
}
constexpr ::GlobalNamespace::AvatarColorBehaviour* GlobalNamespace::CustomControlPlayableAsset::__get__template()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarColorBehaviour*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AvatarColorBehaviour*> GlobalNamespace::CustomControlPlayableAsset::__get__template() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AvatarColorBehaviour*, 0x58>(this);
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::CustomControlPlayableAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlPlayableAsset*>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CustomControlPlayableAsset* GlobalNamespace::CustomControlPlayableAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomControlPlayableAsset*>());
}
inline void GlobalNamespace::CustomControlPlayableAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomControlPlayableAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
