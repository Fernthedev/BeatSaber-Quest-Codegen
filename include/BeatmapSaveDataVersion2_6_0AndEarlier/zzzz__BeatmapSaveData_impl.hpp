#pragma once
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::__BeatmapSaveData__BeatmapEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event0{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event1{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event2{static_cast<int32_t>(0x2)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event3{static_cast<int32_t>(0x3)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event4{static_cast<int32_t>(0x4)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event5{static_cast<int32_t>(0x5)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event6{static_cast<int32_t>(0x6)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event7{static_cast<int32_t>(0x7)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event8{static_cast<int32_t>(0x8)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event9{static_cast<int32_t>(0x9)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event10{static_cast<int32_t>(0xa)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event11{static_cast<int32_t>(0xb)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event12{static_cast<int32_t>(0xc)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event13{static_cast<int32_t>(0xd)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event14{static_cast<int32_t>(0xe)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event15{static_cast<int32_t>(0xf)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event16{static_cast<int32_t>(0x10)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Event17{static_cast<int32_t>(0x11)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::VoidEvent{static_cast<int32_t>(0xffffffff)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Special0{static_cast<int32_t>(0x28)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Special1{static_cast<int32_t>(0x29)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Special2{static_cast<int32_t>(0x2a)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::Special3{static_cast<int32_t>(0x2b)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType::BpmChange{static_cast<int32_t>(0x64)};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e5c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData.get_floatValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::*)(float_t, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, int32_t, float_t)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe08d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__set__time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__type()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__type() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__set__value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__set__floatValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__floatValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::__get__floatValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::New_ctor(float_t  time, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  type, int32_t  value, float_t  floatValue)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>(time, type, value, floatValue));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData::_ctor(float_t  time, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  type, int32_t  value, float_t  floatValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, type, value, floatValue);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::__BeatmapSaveData__BeatmapObjectType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::Note{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::Obstacle{static_cast<int32_t>(0x2)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapObjectType::Slider{static_cast<int32_t>(0x3)};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::__BeatmapSaveData__NoteType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::NoteA{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::NoteB{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::GhostNote{static_cast<int32_t>(0x2)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::Bomb{static_cast<int32_t>(0x3)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType::None{static_cast<int32_t>(0xffffffff)};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::__BeatmapSaveData__ColorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::ColorA{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::ColorB{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType::None{static_cast<int32_t>(0xffffffff)};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::__BeatmapSaveData__SliderType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::Normal{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType::Burst{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData.get_lineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData.get_cutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, ::GlobalNamespace::NoteCutDirection)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe08eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__set__time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__set__lineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__lineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__set__lineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__lineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__lineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, 0x1c>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__type()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, 0x1c>(this);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__type() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__set__cutDirection(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__cutDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::__get__cutDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_lineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::get_cutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::New_ctor(float_t  time, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  type, ::GlobalNamespace::NoteCutDirection  cutDirection)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>(time, lineIndex, lineLayer, type, cutDirection));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData::_ctor(float_t  time, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  lineLayer, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  type, ::GlobalNamespace::NoteCutDirection  cutDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, lineIndex, lineLayer, type, cutDirection);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08efc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData.get_lineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_lineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData.get_offsetDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::*)(float_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::OffsetDirection)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe08f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__set__time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__set__lineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__lineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__set__lineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__lineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__lineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__set__offsetDirection(::GlobalNamespace::OffsetDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this, std::forward<::GlobalNamespace::OffsetDirection>(value));
}
constexpr ::GlobalNamespace::OffsetDirection& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__offsetDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this);
}
constexpr ::GlobalNamespace::OffsetDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::__get__offsetDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_lineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_lineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OffsetDirection BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::get_offsetDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::New_ctor(float_t  time, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  lineLayer, ::GlobalNamespace::OffsetDirection  offsetDirection)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>(time, lineIndex, lineLayer, offsetDirection));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData::_ctor(float_t  time, int32_t  lineIndex, ::GlobalNamespace::NoteLineLayer  lineLayer, ::GlobalNamespace::OffsetDirection  offsetDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, lineIndex, lineLayer, offsetDirection);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_headLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_headLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_headControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_headCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_tailTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_tailLineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_tailLineLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteLineLayer (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_tailControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_tailCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData.get_sliderMidAnchorMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, ::GlobalNamespace::NoteLineLayer, float_t, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SliderMidAnchorMode)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe08fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__colorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, 0x10>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__colorType()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, 0x10>(this);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__colorType() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__headTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__headLineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headLineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__headLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x1c>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x1c>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__headControlPointLengthMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headControlPointLengthMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__headCutDirection(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headCutDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__headCutDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__tailTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__tailLineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailLineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailLineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__tailLineLayer(::GlobalNamespace::NoteLineLayer  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteLineLayer, 0x30>(this, std::forward<::GlobalNamespace::NoteLineLayer>(value));
}
constexpr ::GlobalNamespace::NoteLineLayer& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailLineLayer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x30>(this);
}
constexpr ::GlobalNamespace::NoteLineLayer const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailLineLayer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteLineLayer, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__tailControlPointLengthMultiplier(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailControlPointLengthMultiplier()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailControlPointLengthMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__tailCutDirection(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailCutDirection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__tailCutDirection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__set__sliderMidAnchorMode(::GlobalNamespace::SliderMidAnchorMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this, std::forward<::GlobalNamespace::SliderMidAnchorMode>(value));
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__sliderMidAnchorMode()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this);
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::__get__sliderMidAnchorMode() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_colorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headLineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_headCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailLineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailLineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteLineLayer BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailLineLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailLineLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_tailCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SliderMidAnchorMode BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::New_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  colorType, float_t  headTime, int32_t  headLineIndex, ::GlobalNamespace::NoteLineLayer  headLineLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailTime, int32_t  tailLineIndex, ::GlobalNamespace::NoteLineLayer  tailLineLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode  sliderMidAnchorMode)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>(colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData::_ctor(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  colorType, float_t  headTime, int32_t  headLineIndex, ::GlobalNamespace::NoteLineLayer  headLineLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailTime, int32_t  tailLineIndex, ::GlobalNamespace::NoteLineLayer  tailLineLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode  sliderMidAnchorMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorType, headTime, headLineIndex, headLineLayer, headControlPointLengthMultiplier, headCutDirection, tailTime, tailLineIndex, tailLineLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe09064;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData.get_lineIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0906c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe09074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0907c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData.get_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe09084;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::*)(float_t, int32_t, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, float_t, int32_t)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe0908c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__set__time(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__time()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__time() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__set__lineIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__lineIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__lineIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__set__type(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, 0x18>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__type()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, 0x18>(this);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__type() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__set__duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__set__width(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__width()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::__get__width() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_lineIndex()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_lineIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::get_width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::New_ctor(float_t  time, int32_t  lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  type, float_t  duration, int32_t  width)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>(time, lineIndex, type, duration, width));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData::_ctor(float_t  time, int32_t  lineIndex, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  type, float_t  duration, int32_t  width)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, lineIndex, type, duration, width);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::__BeatmapSaveData__ObstacleType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::FullHeight{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::Top{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType::Free{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData.get_keywords
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::get_keywords)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe090e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::*)(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe090e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::__set__keywords(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::__get__keywords()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*> BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::__get__keywords() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*, 0x10>(this);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::get_keywords()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get(),
                            "get_keywords",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*  keywords)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>(keywords));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keywords);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword.get_keyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe09110;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword.get_specialEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::get_specialEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe09118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            "get_specialEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::*)(::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe09120;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__set__keyword(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__get__keyword()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__get__keyword() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__set__specialEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__get__specialEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::__get__specialEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this);
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::get_keyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::get_specialEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            "get_specialEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword* BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::New_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  specialEvents)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>(keyword, specialEvents));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword::_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  specialEvents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventsForKeyword*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyword, specialEvents);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_version
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_events
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0891c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_events",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_notes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_notes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_sliders
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0892c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_sliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_waypoints
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_waypoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_obstacles
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0893c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_obstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.get_specialEventsKeywordFilters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_specialEventsKeywordFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xe0894c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.SerializeToJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SerializeToJSONString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe089dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.DeserializeFromJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* (*)(::StringW)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xe0562c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.ConvertBeatmapSaveDataPreV2_5_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xe089e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "ConvertBeatmapSaveDataPreV2_5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData.GetSpecialEventTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* (*)()>(&::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::GetSpecialEventTypes)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xe08d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "GetSpecialEventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__events(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__events()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__events() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__notes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__notes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__notes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__sliders()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__sliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__waypoints()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__waypoints() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__obstacles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__obstacles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*, 0x38>(this);
}
constexpr void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__set__specialEventsKeywordFilters(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*, 0x40>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__specialEventsKeywordFilters()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*> BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::__get__specialEventsKeywordFilters() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*, 0x40>(this);
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_version()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_version",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_events()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_events",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_notes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_notes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_sliders()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_sliders",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_waypoints()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_waypoints",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_obstacles()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_obstacles",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::get_specialEventsKeywordFilters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "get_specialEventsKeywordFilters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*  events, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*  notes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*  sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*  waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*  obstacles, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*  specialEventsKeywordFilters)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>(events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters));
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*  events, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*  notes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*  sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*  waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*  obstacles, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*  specialEventsKeywordFilters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__EventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__WaypointData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SpecialEventKeywordFiltersData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, events, notes, sliders, waypoints, obstacles, specialEventsKeywordFilters);
}
inline ::StringW BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::SerializeToJSONString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::DeserializeFromJSONString(::StringW  stringData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*, false>(nullptr, ___internal_method, stringData);
}
inline void BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::ConvertBeatmapSaveDataPreV2_5_0(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*  beatmapSaveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "ConvertBeatmapSaveDataPreV2_5_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::GetSpecialEventTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get(),
                            "GetSpecialEventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, false>(nullptr, ___internal_method);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kColorBoostEventType{static_cast<int32_t>(0x5)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kLegacyBPMEventType{static_cast<int32_t>(0xa)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kBPMEventType{static_cast<int32_t>(0x64)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kEarlyRotationEventType{static_cast<int32_t>(0xe)};
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::kLateRotationEventType{static_cast<int32_t>(0xf)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
