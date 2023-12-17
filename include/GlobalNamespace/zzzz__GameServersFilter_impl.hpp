#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameServersFilter_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServersFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServersFilter::*)()>(&::GlobalNamespace::GameServersFilter::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a5690;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameServersFilter::__set_filterByDifficulty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterByDifficulty()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterByDifficulty() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredDifficulty(::GlobalNamespace::BeatmapDifficultyMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x11>(this, std::forward<::GlobalNamespace::BeatmapDifficultyMask>(value));
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::GameServersFilter::__get_filteredDifficulty()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x11>(this);
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::GameServersFilter::__get_filteredDifficulty() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDifficultyMask, 0x11>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterByModifiers(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x12>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterByModifiers()  {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterByModifiers() const {
return ::cordl_internals::getInstanceField<bool, 0x12>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredModifiers(::GlobalNamespace::GameplayModifierMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::GameplayModifierMask, 0x14>(this, std::forward<::GlobalNamespace::GameplayModifierMask>(value));
}
constexpr ::GlobalNamespace::GameplayModifierMask& GlobalNamespace::GameServersFilter::__get_filteredModifiers()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierMask, 0x14>(this);
}
constexpr ::GlobalNamespace::GameplayModifierMask const& GlobalNamespace::GameServersFilter::__get_filteredModifiers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::GameplayModifierMask, 0x14>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filterBySongPacks(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x16>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_filterBySongPacks()  {
return ::cordl_internals::getInstanceField<bool, 0x16>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_filterBySongPacks() const {
return ::cordl_internals::getInstanceField<bool, 0x16>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_filteredSongPacks(::GlobalNamespace::SongPackMask  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SongPackMask, 0x18>(this, std::forward<::GlobalNamespace::SongPackMask>(value));
}
constexpr ::GlobalNamespace::SongPackMask& GlobalNamespace::GameServersFilter::__get_filteredSongPacks()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x18>(this);
}
constexpr ::GlobalNamespace::SongPackMask const& GlobalNamespace::GameServersFilter::__get_filteredSongPacks() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SongPackMask, 0x18>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showFull(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showFull()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showFull() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showProtected(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showProtected()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showProtected() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this);
}
constexpr void GlobalNamespace::GameServersFilter::__set_showInternetGames(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::GameServersFilter::__get_showInternetGames()  {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
constexpr bool const& GlobalNamespace::GameServersFilter::__get_showInternetGames() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this);
}
inline ::GlobalNamespace::GameServersFilter* GlobalNamespace::GameServersFilter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameServersFilter*>());
}
inline void GlobalNamespace::GameServersFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServersFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
