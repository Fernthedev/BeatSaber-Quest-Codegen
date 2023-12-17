#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
#include "TrackDefinitions/zzzz__EventTrackDefinitionSO_def.hpp"
constexpr void TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::__EventTrackDefinitionSO__DataTransformationType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::NoTransformation{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Light{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::DeltaRotation{static_cast<int32_t>(0x2)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::Switch{static_cast<int32_t>(0x3)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::TurnOffValueDuration{static_cast<int32_t>(0x4)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType::ValueDuration{static_cast<int32_t>(0x5)};
constexpr void TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType::__EventTrackDefinitionSO__MarkerType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  TrackDefinitions::__EventTrackDefinitionSO__MarkerType::BasicMarker{static_cast<int32_t>(0x0)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  TrackDefinitions::__EventTrackDefinitionSO__MarkerType::DurationMarker{static_cast<int32_t>(0x1)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  TrackDefinitions::__EventTrackDefinitionSO__MarkerType::LightMarker{static_cast<int32_t>(0x2)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TextMarker{static_cast<int32_t>(0x3)};
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  TrackDefinitions::__EventTrackDefinitionSO__MarkerType::TooltipMarker{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_visible
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_visible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_visible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_dataTransformation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_dataTransformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_markerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_markerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b040;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_markerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO.get_needsFiltering
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_needsFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EventTrackDefinitionSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::EventTrackDefinitionSO::*)()>(&::TrackDefinitions::EventTrackDefinitionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__dataTransformationType(::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x18>(this, std::forward<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType>(value));
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType& TrackDefinitions::EventTrackDefinitionSO::__get__dataTransformationType()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x18>(this);
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType const& TrackDefinitions::EventTrackDefinitionSO::__get__dataTransformationType() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, 0x18>(this);
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__markerType(::TrackDefinitions::__EventTrackDefinitionSO__MarkerType  value)  {
::cordl_internals::setInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x1c>(this, std::forward<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType>(value));
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType& TrackDefinitions::EventTrackDefinitionSO::__get__markerType()  {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x1c>(this);
}
constexpr ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType const& TrackDefinitions::EventTrackDefinitionSO::__get__markerType() const {
return ::cordl_internals::getInstanceField<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, 0x1c>(this);
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__visible(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::EventTrackDefinitionSO::__get__visible()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& TrackDefinitions::EventTrackDefinitionSO::__get__visible() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void TrackDefinitions::EventTrackDefinitionSO::__set__needsFiltering(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& TrackDefinitions::EventTrackDefinitionSO::__get__needsFiltering()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& TrackDefinitions::EventTrackDefinitionSO::__get__needsFiltering() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
inline bool TrackDefinitions::EventTrackDefinitionSO::get_visible()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_visible",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType TrackDefinitions::EventTrackDefinitionSO::get_dataTransformation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_dataTransformation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EventTrackDefinitionSO__DataTransformationType, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::__EventTrackDefinitionSO__MarkerType TrackDefinitions::EventTrackDefinitionSO::get_markerType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_markerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::TrackDefinitions::__EventTrackDefinitionSO__MarkerType, false>(*this, ___internal_method);
}
inline bool TrackDefinitions::EventTrackDefinitionSO::get_needsFiltering()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            "get_needsFiltering",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::TrackDefinitions::EventTrackDefinitionSO* TrackDefinitions::EventTrackDefinitionSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::EventTrackDefinitionSO*>());
}
inline void TrackDefinitions::EventTrackDefinitionSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EventTrackDefinitionSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
