#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BufferedLightColorGroupEffect__InitData::*)(::GlobalNamespace::LightGroup*, ::GlobalNamespace::MaterialPropertyBlockController*)>(&::GlobalNamespace::__BufferedLightColorGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a7e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__set_lightGroup(::GlobalNamespace::LightGroup*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroup*, 0x10>(this, std::forward<::GlobalNamespace::LightGroup*>(value));
}
constexpr ::GlobalNamespace::LightGroup* GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__get_lightGroup()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroup*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroup*> GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__get_lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroup*, 0x10>(this);
}
constexpr void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockController*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__get_materialPropertyBlockController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> GlobalNamespace::__BufferedLightColorGroupEffect__InitData::__get_materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
inline ::GlobalNamespace::__BufferedLightColorGroupEffect__InitData* GlobalNamespace::__BufferedLightColorGroupEffect__InitData::New_ctor(::GlobalNamespace::LightGroup*  lightGroup, ::GlobalNamespace::MaterialPropertyBlockController*  materialPropertyBlockController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>(lightGroup, materialPropertyBlockController));
}
inline void GlobalNamespace::__BufferedLightColorGroupEffect__InitData::_ctor(::GlobalNamespace::LightGroup*  lightGroup, ::GlobalNamespace::MaterialPropertyBlockController*  materialPropertyBlockController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightGroup, materialPropertyBlockController);
}
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*, ::GlobalNamespace::ColorManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::BufferedLightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x23a76c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a7a08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorBoostBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData*)>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23a7b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorChangeBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23a7b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x23a7c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.GetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(&::GlobalNamespace::BufferedLightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23a7d24;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__colorManager(::GlobalNamespace::ColorManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this, std::forward<::GlobalNamespace::ColorManager*>(value));
}
constexpr ::GlobalNamespace::ColorManager* GlobalNamespace::BufferedLightColorGroupEffect::__get__colorManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> GlobalNamespace::BufferedLightColorGroupEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager*, 0x10>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this, std::forward<::GlobalNamespace::MaterialPropertyBlockController*>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController* GlobalNamespace::BufferedLightColorGroupEffect::__get__materialPropertyBlockController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> GlobalNamespace::BufferedLightColorGroupEffect::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController*, 0x18>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::BufferedLightColorGroupEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::BufferedLightColorGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x20>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::BufferedLightColorGroupEffect::__get__colorBoostBeatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::BufferedLightColorGroupEffect::__get__colorBoostBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x28>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__lightColorBeatmapEventCallbackWrappers(::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>, 0x30>(this, std::forward<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>& GlobalNamespace::BufferedLightColorGroupEffect::__get__lightColorBeatmapEventCallbackWrappers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>, 0x30>(this);
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__get__lightColorBeatmapEventCallbackWrappers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper*,::Array<::GlobalNamespace::BeatmapDataCallbackWrapper*>*>, 0x30>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__lastIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BufferedLightColorGroupEffect::__get__lastIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& GlobalNamespace::BufferedLightColorGroupEffect::__get__lastIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__timesBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::BufferedLightColorGroupEffect::__get__timesBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__get__timesBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x40>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__colorsBuffer(::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>& GlobalNamespace::BufferedLightColorGroupEffect::__get__colorsBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__get__colorsBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4,::Array<::UnityEngine::Vector4>*>, 0x48>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__elementIdsBuffer(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& GlobalNamespace::BufferedLightColorGroupEffect::__get__elementIdsBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& GlobalNamespace::BufferedLightColorGroupEffect::__get__elementIdsBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__useBoostColors(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__get__useBoostColors()  {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__get__useBoostColors() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this);
}
constexpr void GlobalNamespace::BufferedLightColorGroupEffect::__set__didReceiveEventThisFrame(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::BufferedLightColorGroupEffect::__get__didReceiveEventThisFrame()  {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
constexpr bool const& GlobalNamespace::BufferedLightColorGroupEffect::__get__didReceiveEventThisFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__timesBufferPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__timesBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__colorBufferPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__colorBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::setStaticF__elementIdBufferPropertyId(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BufferedLightColorGroupEffect::getStaticF__elementIdBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get>();
}
inline ::GlobalNamespace::BufferedLightColorGroupEffect* GlobalNamespace::BufferedLightColorGroupEffect::New_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*  initData, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BufferedLightColorGroupEffect*>(initData, colorManager, beatmapCallbacksController));
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::_ctor(::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*  initData, ::GlobalNamespace::ColorManager*  colorManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BufferedLightColorGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, colorManager, beatmapCallbacksController);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData*  colorBoost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorBoost);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData*  currentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentEvent);
}
inline void GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BufferedLightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType  colorType, bool  colorBoost, float_t  brightness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect*>::get(),
                            "GetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(*this, ___internal_method, colorType, colorBoost, brightness);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
