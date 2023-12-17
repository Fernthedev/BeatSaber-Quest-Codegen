#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SongProgressUIController_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "GlobalNamespace/zzzz__IAudioTimeSource_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x23c32f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x23c349c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SongProgressUIController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SongProgressUIController::*)()>(&::GlobalNamespace::SongProgressUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c375c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SongProgressUIController::__set__slider(::UnityEngine::UI::Slider*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Slider*, 0x18>(this, std::forward<::UnityEngine::UI::Slider*>(value));
}
constexpr ::UnityEngine::UI::Slider* GlobalNamespace::SongProgressUIController::__get__slider()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Slider*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Slider*> GlobalNamespace::SongProgressUIController::__get__slider() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Slider*, 0x18>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressImage(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x20>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::SongProgressUIController::__get__progressImage()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::SongProgressUIController::__get__progressImage() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x20>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__durationMinutesText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::SongProgressUIController::__get__durationMinutesText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::SongProgressUIController::__get__durationMinutesText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__durationSecondsText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x30>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::SongProgressUIController::__get__durationSecondsText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::SongProgressUIController::__get__durationSecondsText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x30>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressMinutesText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x38>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::SongProgressUIController::__get__progressMinutesText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::SongProgressUIController::__get__progressMinutesText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x38>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressSecondsText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::SongProgressUIController::__get__progressSecondsText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::SongProgressUIController::__get__progressSecondsText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x40>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__audioTimeSource(::GlobalNamespace::IAudioTimeSource*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x48>(this, std::forward<::GlobalNamespace::IAudioTimeSource*>(value));
}
constexpr ::GlobalNamespace::IAudioTimeSource* GlobalNamespace::SongProgressUIController::__get__audioTimeSource()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> GlobalNamespace::SongProgressUIController::__get__audioTimeSource() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IAudioTimeSource*, 0x48>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__prevMinutes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__get__prevMinutes()  {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__get__prevMinutes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__prevSeconds(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::SongProgressUIController::__get__prevSeconds()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& GlobalNamespace::SongProgressUIController::__get__prevSeconds() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x58>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* GlobalNamespace::SongProgressUIController::__get__stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> GlobalNamespace::SongProgressUIController::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x58>(this);
}
constexpr void GlobalNamespace::SongProgressUIController::__set__progressImageRectTransform(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x60>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* GlobalNamespace::SongProgressUIController::__get__progressImageRectTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> GlobalNamespace::SongProgressUIController::__get__progressImageRectTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x60>(this);
}
inline void GlobalNamespace::SongProgressUIController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SongProgressUIController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SongProgressUIController* GlobalNamespace::SongProgressUIController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SongProgressUIController*>());
}
inline void GlobalNamespace::SongProgressUIController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SongProgressUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
