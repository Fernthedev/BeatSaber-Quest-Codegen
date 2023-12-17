#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSettings::*)()>(&::GlobalNamespace::MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2362f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_createServerPlayersCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::MultiplayerModeSettings::__get_createServerPlayersCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::MultiplayerModeSettings::__get_createServerPlayersCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlayBeatmapDifficulty(::GlobalNamespace::BeatmapDifficultyMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x14>(this, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayBeatmapDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x14>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayBeatmapDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x14>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlaySongPackMaskSerializedName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlaySongPackMaskSerializedName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerModeSettings::__set_quickPlayEnableLevelSelection(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayEnableLevelSelection()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::MultiplayerModeSettings::__get_quickPlayEnableLevelSelection() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::MultiplayerModeSettings::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerModeSettings*>());
}
inline void GlobalNamespace::MultiplayerModeSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSettings*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
