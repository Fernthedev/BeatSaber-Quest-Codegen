#pragma once
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IFilePathSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.get_beatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::CustomBeatmapLevel::*)()>(&::GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23473c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.get_songAudioClipPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::CustomBeatmapLevel::*)()>(&::GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23473cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "get_songAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevel::*)(::GlobalNamespace::CustomPreviewBeatmapLevel*)>(&::GlobalNamespace::CustomBeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2347440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.SetBeatmapLevelData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevel::*)(::GlobalNamespace::BeatmapLevelData*)>(&::GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2347600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "SetBeatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevel.GetBeatmapLevelColorScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::CustomBeatmapLevel::*)(int32_t)>(&::GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2347608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "GetBeatmapLevelColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevel"
constexpr  GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IBeatmapLevel*() noexcept {
return static_cast<::GlobalNamespace::IBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
constexpr  GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept {
return static_cast<::GlobalNamespace::IPreviewBeatmapLevel*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IFilePathSongAudioClipProvider"
constexpr  GlobalNamespace::CustomBeatmapLevel::operator ::GlobalNamespace::IFilePathSongAudioClipProvider*() noexcept {
return static_cast<::GlobalNamespace::IFilePathSongAudioClipProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::CustomBeatmapLevel::__set__beatmapLevelData(::GlobalNamespace::BeatmapLevelData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapLevelData*, 0xb0>(this, std::forward<::GlobalNamespace::BeatmapLevelData*>(value));
}
constexpr ::GlobalNamespace::BeatmapLevelData* GlobalNamespace::CustomBeatmapLevel::__get__beatmapLevelData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelData*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelData*> GlobalNamespace::CustomBeatmapLevel::__get__beatmapLevelData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapLevelData*, 0xb0>(this);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::CustomBeatmapLevel::get_beatmapLevelData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "get_beatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::CustomBeatmapLevel::get_songAudioClipPath()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "get_songAudioClipPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CustomBeatmapLevel* GlobalNamespace::CustomBeatmapLevel::New_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel*  customPreviewBeatmapLevel)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomBeatmapLevel*>(customPreviewBeatmapLevel));
}
inline void GlobalNamespace::CustomBeatmapLevel::_ctor(::GlobalNamespace::CustomPreviewBeatmapLevel*  customPreviewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CustomPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, customPreviewBeatmapLevel);
}
inline void GlobalNamespace::CustomBeatmapLevel::SetBeatmapLevelData(::GlobalNamespace::BeatmapLevelData*  beatmapLevelData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "SetBeatmapLevelData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevelData);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::CustomBeatmapLevel::GetBeatmapLevelColorScheme(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevel*>::get(),
                            "GetBeatmapLevelColorScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(*this, ___internal_method, index);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
