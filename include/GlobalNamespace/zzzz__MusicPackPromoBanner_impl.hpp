#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MusicPackPromoBanner_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__DlcPromoPanelDataSO_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_currentPromoBeatmapLevel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPreviewBeatmapLevel* (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::get_currentPromoBeatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_currentPromoBeatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_currentPromoMusicPack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IBeatmapLevelPack* (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::get_currentPromoMusicPack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_currentPromoMusicPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.get_promoButtonText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::get_promoButtonText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e77b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_promoButtonText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner.Setup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*, bool)>(&::GlobalNamespace::MusicPackPromoBanner::Setup)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22e77c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MusicPackPromoBanner._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MusicPackPromoBanner::*)()>(&::GlobalNamespace::MusicPackPromoBanner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22e78d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoBannerGo(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::MusicPackPromoBanner::__get__promoBannerGo()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::MusicPackPromoBanner::__get__promoBannerGo() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoBannerTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x20>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* GlobalNamespace::MusicPackPromoBanner::__get__promoBannerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> GlobalNamespace::MusicPackPromoBanner::__get__promoBannerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__promoText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::MusicPackPromoBanner::__get__promoText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::MusicPackPromoBanner::__get__promoText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__backgroundImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x30>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::MusicPackPromoBanner::__get__backgroundImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::MusicPackPromoBanner::__get__backgroundImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x30>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__currentPromoMusicPack(::GlobalNamespace::IBeatmapLevelPack*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x38>(this, std::forward<::GlobalNamespace::IBeatmapLevelPack*>(value));
}
constexpr ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::MusicPackPromoBanner::__get__currentPromoMusicPack()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> GlobalNamespace::MusicPackPromoBanner::__get__currentPromoMusicPack() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBeatmapLevelPack*, 0x38>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__currentPromoBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x40>(this, std::forward<::GlobalNamespace::IPreviewBeatmapLevel*>(value));
}
constexpr ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::MusicPackPromoBanner::__get__currentPromoBeatmapLevel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> GlobalNamespace::MusicPackPromoBanner::__get__currentPromoBeatmapLevel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IPreviewBeatmapLevel*, 0x40>(this);
}
constexpr void GlobalNamespace::MusicPackPromoBanner::__set__text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MusicPackPromoBanner::__get__text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& GlobalNamespace::MusicPackPromoBanner::__get__text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
inline ::GlobalNamespace::IPreviewBeatmapLevel* GlobalNamespace::MusicPackPromoBanner::get_currentPromoBeatmapLevel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_currentPromoBeatmapLevel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPreviewBeatmapLevel*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::MusicPackPromoBanner::get_currentPromoMusicPack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_currentPromoMusicPack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelPack*, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::MusicPackPromoBanner::get_promoButtonText()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "get_promoButtonText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MusicPackPromoBanner::Setup(::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*  musicPackPromoData, bool  probablyOwned)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            "Setup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DlcPromoPanelDataSO__MusicPackPromoInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, musicPackPromoData, probablyOwned);
}
inline ::GlobalNamespace::MusicPackPromoBanner* GlobalNamespace::MusicPackPromoBanner::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MusicPackPromoBanner*>());
}
inline void GlobalNamespace::MusicPackPromoBanner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MusicPackPromoBanner*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
