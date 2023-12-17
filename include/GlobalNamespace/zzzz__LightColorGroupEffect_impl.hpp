#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightColorGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightColorGroupEffect__InitData::*)(int32_t, int32_t, int32_t)>(&::GlobalNamespace::__LightColorGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a8d44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LightColorGroupEffect__InitData::__set_groupId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightColorGroupEffect__InitData::__get_groupId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__LightColorGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__LightColorGroupEffect__InitData::__set_elementId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightColorGroupEffect__InitData::__get_elementId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__LightColorGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__LightColorGroupEffect__InitData::__set_lightId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightColorGroupEffect__InitData::__get_lightId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__LightColorGroupEffect__InitData::__get_lightId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline ::GlobalNamespace::__LightColorGroupEffect__InitData* GlobalNamespace::__LightColorGroupEffect__InitData::New_ctor(int32_t  groupId, int32_t  elementId, int32_t  lightId)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightColorGroupEffect__InitData*>(groupId, elementId, lightId));
}
inline void GlobalNamespace::__LightColorGroupEffect__InitData::_ctor(int32_t  groupId, int32_t  elementId, int32_t  lightId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, groupId, elementId, lightId);
}
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::__LightColorGroupEffect__InitData*, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*, ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::IBpmController*)>(&::GlobalNamespace::LightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x23a8070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightWithIdManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBpmController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)()>(&::GlobalNamespace::LightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23a83cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.HandleColorChangeBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&::GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x23a8468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.UseBoostColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(bool)>(&::GlobalNamespace::LightColorGroupEffect::UseBoostColors)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x23a8a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "UseBoostColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.GetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::LightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(&::GlobalNamespace::LightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23a8b8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.SetData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, float_t, float_t, float_t, float_t, bool)>(&::GlobalNamespace::LightColorGroupEffect::SetData)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x23a8bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightColorGroupEffect.SetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightColorGroupEffect::*)(float_t)>(&::GlobalNamespace::LightColorGroupEffect::SetColor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23a88e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightColorGroupEffect::__set__colorManager(::GlobalNamespace::ColorManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this, std::forward<::GlobalNamespace::ColorManager*>(value));
}
constexpr ::GlobalNamespace::ColorManager* GlobalNamespace::LightColorGroupEffect::__get__colorManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> GlobalNamespace::LightColorGroupEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__lightId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::LightColorGroupEffect::__get__lightId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::LightColorGroupEffect::__get__lightId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__lightManager(::GlobalNamespace::LightWithIdManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightWithIdManager*, 0x20>(this, std::forward<::GlobalNamespace::LightWithIdManager*>(value));
}
constexpr ::GlobalNamespace::LightWithIdManager* GlobalNamespace::LightColorGroupEffect::__get__lightManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightWithIdManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> GlobalNamespace::LightColorGroupEffect::__get__lightManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightWithIdManager*, 0x20>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this, std::forward<::Tweening::SongTimeTweeningManager*>(value));
}
constexpr ::Tweening::SongTimeTweeningManager* GlobalNamespace::LightColorGroupEffect::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> GlobalNamespace::LightColorGroupEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x28>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::LightColorGroupEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::LightColorGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x30>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__bpmController(::GlobalNamespace::IBpmController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IBpmController*, 0x38>(this, std::forward<::GlobalNamespace::IBpmController*>(value));
}
constexpr ::GlobalNamespace::IBpmController* GlobalNamespace::LightColorGroupEffect::__get__bpmController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBpmController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBpmController*> GlobalNamespace::LightColorGroupEffect::__get__bpmController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IBpmController*, 0x38>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__floatTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x40>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::LightColorGroupEffect::__get__floatTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::LightColorGroupEffect::__get__floatTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x40>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__lightColorBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightColorGroupEffect::__get__lightColorBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightColorGroupEffect::__get__lightColorBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__fromColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x50>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__get__fromColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__get__fromColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x50>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__toColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x60>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__get__toColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__get__toColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x60>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__alternativeFromColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x70>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__get__alternativeFromColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x70>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__get__alternativeFromColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x70>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__alternativeToColor(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x80>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LightColorGroupEffect::__get__alternativeToColor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x80>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LightColorGroupEffect::__get__alternativeToColor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x80>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__fromStrobeFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__get__fromStrobeFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__get__fromStrobeFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__toStrobeFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__get__toStrobeFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__get__toStrobeFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__fromStrobeBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x98>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__get__fromStrobeBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__get__fromStrobeBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x98>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__toStrobeBrightness(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x9c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::LightColorGroupEffect::__get__toStrobeBrightness()  {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr float_t const& GlobalNamespace::LightColorGroupEffect::__get__toStrobeBrightness() const {
return ::cordl_internals::getInstanceField<float_t, 0x9c>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__strobeFade(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa0>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightColorGroupEffect::__get__strobeFade()  {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr bool const& GlobalNamespace::LightColorGroupEffect::__get__strobeFade() const {
return ::cordl_internals::getInstanceField<bool, 0xa0>(this);
}
constexpr void GlobalNamespace::LightColorGroupEffect::__set__usingBoostColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xa1>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::LightColorGroupEffect::__get__usingBoostColors()  {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
constexpr bool const& GlobalNamespace::LightColorGroupEffect::__get__usingBoostColors() const {
return ::cordl_internals::getInstanceField<bool, 0xa1>(this);
}
inline ::GlobalNamespace::LightColorGroupEffect* GlobalNamespace::LightColorGroupEffect::New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightColorGroupEffect*>(initData, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController));
}
inline void GlobalNamespace::LightColorGroupEffect::_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData*  initData, ::GlobalNamespace::LightWithIdManager*  lightManager, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController, ::GlobalNamespace::IBpmController*  bpmController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightWithIdManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBpmController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController);
}
inline void GlobalNamespace::LightColorGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::LightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData*  currentEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentEventData);
}
inline void GlobalNamespace::LightColorGroupEffect::UseBoostColors(bool  useBoostColors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "UseBoostColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, useBoostColors);
}
inline ::UnityEngine::Color GlobalNamespace::LightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType  colorType, bool  colorBoost, float_t  brightness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "GetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method, colorType, colorBoost, brightness);
}
inline void GlobalNamespace::LightColorGroupEffect::SetData(::UnityEngine::Color  fromColor, ::UnityEngine::Color  toColor, ::UnityEngine::Color  alternativeFromColor, ::UnityEngine::Color  alternativeToColor, float_t  fromStrobeBeatFrequency, float_t  toStrobeBeatFrequency, float_t  fromStrobeBrightness, float_t  toStrobeBrightness, bool  strobeFade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "SetData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fromColor, toColor, alternativeFromColor, alternativeToColor, fromStrobeBeatFrequency, toStrobeBeatFrequency, fromStrobeBrightness, toStrobeBrightness, strobeFade);
}
inline void GlobalNamespace::LightColorGroupEffect::SetColor(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightColorGroupEffect*>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
