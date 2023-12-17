#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelStatsView_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.Hide
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22e6f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView.ShowStats
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)(::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::PlayerData*)>(&::GlobalNamespace::LevelStatsView::ShowStats)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x22e6f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            "ShowStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelStatsView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelStatsView::*)()>(&::GlobalNamespace::LevelStatsView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e7314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelStatsView::__set__highScoreText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LevelStatsView::__get__highScoreText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LevelStatsView::__get__highScoreText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::LevelStatsView::__set__maxComboText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LevelStatsView::__get__maxComboText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LevelStatsView::__get__maxComboText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr void GlobalNamespace::LevelStatsView::__set__maxRankText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LevelStatsView::__get__maxRankText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LevelStatsView::__get__maxRankText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
inline void GlobalNamespace::LevelStatsView::Hide()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            "Hide",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LevelStatsView::ShowStats(::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::PlayerData*  playerData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            "ShowStats",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, difficultyBeatmap, playerData);
}
inline ::GlobalNamespace::LevelStatsView* GlobalNamespace::LevelStatsView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelStatsView*>());
}
inline void GlobalNamespace::LevelStatsView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelStatsView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
