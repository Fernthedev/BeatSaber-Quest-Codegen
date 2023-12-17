#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__ColorMixAndWeightingApproach_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIdsGroupEntry_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData.get_lightGroup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightGroupSO* (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData.get_groupIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)()>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::*)(::GlobalNamespace::LightGroupSO*)>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x210f17c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__lightGroup(::GlobalNamespace::LightGroupSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroupSO*, 0x10>(this, std::forward<::GlobalNamespace::LightGroupSO*>(value));
}
constexpr ::GlobalNamespace::LightGroupSO* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__lightGroup()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroupSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightGroupSO*> GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroupSO*, 0x10>(this);
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__set__groupIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::__get__groupIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
inline ::GlobalNamespace::LightGroupSO* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_lightGroup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            "get_lightGroup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightGroupSO*, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::get_groupIntensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            "get_groupIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::New_ctor(::GlobalNamespace::LightGroupSO*  lightGroup)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>(lightGroup));
}
inline void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData::_ctor(::GlobalNamespace::LightGroupSO*  lightGroup)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroupSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightGroup);
}
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_lightId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)()>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f1b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::*)(int32_t, float_t)>(&::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x210f1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__lightId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__lightId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__set__intensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::__get__intensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline int32_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_lightId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            "get_lightId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId* GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::New_ctor(int32_t  lightId, float_t  lightIntensity)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>(lightId, lightIntensity));
}
inline void GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId::_ctor(int32_t  lightId, float_t  lightIntensity)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lightId, lightIntensity);
}
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_groupLightData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_groupLightData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_individualLightData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_individualLightData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_individualLightData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry.get_groupLightsWeighting
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorMixAndWeightingApproach (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightsWeighting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_groupLightsWeighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithIdsGroupEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithIdsGroupEntry::*)()>(&::GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210f164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__directionalLightWithIds(::GlobalNamespace::DirectionalLightWithIds*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DirectionalLightWithIds*, 0x18>(this, std::forward<::GlobalNamespace::DirectionalLightWithIds*>(value));
}
constexpr ::GlobalNamespace::DirectionalLightWithIds* GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__directionalLightWithIds()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLightWithIds*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLightWithIds*> GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__directionalLightWithIds() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLightWithIds*, 0x18>(this);
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*> GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*, 0x20>(this);
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__individualLightData(::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__individualLightData()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*> GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__individualLightData() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*, 0x28>(this);
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__excludedLightIds(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__excludedLightIds()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__excludedLightIds() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x30>(this);
}
constexpr void GlobalNamespace::DirectionalLightWithIdsGroupEntry::__set__groupLightsWeighting(::GlobalNamespace::ColorMixAndWeightingApproach  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x38>(this, std::forward<::GlobalNamespace::ColorMixAndWeightingApproach>(value));
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightsWeighting()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x38>(this);
}
constexpr ::GlobalNamespace::ColorMixAndWeightingApproach const& GlobalNamespace::DirectionalLightWithIdsGroupEntry::__get__groupLightsWeighting() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorMixAndWeightingApproach, 0x38>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>* GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_groupLightData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__GroupLightData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>* GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_individualLightData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_individualLightData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__DirectionalLightWithIdsGroupEntry__LightIntensitiesWithId*>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ColorMixAndWeightingApproach GlobalNamespace::DirectionalLightWithIdsGroupEntry::get_groupLightsWeighting()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            "get_groupLightsWeighting",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorMixAndWeightingApproach, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLightWithIdsGroupEntry* GlobalNamespace::DirectionalLightWithIdsGroupEntry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>());
}
inline void GlobalNamespace::DirectionalLightWithIdsGroupEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithIdsGroupEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
