#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelBuyView_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.get_buyButton
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::get_buyButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9aa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            "get_buyButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView.SetContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(&::GlobalNamespace::StandardLevelBuyView::SetContent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22e9ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelBuyView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelBuyView::*)()>(&::GlobalNamespace::StandardLevelBuyView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e9acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::StandardLevelBuyView::__set__levelBar(::GlobalNamespace::LevelBar*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this, std::forward<::GlobalNamespace::LevelBar*>(value));
}
constexpr ::GlobalNamespace::LevelBar* GlobalNamespace::StandardLevelBuyView::__get__levelBar()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelBar*> GlobalNamespace::StandardLevelBuyView::__get__levelBar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelBar*, 0x18>(this);
}
constexpr void GlobalNamespace::StandardLevelBuyView::__set__buyButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x20>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelBuyView::__get__buyButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::StandardLevelBuyView::__get__buyButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x20>(this);
}
inline ::UnityEngine::UI::Button* GlobalNamespace::StandardLevelBuyView::get_buyButton()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            "get_buyButton",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Button*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelBuyView::SetContent(::GlobalNamespace::IPreviewBeatmapLevel*  previewBeatmapLevel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            "SetContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, previewBeatmapLevel);
}
inline ::GlobalNamespace::StandardLevelBuyView* GlobalNamespace::StandardLevelBuyView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardLevelBuyView*>());
}
inline void GlobalNamespace::StandardLevelBuyView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelBuyView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
