#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayerPauseOnInputFocusLost_def.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x223128c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x22314e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusCaptured
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x223149c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost.HandleInputFocusReleased
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2231684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::*)()>(&::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22316c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__songPreviewPlayer(::GlobalNamespace::AudioPlayerBase*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioPlayerBase*, 0x18>(this, std::forward<::GlobalNamespace::AudioPlayerBase*>(value));
}
constexpr ::GlobalNamespace::AudioPlayerBase* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__songPreviewPlayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioPlayerBase*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioPlayerBase*> GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__songPreviewPlayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioPlayerBase*, 0x18>(this);
}
constexpr void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x20>(this, std::forward<::GlobalNamespace::IVRPlatformHelper*>(value));
}
constexpr ::GlobalNamespace::IVRPlatformHelper* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__vrPlatformHelper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::__get__vrPlatformHelper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IVRPlatformHelper*, 0x20>(this);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusCaptured()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "HandleInputFocusCaptured",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::HandleInputFocusReleased()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            "HandleInputFocusReleased",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost* GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>());
}
inline void GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongPreviewPlayerPauseOnInputFocusLost*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
