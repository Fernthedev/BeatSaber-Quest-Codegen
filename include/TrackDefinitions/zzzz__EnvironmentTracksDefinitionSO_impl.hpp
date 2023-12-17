#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::__EnvironmentTracksDefinitionSO__BasicEventTrackPage(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage  TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page1{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage  TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Page2{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage  TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage::Count{static_cast<int32_t>(0x2)};
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::NoOverride{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::X{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Y{static_cast<int32_t>(0x2)};
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis::Z{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicBeatmapEventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BasicBeatmapEventType (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ada4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_basicBeatmapEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackToolbarType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::DataModels::TrackToolbarType (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackToolbarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_trackDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::EventTrackDefinitionSO* (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo.get_basicEventTrackPage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0adbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_basicEventTrackPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a0adc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__beatmapEventType(::GlobalNamespace::BasicBeatmapEventType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this, std::forward<::GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr ::GlobalNamespace::BasicBeatmapEventType& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__beatmapEventType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr ::GlobalNamespace::BasicBeatmapEventType const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__beatmapEventType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BasicBeatmapEventType, 0x18>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackToolbarType(::TrackDefinitions::DataModels::TrackToolbarType  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::DataModels::TrackToolbarType, 0x1c>(this, std::forward<::TrackDefinitions::DataModels::TrackToolbarType>(value));
}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackToolbarType()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::DataModels::TrackToolbarType, 0x1c>(this);
}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackToolbarType() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::DataModels::TrackToolbarType, 0x1c>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__trackDefinition(::TrackDefinitions::EventTrackDefinitionSO*  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::EventTrackDefinitionSO*, 0x20>(this, std::forward<::TrackDefinitions::EventTrackDefinitionSO*>(value));
}
constexpr ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackDefinition()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::EventTrackDefinitionSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::EventTrackDefinitionSO*> TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__trackDefinition() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::EventTrackDefinitionSO*, 0x20>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__set__basicEventTrackPage(::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, 0x28>(this, std::forward<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage>(value));
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__basicEventTrackPage()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, 0x28>(this);
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage const& TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::__get__basicEventTrackPage() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, 0x28>(this);
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BasicBeatmapEventType TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicBeatmapEventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_basicBeatmapEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BasicBeatmapEventType, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackToolbarType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackToolbarType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::DataModels::TrackToolbarType, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_trackDefinition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_trackDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::EventTrackDefinitionSO*, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::get_basicEventTrackPage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            "get_basicEventTrackPage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackPage, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupPageName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ae1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            "get_eventBoxGroupPageName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo.get_eventBoxGroupTrackInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ae24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            "get_eventBoxGroupTrackInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a0ae2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__set__eventBoxGroupPageName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupPageName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupPageName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__set__eventBoxGroupTrackInfos(::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupTrackInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*> TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::__get__eventBoxGroupTrackInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, 0x18>(this);
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupPageName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            "get_eventBoxGroupPageName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::get_eventBoxGroupTrackInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            "get_eventBoxGroupTrackInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>*, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_groupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_groupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_groupName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(::StringW)>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "set_groupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.set_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)(::GlobalNamespace::LightGroupSO*)>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "set_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showColorTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0aef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showColorTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a0aef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a0af20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationXTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationXTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationYTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationYTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showRotationZTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationZTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultRotationAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_overrideDefaultRotationAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationXTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationXTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationYTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationYTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showTranslationZTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationZTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_overrideDefaultTranslationAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_overrideDefaultTranslationAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_showFloatFxTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showFloatFxTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_enableDuplicate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0af90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_enableDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo.get_targetLightGroups
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a0af98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_targetLightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::*)()>(&::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a0b01c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__groupName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__groupName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__groupName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__lightGroup(::GlobalNamespace::LightGroupSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroupSO*, 0x18>(this, std::forward<::GlobalNamespace::LightGroupSO*>(value));
}
constexpr ::GlobalNamespace::LightGroupSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__lightGroup()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroupSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroupSO*, 0x18>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showColorTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showColorTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showColorTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationXTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationXTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationXTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationYTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x22>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationYTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationYTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x22>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showRotationZTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x23>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationZTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showRotationZTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x23>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__overrideDefaultRotationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x24>(this, std::forward<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis>(value));
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultRotationAxis()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x24>(this);
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultRotationAxis() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x24>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationXTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationXTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationXTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationYTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationYTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationYTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showTranslationZTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2a>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationZTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showTranslationZTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x2a>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__overrideDefaultTranslationAxis(::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x2c>(this, std::forward<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis>(value));
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultTranslationAxis()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x2c>(this);
}
constexpr ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__overrideDefaultTranslationAxis() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, 0x2c>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__showFloatFxTrack(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showFloatFxTrack()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__showFloatFxTrack() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__enableDuplicate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x31>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__enableDuplicate()  {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr bool const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__enableDuplicate() const {
return ::cordl_internals::getInstanceField<bool, 0x31>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__duplicationGroup(::TrackDefinitions::LightGroupDuplicationGroup*  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::LightGroupDuplicationGroup*, 0x38>(this, std::forward<::TrackDefinitions::LightGroupDuplicationGroup*>(value));
}
constexpr ::TrackDefinitions::LightGroupDuplicationGroup* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__duplicationGroup()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::LightGroupDuplicationGroup*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TrackDefinitions::LightGroupDuplicationGroup*> TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__duplicationGroup() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::LightGroupDuplicationGroup*, 0x38>(this);
}
constexpr void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__set__targetLightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x40>(this, std::forward<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__targetLightGroups()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x40>(this);
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> const& TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::__get__targetLightGroups() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, 0x40>(this);
}
inline ::StringW TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_groupName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_groupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_groupName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "set_groupName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::LightGroupSO* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_lightGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO*, false>(*this, ___internal_method);
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::set_lightGroup(::GlobalNamespace::LightGroupSO*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "set_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showColorTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showColorTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationXTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationXTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationYTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationYTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showRotationZTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showRotationZTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultRotationAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_overrideDefaultRotationAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationXTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationXTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationYTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationYTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showTranslationZTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showTranslationZTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_overrideDefaultTranslationAxis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_overrideDefaultTranslationAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EnvironmentTracksDefinitionSO__OverrideDefaultLightAxis, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_showFloatFxTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_showFloatFxTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_enableDuplicate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_enableDuplicate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*> TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::get_targetLightGroups()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            "get_targetLightGroups",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*,::Array<::GlobalNamespace::LightGroupSO*>*>, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo* TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>());
}
inline void TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupTrackInfo*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_environmentInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_basicEventTrackInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_basicEventTrackInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO.get_eventBoxGroupPageInfos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_eventBoxGroupPageInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentTracksDefinitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::EnvironmentTracksDefinitionSO::*)()>(&::TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__environmentInfo(::GlobalNamespace::EnvironmentInfoSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x18>(this, std::forward<::GlobalNamespace::EnvironmentInfoSO*>(value));
}
constexpr ::GlobalNamespace::EnvironmentInfoSO* TrackDefinitions::EnvironmentTracksDefinitionSO::__get__environmentInfo()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentInfoSO*> TrackDefinitions::EnvironmentTracksDefinitionSO::__get__environmentInfo() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentInfoSO*, 0x18>(this);
}
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__basicEventTrackInfos(::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, 0x20>(this, std::forward<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>>(value));
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>& TrackDefinitions::EnvironmentTracksDefinitionSO::__get__basicEventTrackInfos()  {
return ::cordl_internals::getInstanceField<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, 0x20>(this);
}
constexpr ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> const& TrackDefinitions::EnvironmentTracksDefinitionSO::__get__basicEventTrackInfos() const {
return ::cordl_internals::getInstanceField<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, 0x20>(this);
}
constexpr void TrackDefinitions::EnvironmentTracksDefinitionSO::__set__eventBoxGroupPageInfos(::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* TrackDefinitions::EnvironmentTracksDefinitionSO::__get__eventBoxGroupPageInfos()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*> TrackDefinitions::EnvironmentTracksDefinitionSO::__get__eventBoxGroupPageInfos() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, 0x28>(this);
}
inline ::GlobalNamespace::EnvironmentInfoSO* TrackDefinitions::EnvironmentTracksDefinitionSO::get_environmentInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_environmentInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentInfoSO*, false>(*this, ___internal_method);
}
inline ::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*> TrackDefinitions::EnvironmentTracksDefinitionSO::get_basicEventTrackInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_basicEventTrackInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*,::Array<::TrackDefinitions::__EnvironmentTracksDefinitionSO__BasicEventTrackInfo*>*>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>* TrackDefinitions::EnvironmentTracksDefinitionSO::get_eventBoxGroupPageInfos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            "get_eventBoxGroupPageInfos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::TrackDefinitions::__EnvironmentTracksDefinitionSO__EventBoxGroupPageInfo*>*, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::EnvironmentTracksDefinitionSO* TrackDefinitions::EnvironmentTracksDefinitionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::EnvironmentTracksDefinitionSO*>());
}
inline void TrackDefinitions::EnvironmentTracksDefinitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentTracksDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
