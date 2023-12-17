#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSizeData_def.hpp"
constexpr void GlobalNamespace::__EnvironmentSizeData__FloorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EnvironmentSizeData__FloorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EnvironmentSizeData__FloorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType::__EnvironmentSizeData__FloorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType  GlobalNamespace::__EnvironmentSizeData__FloorType::NoFloor{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType  GlobalNamespace::__EnvironmentSizeData__FloorType::CloseTo0{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__EnvironmentSizeData__CeilingType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EnvironmentSizeData__CeilingType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EnvironmentSizeData__CeilingType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType::__EnvironmentSizeData__CeilingType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType  GlobalNamespace::__EnvironmentSizeData__CeilingType::NoCeiling{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType  GlobalNamespace::__EnvironmentSizeData__CeilingType::LowCeiling{static_cast<int32_t>(0x1)};
constexpr void GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType::__EnvironmentSizeData__TrackLaneType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType  GlobalNamespace::__EnvironmentSizeData__TrackLaneType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType  GlobalNamespace::__EnvironmentSizeData__TrackLaneType::Normal{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_floorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__FloorType (::GlobalNamespace::EnvironmentSizeData::*)()>(&::GlobalNamespace::EnvironmentSizeData::get_floorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_floorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_ceilingType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__CeilingType (::GlobalNamespace::EnvironmentSizeData::*)()>(&::GlobalNamespace::EnvironmentSizeData::get_ceilingType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_ceilingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData.get_trackLaneType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType (::GlobalNamespace::EnvironmentSizeData::*)()>(&::GlobalNamespace::EnvironmentSizeData::get_trackLaneType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_trackLaneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentSizeData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentSizeData::*)()>(&::GlobalNamespace::EnvironmentSizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2240920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnvironmentSizeData::__set__floorType(::GlobalNamespace::__EnvironmentSizeData__FloorType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EnvironmentSizeData__FloorType, 0x10>(this, std::forward<::GlobalNamespace::__EnvironmentSizeData__FloorType>(value));
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType& GlobalNamespace::EnvironmentSizeData::__get__floorType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__FloorType, 0x10>(this);
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__FloorType const& GlobalNamespace::EnvironmentSizeData::__get__floorType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__FloorType, 0x10>(this);
}
constexpr void GlobalNamespace::EnvironmentSizeData::__set__ceilingType(::GlobalNamespace::__EnvironmentSizeData__CeilingType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EnvironmentSizeData__CeilingType, 0x14>(this, std::forward<::GlobalNamespace::__EnvironmentSizeData__CeilingType>(value));
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType& GlobalNamespace::EnvironmentSizeData::__get__ceilingType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__CeilingType, 0x14>(this);
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__CeilingType const& GlobalNamespace::EnvironmentSizeData::__get__ceilingType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__CeilingType, 0x14>(this);
}
constexpr void GlobalNamespace::EnvironmentSizeData::__set__trackLaneType(::GlobalNamespace::__EnvironmentSizeData__TrackLaneType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, 0x18>(this, std::forward<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType>(value));
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType& GlobalNamespace::EnvironmentSizeData::__get__trackLaneType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, 0x18>(this);
}
constexpr ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType const& GlobalNamespace::EnvironmentSizeData::__get__trackLaneType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, 0x18>(this);
}
inline ::GlobalNamespace::__EnvironmentSizeData__FloorType GlobalNamespace::EnvironmentSizeData::get_floorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_floorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__FloorType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__EnvironmentSizeData__CeilingType GlobalNamespace::EnvironmentSizeData::get_ceilingType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_ceilingType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__CeilingType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__EnvironmentSizeData__TrackLaneType GlobalNamespace::EnvironmentSizeData::get_trackLaneType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            "get_trackLaneType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EnvironmentSizeData__TrackLaneType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentSizeData* GlobalNamespace::EnvironmentSizeData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EnvironmentSizeData*>());
}
inline void GlobalNamespace::EnvironmentSizeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentSizeData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
