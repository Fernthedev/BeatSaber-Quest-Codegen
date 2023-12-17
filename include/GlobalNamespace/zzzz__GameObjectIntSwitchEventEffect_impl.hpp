#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GameObjectIntSwitchEventEffect_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.get_isActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)()>(&::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::get_isActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a545c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "get_isActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.set_isActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)(bool)>(&::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::set_isActive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x23a5464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "set_isActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList.SetActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)(bool)>(&::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::SetActive)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x23a5268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "SetActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::*)()>(&::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__set_gameObjects(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get_gameObjects()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get_gameObjects() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__set__isActive_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get__isActive_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::__get__isActive_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
inline bool GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::get_isActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "get_isActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::set_isActive(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "set_isActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::SetActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            "SetActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, active);
}
inline ::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList* GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>());
}
inline void GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x23a50b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23a52e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect.HandleBasicBeatmapEventData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)(::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x23a5310;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "HandleBasicBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameObjectIntSwitchEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameObjectIntSwitchEventEffect::*)()>(&::GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapEventType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__defaultValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__defaultValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__defaultValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__gameObjectsValueLists(::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__gameObjectsValueLists()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> const& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__gameObjectsValueLists() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*,::Array<::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x28>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__beatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapDataCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::GameObjectIntSwitchEventEffect::__get__beatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x30>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__valueToListMap(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*, 0x38>(this, std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>* GlobalNamespace::GameObjectIntSwitchEventEffect::__get__valueToListMap()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*> GlobalNamespace::GameObjectIntSwitchEventEffect::__get__valueToListMap() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::__GameObjectIntSwitchEventEffect__GameObjectValueList*>*, 0x38>(this);
}
constexpr void GlobalNamespace::GameObjectIntSwitchEventEffect::__set__previousActiveIdx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__previousActiveIdx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& GlobalNamespace::GameObjectIntSwitchEventEffect::__get__previousActiveIdx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::HandleBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            "HandleBasicBeatmapEventData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline ::GlobalNamespace::GameObjectIntSwitchEventEffect* GlobalNamespace::GameObjectIntSwitchEventEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameObjectIntSwitchEventEffect*>());
}
inline void GlobalNamespace::GameObjectIntSwitchEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameObjectIntSwitchEventEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
