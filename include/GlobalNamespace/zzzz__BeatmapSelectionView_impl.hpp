#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSelectionView_def.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmap_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView.SetBeatmap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)(::GlobalNamespace::PreviewDifficultyBeatmap*)>(&::GlobalNamespace::BeatmapSelectionView::SetBeatmap)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x22df98c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapSelectionView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapSelectionView::*)()>(&::GlobalNamespace::BeatmapSelectionView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22dfa58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BeatmapSelectionView::__set__levelBar(::GlobalNamespace::LevelBar*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this, std::forward<::GlobalNamespace::LevelBar*>(value));
}
constexpr ::GlobalNamespace::LevelBar* GlobalNamespace::BeatmapSelectionView::__get__levelBar()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> GlobalNamespace::BeatmapSelectionView::__get__levelBar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapSelectionView::__set__noLevelText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::BeatmapSelectionView::__get__noLevelText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::BeatmapSelectionView::__get__noLevelText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
inline void GlobalNamespace::BeatmapSelectionView::SetBeatmap(::GlobalNamespace::PreviewDifficultyBeatmap*  beatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                            "SetBeatmap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PreviewDifficultyBeatmap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::BeatmapSelectionView* GlobalNamespace::BeatmapSelectionView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapSelectionView*>());
}
inline void GlobalNamespace::BeatmapSelectionView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSelectionView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
