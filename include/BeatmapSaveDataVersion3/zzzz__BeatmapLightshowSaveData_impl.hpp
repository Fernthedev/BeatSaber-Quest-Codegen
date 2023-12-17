#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapLightshowSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData.get_isEmpty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::*)()>(&::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::get_isEmpty)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xe05298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::*)()>(&::BeatmapSaveDataVersion3::BeatmapLightshowSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe05380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_basicBeatmapEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_basicBeatmapEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_colorBoostBeatmapEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_colorBoostBeatmapEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightColorEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightColorEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightRotationEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightRotationEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightTranslationEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_lightTranslationEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_vfxEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get_vfxEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x38>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x40>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get__fxEventsCollection()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> BeatmapSaveDataVersion3::BeatmapLightshowSaveData::__get__fxEventsCollection() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x40>(this);
}
inline bool BeatmapSaveDataVersion3::BeatmapLightshowSaveData::get_isEmpty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>::get(),
                            "get_isEmpty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::BeatmapLightshowSaveData* BeatmapSaveDataVersion3::BeatmapLightshowSaveData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>());
}
inline void BeatmapSaveDataVersion3::BeatmapLightshowSaveData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapLightshowSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
