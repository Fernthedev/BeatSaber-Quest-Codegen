#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect__InitData::*)(int32_t, int32_t, bool, bool, bool, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::__LightTranslationGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x23ab8ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_groupId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_groupId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_elementId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_elementId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xMirrored(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xMirrored()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yMirrored(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yMirrored()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zMirrored(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zMirrored()  {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x30>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xTranslationLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x38>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTranslationLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x38>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xTranslationLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x38>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_xDistributionLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x40>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xDistributionLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x40>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_xDistributionLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x40>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yTranslationLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x48>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTranslationLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yTranslationLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_yDistributionLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x50>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yDistributionLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x50>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_yDistributionLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x50>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zTranslationLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x58>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTranslationLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x58>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zTranslationLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x58>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect__InitData::__set_zDistributionLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x60>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zDistributionLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x60>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect__InitData::__get_zDistributionLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x60>(this);
}
inline ::GlobalNamespace::__LightTranslationGroupEffect__InitData* GlobalNamespace::__LightTranslationGroupEffect__InitData::New_ctor(int32_t  groupId, int32_t  elementId, bool  xMirrored, bool  yMirrored, bool  zMirrored, ::UnityEngine::Transform*  xTransform, ::UnityEngine::Transform*  yTransform, ::UnityEngine::Transform*  zTransform, ::UnityEngine::Vector2  xTranslationLimits, ::UnityEngine::Vector2  xDistributionLimits, ::UnityEngine::Vector2  yTranslationLimits, ::UnityEngine::Vector2  yDistributionLimits, ::UnityEngine::Vector2  zTranslationLimits, ::UnityEngine::Vector2  zDistributionLimits)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>(groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits));
}
inline void GlobalNamespace::__LightTranslationGroupEffect__InitData::_ctor(int32_t  groupId, int32_t  elementId, bool  xMirrored, bool  yMirrored, bool  zMirrored, ::UnityEngine::Transform*  xTransform, ::UnityEngine::Transform*  yTransform, ::UnityEngine::Transform*  zTransform, ::UnityEngine::Vector2  xTranslationLimits, ::UnityEngine::Vector2  xDistributionLimits, ::UnityEngine::Vector2  yTranslationLimits, ::UnityEngine::Vector2  yDistributionLimits, ::UnityEngine::Vector2  zTranslationLimits, ::UnityEngine::Vector2  zDistributionLimits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::*)()>(&::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ab694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0._GetTranslationEventHandler_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::*)(::GlobalNamespace::LightTranslationBeatmapEventData*)>(&::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x23ab9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(),
                            "<GetTranslationEventHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x10>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x10>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x18>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x18>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_distributionLimits(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x20>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_distributionLimits()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_distributionLimits() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x20>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set_mirrored(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_mirrored()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get_mirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__set___4__this(::GlobalNamespace::LightTranslationGroupEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightTranslationGroupEffect*, 0x30>(this, std::forward<::GlobalNamespace::LightTranslationGroupEffect*>(value));
}
constexpr ::GlobalNamespace::LightTranslationGroupEffect* GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightTranslationGroupEffect*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightTranslationGroupEffect*> GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightTranslationGroupEffect*, 0x30>(this);
}
inline ::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0* GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>());
}
inline void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0(::GlobalNamespace::LightTranslationBeatmapEventData*  currentEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightTranslationGroupEffect____c__DisplayClass12_0*>::get(),
                            "<GetTranslationEventHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightTranslationBeatmapEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, currentEventData);
}
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(::GlobalNamespace::__LightTranslationGroupEffect__InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::LightTranslationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x23aaa7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)()>(&::GlobalNamespace::LightTranslationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x23ab62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.GetTranslationEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>* (::GlobalNamespace::LightTranslationGroupEffect::*)(::Tweening::FloatTween*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, bool)>(&::GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23ab53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "GetTranslationEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightTranslationGroupEffect::*)(float_t)>(&::GlobalNamespace::LightTranslationGroupEffect::SetTranslation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x23ab69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "SetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.SetTweenData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Tweening::FloatTween*, float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::LightTranslationGroupEffect::SetTweenData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23ab864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "SetTweenData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightTranslationGroupEffect.ComputeTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, ::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2, bool)>(&::GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23ab8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "ComputeTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__tweeningManager(::Tweening::SongTimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this, std::forward<::Tweening::SongTimeTweeningManager*>(value));
}
constexpr ::Tweening::SongTimeTweeningManager* GlobalNamespace::LightTranslationGroupEffect::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> GlobalNamespace::LightTranslationGroupEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::SongTimeTweeningManager*, 0x10>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this, std::forward<::GlobalNamespace::BeatmapCallbacksController*>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* GlobalNamespace::LightTranslationGroupEffect::__get__beatmapCallbacksController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> GlobalNamespace::LightTranslationGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController*, 0x18>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__transformMask(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>* GlobalNamespace::LightTranslationGroupEffect::__get__transformMask()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*> GlobalNamespace::LightTranslationGroupEffect::__get__transformMask() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Transform*,::UnityEngine::Vector3>>*, 0x20>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__xTranslationTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x28>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::LightTranslationGroupEffect::__get__xTranslationTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::LightTranslationGroupEffect::__get__xTranslationTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x28>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__yTranslationTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x30>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::LightTranslationGroupEffect::__get__yTranslationTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::LightTranslationGroupEffect::__get__yTranslationTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x30>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__zTranslationTween(::Tweening::FloatTween*  value)  {
::cordl_internals::setInstanceField<::Tweening::FloatTween*, 0x38>(this, std::forward<::Tweening::FloatTween*>(value));
}
constexpr ::Tweening::FloatTween* GlobalNamespace::LightTranslationGroupEffect::__get__zTranslationTween()  {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> GlobalNamespace::LightTranslationGroupEffect::__get__zTranslationTween() const {
return ::cordl_internals::getInstanceField<::Tweening::FloatTween*, 0x38>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationXBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationXBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationXBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x40>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationYBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationYBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationYBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x48>(this);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationZBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x50>(this, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper*>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationZBeatmapEventCallbackWrapper()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationZBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper*, 0x50>(this);
}
inline ::GlobalNamespace::LightTranslationGroupEffect* GlobalNamespace::LightTranslationGroupEffect::New_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LightTranslationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
inline void GlobalNamespace::LightTranslationGroupEffect::_ctor(::GlobalNamespace::__LightTranslationGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightTranslationGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightTranslationGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>* GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler(::Tweening::FloatTween*  translationTween, ::UnityEngine::Vector2  translationLimits, ::UnityEngine::Vector2  distributionLimits, bool  mirrored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "GetTranslationEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataCallback_1<::GlobalNamespace::LightTranslationBeatmapEventData*>*, false>(*this, ___internal_method, translationTween, translationLimits, distributionLimits, mirrored);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTranslation(float_t  _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "SetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, _);
}
inline void GlobalNamespace::LightTranslationGroupEffect::SetTweenData(::Tweening::FloatTween*  tween, float_t  from, float_t  to, float_t  startTime, float_t  endTime, ::GlobalNamespace::EaseType  easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "SetTweenData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::FloatTween*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
inline float_t GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation(float_t  translation, ::UnityEngine::Vector2  translationLimits, float_t  distribution, ::UnityEngine::Vector2  distributionLimits, bool  mirrored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightTranslationGroupEffect*>::get(),
                            "ComputeTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, translation, translationLimits, distribution, distributionLimits, mirrored);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
