#pragma once
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveDataItem_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__BeatmapSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__SliderMidAnchorMode_def.hpp"
#include "GlobalNamespace/zzzz__OffsetDirection_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)(float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe07790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe077b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>"
constexpr  BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::operator ::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*() noexcept {
return static_cast<::System::IComparable_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>*>(static_cast<void*>(this));
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem* BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::New_ctor(float_t  beat)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>(beat));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::_ctor(float_t  beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem::CompareTo(::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BeatmapSaveDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, other);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_eventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_eventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData.get_floatValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_floatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::*)(float_t, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, int32_t, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe0753c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__set_et(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this, std::forward<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>(value));
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_et()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this);
}
constexpr ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_et() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__set_i(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_i()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_i() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__set_f(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_f()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::__get_f() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
inline ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_eventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_eventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::get_floatValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            "get_floatValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::New_ctor(float_t  beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  eventType, int32_t  value, float_t  floatValue)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>(beat, eventType, value, floatValue));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData::_ctor(float_t  beat, ::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType  eventType, int32_t  value, float_t  floatValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, eventType, value, floatValue);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData.get_boost
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::get_boost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe077fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(),
                            "get_boost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::*)(float_t, bool)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe07504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__set_o(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x14>(this, std::forward<bool>(value));
}
constexpr bool& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__get_o()  {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
constexpr bool const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::__get_o() const {
return ::cordl_internals::getInstanceField<bool, 0x14>(this);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::get_boost()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(),
                            "get_boost",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::New_ctor(float_t  beat, bool  boost)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>(beat, boost));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData::_ctor(float_t  beat, bool  boost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, boost);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData.get_bpm
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::get_bpm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(),
                            "get_bpm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::*)(float_t, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe073e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__set_m(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__get_m()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::__get_m() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::get_bpm()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(),
                            "get_bpm",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::New_ctor(float_t  beat, float_t  bpm)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>(beat, bpm));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData::_ctor(float_t  beat, float_t  bpm)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, bpm);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::__BeatmapSaveData__ExecutionTime(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime  BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::Early{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime  BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime::Late{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData.get_executionTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime (::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_executionTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0780c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            "get_executionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07814;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::*)(float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe074c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, 0x14>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__get_e()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, 0x14>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime const& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__get_e() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__set_r(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__get_r()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::__get_r() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_executionTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            "get_executionTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData* BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::New_ctor(float_t  beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime  executionTime, float_t  rotation)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>(beat, executionTime, rotation));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData::_ctor(float_t  beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime  executionTime, float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__ExecutionTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, executionTime, rotation);
}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_keyword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(&::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword.get_eventTypes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)()>(&::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0782c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            "get_eventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::*)(::StringW, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*)>(&::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe07640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__set_k(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__get_k()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__get_k() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__get_e()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*> GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::__get_e() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, 0x18>(this);
}
inline ::StringW GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_keyword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            "get_keyword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>* GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::get_eventTypes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            "get_eventTypes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword* GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::New_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  eventTypes)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>(keyword, eventTypes));
}
inline void GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword::_ctor(::StringW  keyword, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*  eventTypes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__BeatmapEventType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, keyword, eventTypes);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords.get_data
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::get_data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::*)(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe0766c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__set_d(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__get_d()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::__get_d() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, 0x10>(this);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>* BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::get_data()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                            "get_data",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*  data)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>(data));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords::_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__BeatmapSaveData__BasicEventTypesWithKeywords__BasicEventTypesForKeyword*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::__BeatmapSaveData__EnvironmentColorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::None{static_cast<int32_t>(0xffffffff)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::Color0{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::Color1{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType::ColorWhite{static_cast<int32_t>(0x2)};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::__BeatmapSaveData__TransitionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Instant{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Interpolate{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType::Extend{static_cast<int32_t>(0x2)};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::__BeatmapSaveData__Axis(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::X{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::Y{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  BeatmapSaveDataVersion3::__BeatmapSaveData__Axis::Z{static_cast<int32_t>(0x2)};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::__BeatmapSaveData__EaseType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::None{static_cast<int32_t>(0xffffffff)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::Linear{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuad{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuad{static_cast<int32_t>(0x2)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuad{static_cast<int32_t>(0x3)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InSine{static_cast<int32_t>(0x4)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutSine{static_cast<int32_t>(0x5)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutSine{static_cast<int32_t>(0x6)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InCubic{static_cast<int32_t>(0x7)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutCubic{static_cast<int32_t>(0x8)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutCubic{static_cast<int32_t>(0x9)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuart{static_cast<int32_t>(0xa)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuart{static_cast<int32_t>(0xb)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuart{static_cast<int32_t>(0xc)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InQuint{static_cast<int32_t>(0xd)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutQuint{static_cast<int32_t>(0xe)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutQuint{static_cast<int32_t>(0xf)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InExpo{static_cast<int32_t>(0x10)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutExpo{static_cast<int32_t>(0x11)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutExpo{static_cast<int32_t>(0x12)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InCirc{static_cast<int32_t>(0x13)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutCirc{static_cast<int32_t>(0x14)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutCirc{static_cast<int32_t>(0x15)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InBack{static_cast<int32_t>(0x16)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutBack{static_cast<int32_t>(0x17)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutBack{static_cast<int32_t>(0x18)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InElastic{static_cast<int32_t>(0x19)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutElastic{static_cast<int32_t>(0x1a)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutElastic{static_cast<int32_t>(0x1b)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InBounce{static_cast<int32_t>(0x1c)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::OutBounce{static_cast<int32_t>(0x1d)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::InOutBounce{static_cast<int32_t>(0x1e)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutBack{static_cast<int32_t>(0x64)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutElastic{static_cast<int32_t>(0x65)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType::BeatSaberInOutBounce{static_cast<int32_t>(0x66)};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::__BeatmapSaveData__FxEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Int{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Float{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType::Bool{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::__BeatmapSaveData__EventBox__DistributionParamType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::Wave{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType::Step{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_indexFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_indexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_beatDistributionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0783c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_beatDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox.get_beatDistributionParamType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_beatDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe0784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__set_f(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, 0x10>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_f()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*> BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_f() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__set_w(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_w()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_w() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__set_d(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x1c>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_d()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x1c>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::__get_d() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x1c>(this);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_indexFilter()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_indexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_beatDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::get_beatDistributionParamType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            "get_beatDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0788c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionParamType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionEaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0789c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxDistributionShouldAffectFirstBaseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe078a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox.get_vfxBaseDataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<int32_t>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe078b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, bool, ::System::Collections::Generic::List_1<int32_t>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe078bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__set_l(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
constexpr ::System::Collections::Generic::List_1<int32_t>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_l()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_l() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<int32_t>*, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__set_s(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_s()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x2c>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_t()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x2c>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_t() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x30>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x30>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__set_b(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_b()  {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::__get_b() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionParamType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionEaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxDistributionShouldAffectFirstBaseEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::get_vfxBaseDataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            "get_vfxBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<int32_t>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  vfxDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  vfxDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  vfxDistributionEaseType, bool  vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>*  effectsBaseDataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam, vfxDistributionParamType, vfxDistributionEaseType, vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  vfxDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  vfxDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  vfxDistributionEaseType, bool  vfxDistributionShouldAffectFirstBaseEvent, ::System::Collections::Generic::List_1<int32_t>*  effectsBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, vfxDistributionParam, vfxDistributionParamType, vfxDistributionEaseType, vfxDistributionShouldAffectFirstBaseEvent, effectsBaseDataList);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0793c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_usePreviousEventValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07944;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_usePreviousEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::*)(float_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe0795c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__set_p(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_p()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_p() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__set_v(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_v()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::__get_v() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_usePreviousEventValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_usePreviousEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::New_ctor(float_t  beat, int32_t  value)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>(beat, value));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData::_ctor(float_t  beat, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, value);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07994;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_usePreviousEventValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_usePreviousEventValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe0799c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_usePreviousEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe079ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe079b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::*)(float_t, bool, float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe079bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__set_p(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_p()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_p() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__set_v(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_v()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_v() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x1c>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x1c>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x1c>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_usePreviousEventValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_usePreviousEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::New_ctor(float_t  beat, bool  usePreviousEventValue, float_t  value, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>(beat, usePreviousEventValue, value, easeType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData::_ctor(float_t  beat, bool  usePreviousEventValue, float_t  value, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, usePreviousEventValue, value, easeType);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::__BeatmapSaveData__IndexFilterRandomType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::NoRandom{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::KeepOrder{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType::RandomElements{static_cast<int32_t>(0x2)};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::None{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::Duration{static_cast<int32_t>(0x1)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType::Distribution{static_cast<int32_t>(0x2)};
constexpr void GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::__BeatmapSaveData__IndexFilter__IndexFilterType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType  GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::Division{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType  GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType::StepAndOffset{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_param0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_param0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_param1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_param1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_reversed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_reversed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_reversed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_chunks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_chunks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_chunks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_limit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_limit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_limitAlsoAffectsType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limitAlsoAffectsType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_limitAlsoAffectsType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_random
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.get_seed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_seed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, int32_t, int32_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, int32_t, int32_t, float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xe07ae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateDivisionIndexFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)(int32_t, int32_t, bool)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateDivisionIndexFilter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateDivisionIndexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateStepFilter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)(int32_t, int32_t, bool)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateStepFilter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe07bb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateStepFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter.CreateForExtension
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* (*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateForExtension)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe07c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateForExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_f(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, 0x10>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_f()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, 0x10>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_f() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_p(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_p()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_p() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_t(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_t()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_t() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_r(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_r()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_r() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_c(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_c()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_c() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_n(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, 0x24>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_n()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, 0x24>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_n() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_s(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_s()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_s() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_l(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_l()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_l() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__set_d(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, 0x30>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_d()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, 0x30>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType const& BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::__get_d() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, 0x30>(this);
}
inline ::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_param0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_param1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_param1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_reversed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_reversed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_chunks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_chunks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_limit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_limitAlsoAffectsType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_limitAlsoAffectsType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_random()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_random",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::get_seed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "get_seed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::New_ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType  type, int32_t  param0, int32_t  param1, bool  reversed, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  random, int32_t  seed, int32_t  chunks, float_t  limit, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  limitAlsoAffectsType)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>(type, param0, param1, reversed, random, seed, chunks, limit, limitAlsoAffectsType));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor(::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType  type, int32_t  param0, int32_t  param1, bool  reversed, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType  random, int32_t  seed, int32_t  chunks, float_t  limit, ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType  limitAlsoAffectsType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__IndexFilter__IndexFilterType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterRandomType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilterLimitAlsoAffectsType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, param0, param1, reversed, random, seed, chunks, limit, limitAlsoAffectsType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  other)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>(other));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, other);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateDivisionIndexFilter(int32_t  numberOfSections, int32_t  divisionIdx, bool  reversed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateDivisionIndexFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method, numberOfSections, divisionIdx, reversed);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateStepFilter(int32_t  offset, int32_t  step, bool  reversed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateStepFilter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method, offset, step, reversed);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter* BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter::CreateForExtension()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(),
                            "CreateForExtension",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionParamType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionShouldAffectFirstBaseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_brightnessDistributionEaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox.get_lightColorBaseDataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_lightColorBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_lightColorBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t, bool, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xe07ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__set_r(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_r()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_r() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_t()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_t() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__set_b(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_b()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_b() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x2c>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x2c>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__set_e(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_e()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::__get_e() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*, 0x30>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionParamType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionShouldAffectFirstBaseEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_brightnessDistributionEaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_brightnessDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::get_lightColorBaseDataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            "get_lightColorBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  brightnessDistributionParam, bool  brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  brightnessDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*  lightColorBaseDataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType, brightnessDistributionEaseType, lightColorBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  brightnessDistributionParam, bool  brightnessDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  brightnessDistributionParamType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  brightnessDistributionEaseType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*  lightColorBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, brightnessDistributionParam, brightnessDistributionShouldAffectFirstBaseEvent, brightnessDistributionParamType, brightnessDistributionEaseType, lightColorBaseDataList);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_transitionType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_transitionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_transitionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_brightness
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_brightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_brightness",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeBeatFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBeatFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeBeatFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeBrightness
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBrightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeBrightness",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData.get_strobeFade
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeFade)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeFade",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::*)(float_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, float_t, int32_t, float_t, bool)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xe07da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, 0x14>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, 0x14>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, 0x18>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_c()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, 0x18>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_c() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_s(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_s()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_f(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_f()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_f() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_sb(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_sb()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_sb() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__set_sf(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_sf()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::__get_sf() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_transitionType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_transitionType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_colorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_brightness()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_brightness",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBeatFrequency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeBeatFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeBrightness()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeBrightness",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::get_strobeFade()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            "get_strobeFade",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::New_ctor(float_t  beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  transitionType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  colorType, float_t  brightness, int32_t  strobeFrequency, float_t  strobeBrightness, bool  strobeFade)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>(beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData::_ctor(float_t  beat, ::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType  transitionType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType  colorType, float_t  brightness, int32_t  strobeFrequency, float_t  strobeBrightness, bool  strobeFade)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, transitionType, colorType, brightness, strobeFrequency, strobeBrightness, strobeFade);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionParamType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_axis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_axis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_flipRotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_flipRotation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_flipRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionShouldAffectFirstBaseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07e40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_rotationDistributionEaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox.get_lightRotationBaseDataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_lightRotationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07e58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_lightRotationBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, bool, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe07e60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_s(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_s()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_t()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_t() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_a()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_a() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_r(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_r()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_r() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_b(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_b()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_b() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_l()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::__get_l() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*, 0x38>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionParamType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_axis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_axis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_flipRotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_flipRotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionShouldAffectFirstBaseEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_rotationDistributionEaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_rotationDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::get_lightRotationBaseDataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            "get_lightRotationBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  rotationDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  rotationDistributionParamType, bool  rotationDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  axis, bool  flipRotation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*  lightRotationBaseDataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  rotationDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  rotationDistributionParamType, bool  rotationDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  rotationDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  axis, bool  flipRotation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*  lightRotationBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, rotationDistributionParam, rotationDistributionParamType, rotationDistributionShouldAffectFirstBaseEvent, rotationDistributionEaseType, axis, flipRotation, lightRotationBaseDataList);
}
constexpr void GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::__BeatmapSaveData__LightRotationBaseData__RotationDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Automatic{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Clockwise{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection::Counterclockwise{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_usePreviousEventRotationValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_usePreviousEventRotationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07f00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_usePreviousEventRotationValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_loopsCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_loopsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_loopsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_rotation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData.get_rotationDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotationDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_rotationDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::*)(float_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, int32_t, float_t, ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe07f30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_p(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_p()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_p() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_e()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_e() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_l(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_l()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_l() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_r(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_r()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_r() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__set_o(::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, 0x24>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_o()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, 0x24>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::__get_o() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, 0x24>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_usePreviousEventRotationValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_usePreviousEventRotationValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_loopsCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_loopsCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_rotation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::get_rotationDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            "get_rotationDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::New_ctor(float_t  beat, bool  usePreviousEventRotationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType, int32_t  loopsCount, float_t  rotation, ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  rotationDirection)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>(beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData::_ctor(float_t  beat, bool  usePreviousEventRotationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType, int32_t  loopsCount, float_t  rotation, ::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection  rotationDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__LightRotationBaseData__RotationDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, usePreviousEventRotationValue, easeType, loopsCount, rotation, rotationDirection);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionParam
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionParamType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParamType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_axis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_axis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_axis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_flipTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_flipTranslation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_flipTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionShouldAffectFirstBaseEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_gapDistributionEaseType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionEaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox.get_lightTranslationBaseDataList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_lightTranslationBaseDataList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe07fd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_lightTranslationBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, bool, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe07fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_s(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_s()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_t(::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this, std::forward<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>(value));
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_t()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_t() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_a(::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_a()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_a() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_r(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_r()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_r() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_b(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_b()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_b() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_i(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_i()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_i() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x34>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__set_l(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_l()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::__get_l() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*, 0x38>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParam()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionParam",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionParamType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionParamType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_axis()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_axis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_flipTranslation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_flipTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionShouldAffectFirstBaseEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionShouldAffectFirstBaseEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_gapDistributionEaseType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_gapDistributionEaseType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::get_lightTranslationBaseDataList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            "get_lightTranslationBaseDataList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  gapDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  gapDistributionParamType, bool  gapDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  axis, bool  flipTranslation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*  lightTranslationBaseDataList)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>(indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam, gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*  indexFilter, float_t  beatDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  beatDistributionParamType, float_t  gapDistributionParam, ::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType  gapDistributionParamType, bool  gapDistributionShouldAffectFirstBaseEvent, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  gapDistributionEaseType, ::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis  axis, bool  flipTranslation, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*  lightTranslationBaseDataList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IndexFilter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapSaveData__EventBox__DistributionParamType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__Axis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, indexFilter, beatDistributionParam, beatDistributionParamType, gapDistributionParam, gapDistributionParamType, gapDistributionShouldAffectFirstBaseEvent, gapDistributionEaseType, axis, flipTranslation, lightTranslationBaseDataList);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_beat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_beat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_usePreviousEventTranslationValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_usePreviousEventTranslationValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe08080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_usePreviousEventTranslationValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_easeType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData.get_translation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_translation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_translation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::*)(float_t, bool, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe080a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__set_b(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_b()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_b() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__set_p(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_p()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_p() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__set_e(::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_e()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_e() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__set_t(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_t()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::__get_t() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_beat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_beat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_usePreviousEventTranslationValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_usePreviousEventTranslationValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_easeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_easeType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::get_translation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            "get_translation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::New_ctor(float_t  beat, bool  usePreviousEventTranslationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType, float_t  translation)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>(beat, usePreviousEventTranslationValue, easeType, translation));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData::_ctor(float_t  beat, bool  usePreviousEventTranslationValue, ::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType  easeType, float_t  translation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationBaseData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, usePreviousEventTranslationValue, easeType, translation);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup.get_groupId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe080f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                            "get_groupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup.get_baseEventBoxes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_baseEventBoxes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::*)(float_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe080f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__set_g(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__get_g()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::__get_g() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_groupId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                            "get_groupId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::get_baseEventBoxes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                            "get_baseEventBoxes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>*, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::New_ctor(float_t  beat, int32_t  groupId)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>(beat, groupId));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup::_ctor(float_t  beat, int32_t  groupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__set_e(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Collections::Generic::List_1<T>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__get_e()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::__get_e() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<T>*, 0x18>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::get_baseEventBoxes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(),
                            "get_baseEventBoxes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBox*>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::System::Collections::Generic::IReadOnlyList_1<T>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::get_eventBoxes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(),
                            "get_eventBoxes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<T>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>* BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<T>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>(beat, groupId, eventBoxes));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<T>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__EventBoxGroup_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId, eventBoxes);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup.get_type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::*)(float_t, int32_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe08138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__set_t(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, 0x20>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__get_t()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, 0x20>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType const& BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::__get_t() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, 0x20>(this);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::get_type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(),
                            "get_type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  type, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>(beat, groupId, type, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType  type, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBox*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId, type, eventBoxes);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.get_intEventsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_intEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe081bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "get_intEventsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.get_floatEventsList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>* (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_floatEventsList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe081c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "get_floatEventsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.AddEventAndGetIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe081cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "AddEventAndGetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection.AddEventAndGetIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe0828c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "AddEventAndGetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe07580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__set__il(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__get__il()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__get__il() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__set__fl(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__get__fl()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*> BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::__get__fl() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*, 0x18>(this);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_intEventsList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "get_intEventsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::get_floatEventsList()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "get_floatEventsList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>*, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "AddEventAndGetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FloatFxEventBaseData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, e);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::AddEventAndGetIndex(::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            "AddEventAndGetIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__IntFxEventBaseData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, e);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>());
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::*)(float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe0834c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup.CopyWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe083bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBox*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup::CopyWith(::System::Nullable_1<float_t>  newBeat, ::System::Nullable_1<int32_t>  newGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*, false>(*this, ___internal_method, newBeat, newGroupId);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::*)(float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe0849c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup.CopyWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe0850c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBox*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup::CopyWith(::System::Nullable_1<float_t>  newBeat, ::System::Nullable_1<int32_t>  newGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*, false>(*this, ___internal_method, newBeat, newGroupId);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::*)(float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe085ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup.CopyWith
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* (::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xe0865c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::New_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*  eventBoxes)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>(beat, groupId, eventBoxes));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::_ctor(float_t  beat, int32_t  groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*  eventBoxes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBox*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, groupId, eventBoxes);
}
/// @param newBeat: ::System::Nullable_1<float_t> (default: {})
/// @param newGroupId: ::System::Nullable_1<int32_t> (default: {})
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup* BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup::CopyWith(::System::Nullable_1<float_t>  newBeat, ::System::Nullable_1<int32_t>  newGroupId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>::get(),
                            "CopyWith",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*, false>(*this, ___internal_method, newBeat, newGroupId);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::__BeatmapSaveData__NoteColorType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::ColorA{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType::ColorB{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_line
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0873c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_layer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_angleOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_angleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0874c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_angleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData.get_cutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0875c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::*)(float_t, int32_t, int32_t, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, ::GlobalNamespace::NoteCutDirection, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe071dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__set_x(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_x()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_x() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__set_y(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_y()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_y() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__set_a(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_a()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_a() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x20>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_c()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x20>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_c() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__set_d(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_d()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::__get_d() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x24>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_line()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_layer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_angleOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_angleOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::get_cutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            "get_cutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData* BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::New_ctor(float_t  beat, int32_t  line, int32_t  layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  color, ::GlobalNamespace::NoteCutDirection  cutDirection, int32_t  angleOffset)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>(beat, line, layer, color, cutDirection, angleOffset));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData::_ctor(float_t  beat, int32_t  line, int32_t  layer, ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  color, ::GlobalNamespace::NoteCutDirection  cutDirection, int32_t  angleOffset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, line, layer, color, cutDirection, angleOffset);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData.get_line
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData.get_layer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0876c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::*)(float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe0723c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__set_x(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__get_x()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__get_x() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__set_y(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__get_y()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::__get_y() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_line()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::get_layer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData* BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::New_ctor(float_t  beat, int32_t  line, int32_t  layer)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>(beat, line, layer));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData::_ctor(float_t  beat, int32_t  line, int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, line, layer);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_line
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_layer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0877c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData.get_offsetDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OffsetDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_offsetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::*)(float_t, int32_t, int32_t, ::GlobalNamespace::OffsetDirection)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe07394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__set_x(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_x()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_x() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__set_y(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_y()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_y() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__set_d(::GlobalNamespace::OffsetDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this, std::forward<::GlobalNamespace::OffsetDirection>(value));
}
constexpr ::GlobalNamespace::OffsetDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_d()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this);
}
constexpr ::GlobalNamespace::OffsetDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::__get_d() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::OffsetDirection, 0x1c>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_line()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_layer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::OffsetDirection BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::get_offsetDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            "get_offsetDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OffsetDirection, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData* BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::New_ctor(float_t  beat, int32_t  line, int32_t  layer, ::GlobalNamespace::OffsetDirection  offsetDirection)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>(beat, line, layer, offsetDirection));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData::_ctor(float_t  beat, int32_t  line, int32_t  layer, ::GlobalNamespace::OffsetDirection  offsetDirection)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OffsetDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, line, layer, offsetDirection);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::__BeatmapSaveData__SliderType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType  BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::Normal{static_cast<int32_t>(0x0)};
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType  BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType::Burst{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_colorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0878c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0879c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_headCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailBeat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailBeat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailBeat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailLine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData.get_tailLayer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe087bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xe087c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_c(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x14>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_c()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x14>(this);
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_c() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_x(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_x()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_x() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_y(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_y()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_y() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_d(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_d()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_d() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_tb(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_tb()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_tb() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_tx(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_tx()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_tx() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__set_ty(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x2c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_ty()  {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::__get_ty() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2c>(this);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_colorType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_colorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_headCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_headCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailBeat()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailBeat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailLine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::get_tailLayer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            "get_tailLayer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData* BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BaseSliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_headControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_tailControlPointLengthMultiplier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_tailCutDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NoteCutDirection (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData.get_sliderMidAnchorMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SliderMidAnchorMode (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, float_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, float_t, ::GlobalNamespace::NoteCutDirection, ::GlobalNamespace::SliderMidAnchorMode)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe07300;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__set_mu(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_mu()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_mu() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__set_tmu(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_tmu()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_tmu() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__set_tc(::GlobalNamespace::NoteCutDirection  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this, std::forward<::GlobalNamespace::NoteCutDirection>(value));
}
constexpr ::GlobalNamespace::NoteCutDirection& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_tc()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this);
}
constexpr ::GlobalNamespace::NoteCutDirection const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_tc() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteCutDirection, 0x38>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__set_m(::GlobalNamespace::SliderMidAnchorMode  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this, std::forward<::GlobalNamespace::SliderMidAnchorMode>(value));
}
constexpr ::GlobalNamespace::SliderMidAnchorMode& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_m()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this);
}
constexpr ::GlobalNamespace::SliderMidAnchorMode const& BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::__get_m() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderMidAnchorMode, 0x3c>(this);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_headControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_headControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailControlPointLengthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailControlPointLengthMultiplier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::NoteCutDirection BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_tailCutDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_tailCutDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SliderMidAnchorMode BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::get_sliderMidAnchorMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            "get_sliderMidAnchorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SliderMidAnchorMode, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData* BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode  sliderMidAnchorMode)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>(colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat, tailLine, tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, float_t  headControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer, float_t  tailControlPointLengthMultiplier, ::GlobalNamespace::NoteCutDirection  tailCutDirection, ::GlobalNamespace::SliderMidAnchorMode  sliderMidAnchorMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderMidAnchorMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat, tailLine, tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData.get_sliceCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_sliceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            "get_sliceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData.get_squishAmount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_squishAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08858;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            "get_squishAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::*)(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, float_t, int32_t, int32_t, ::GlobalNamespace::NoteCutDirection, float_t, int32_t, int32_t, int32_t, float_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xe08860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__set_sc(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x30>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__get_sc()  {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__get_sc() const {
return ::cordl_internals::getInstanceField<int32_t, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__set_s(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__get_s()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::__get_s() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_sliceCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            "get_sliceCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::get_squishAmount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            "get_squishAmount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData* BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::New_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer, int32_t  sliceCount, float_t  squishAmount)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>(colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer, sliceCount, squishAmount));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData::_ctor(::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType  colorType, float_t  headBeat, int32_t  headLine, int32_t  headLayer, ::GlobalNamespace::NoteCutDirection  headCutDirection, float_t  tailBeat, int32_t  tailLine, int32_t  tailLayer, int32_t  sliceCount, float_t  squishAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, colorType, headBeat, headLine, headLayer, headCutDirection, tailBeat, tailLine, tailLayer, sliceCount, squishAmount);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_line
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_line)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_layer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe088fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_width
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe08904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData.get_height
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)()>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0890c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::*)(float_t, int32_t, int32_t, float_t, int32_t, int32_t)>(&::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe0729c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__set_x(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_x()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_x() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__set_y(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_y()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_y() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__set_d(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_d()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_d() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__set_w(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_w()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_w() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__set_h(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_h()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::__get_h() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_line()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_line",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_layer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_layer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_width()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_width",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::get_height()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            "get_height",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData* BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::New_ctor(float_t  beat, int32_t  line, int32_t  layer, float_t  duration, int32_t  width, int32_t  height)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>(beat, line, layer, duration, width, height));
}
inline void BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData::_ctor(float_t  beat, int32_t  line, int32_t  layer, float_t  duration, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, beat, line, layer, duration, width, height);
}
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::BeatmapSaveData::*)(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, bool)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xe05388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.SerializeToJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatmapSaveDataVersion3::BeatmapSaveData::*)()>(&::BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe05494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.DeserializeFromJSONString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::StringW)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xe0549c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.ConvertBeatmapSaveData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::BeatmapSaveData* (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData)> {
  constexpr static std::size_t size = 0x180c;
  constexpr static std::size_t addrs = 0xe057fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "ConvertBeatmapSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetNoteColorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe071d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetNoteColorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetNoteColorType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe072f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetNoteColorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetHeightForObstacleType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe07288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetHeightForObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetLayerForObstacleType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe07278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetLayerForObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.GetSliderType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType (*)(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xe07694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetSliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.SpawnRotationForEventValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe0740c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "SpawnRotationForEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::BeatmapSaveData.BeatmapSaveDataAreSorted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*)>(&::BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xe07008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "BeatmapSaveDataAreSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_version(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& BeatmapSaveDataVersion3::BeatmapSaveData::__get_version()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& BeatmapSaveDataVersion3::BeatmapSaveData::__get_version() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_bpmEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_bpmEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_bpmEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*, 0x18>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_rotationEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_rotationEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_rotationEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*, 0x20>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_colorNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_colorNotes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_colorNotes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*, 0x28>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_bombNotes(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*, 0x30>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_bombNotes()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_bombNotes() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*, 0x30>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_obstacles(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*, 0x38>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_obstacles()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_obstacles() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*, 0x38>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_sliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*, 0x40>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_sliders()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_sliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*, 0x40>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_burstSliders(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*, 0x48>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_burstSliders()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_burstSliders() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*, 0x48>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_waypoints(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*, 0x50>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_waypoints()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_waypoints() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*, 0x50>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_basicBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x58>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_basicBeatmapEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_basicBeatmapEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*, 0x58>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_colorBoostBeatmapEvents(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x60>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_colorBoostBeatmapEvents()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_colorBoostBeatmapEvents() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*, 0x60>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_lightColorEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x68>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightColorEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightColorEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*, 0x68>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_lightRotationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x70>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightRotationEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightRotationEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*, 0x70>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_lightTranslationEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x78>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightTranslationEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_lightTranslationEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*, 0x78>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_vfxEventBoxGroups(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x80>(this, std::forward<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>* BeatmapSaveDataVersion3::BeatmapSaveData::__get_vfxEventBoxGroups()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_vfxEventBoxGroups() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*, 0x80>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set__fxEventsCollection(::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x88>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection* BeatmapSaveDataVersion3::BeatmapSaveData::__get__fxEventsCollection()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*> BeatmapSaveDataVersion3::BeatmapSaveData::__get__fxEventsCollection() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*, 0x88>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_basicEventTypesWithKeywords(::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*  value)  {
::cordl_internals::setInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, 0x90>(this, std::forward<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>(value));
}
constexpr ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords* BeatmapSaveDataVersion3::BeatmapSaveData::__get_basicEventTypesWithKeywords()  {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, 0x90>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*> BeatmapSaveDataVersion3::BeatmapSaveData::__get_basicEventTypesWithKeywords() const {
return ::cordl_internals::getInstanceField<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*, 0x90>(this);
}
constexpr void BeatmapSaveDataVersion3::BeatmapSaveData::__set_useNormalEventsAsCompatibleEvents(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x98>(this, std::forward<bool>(value));
}
constexpr bool& BeatmapSaveDataVersion3::BeatmapSaveData::__get_useNormalEventsAsCompatibleEvents()  {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
constexpr bool const& BeatmapSaveDataVersion3::BeatmapSaveData::__get_useNormalEventsAsCompatibleEvents() const {
return ::cordl_internals::getInstanceField<bool, 0x98>(this);
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::setStaticF_version2_6_0(::System::Version*  value)  {
::cordl_internals::setStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>(std::forward<::System::Version*>(value));
}
inline ::System::Version* BeatmapSaveDataVersion3::BeatmapSaveData::getStaticF_version2_6_0()  {
return ::cordl_internals::getStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>();
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::setStaticF__spawnRotations(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t,::Array<float_t>*>, "_spawnRotations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>(std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t,::Array<float_t>*> BeatmapSaveDataVersion3::BeatmapSaveData::getStaticF__spawnRotations()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t,::Array<float_t>*>, "_spawnRotations", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get>();
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::New_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*  bpmEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*  rotationEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*  colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*  bombNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*  obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*  sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*  burstSliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*  waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  basicBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  colorBoostBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  lightColorEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  lightRotationEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  lightTranslationEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  vfxEventBoxGroups, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  fxEventsCollection, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*  basicEventTypesWithKeywords, bool  useNormalEventsAsCompatibleEvents)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatmapSaveDataVersion3::BeatmapSaveData*>(bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents, colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups, lightTranslationEventBoxGroups, vfxEventBoxGroups, fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents));
}
inline void BeatmapSaveDataVersion3::BeatmapSaveData::_ctor(::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*  bpmEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*  rotationEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*  colorNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*  bombNotes, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*  obstacles, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*  sliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*  burstSliders, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*  waypoints, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*  basicBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*  colorBoostBeatmapEvents, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*  lightColorEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*  lightRotationEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*  lightTranslationEventBoxGroups, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*  vfxEventBoxGroups, ::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*  fxEventsCollection, ::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*  basicEventTypesWithKeywords, bool  useNormalEventsAsCompatibleEvents)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BpmChangeEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__RotationEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorNoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BombNoteData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ObstacleData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BurstSliderData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__WaypointData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__ColorBoostEventData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightColorEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightRotationEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__LightTranslationEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventBoxGroup*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__FxEventsCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion3::__BeatmapSaveData__BasicEventTypesWithKeywords*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, bpmEvents, rotationEvents, colorNotes, bombNotes, obstacles, sliders, burstSliders, waypoints, basicBeatmapEvents, colorBoostBeatmapEvents, lightColorEventBoxGroups, lightRotationEventBoxGroups, lightTranslationEventBoxGroups, vfxEventBoxGroups, fxEventsCollection, basicEventTypesWithKeywords, useNormalEventsAsCompatibleEvents);
}
inline ::StringW BeatmapSaveDataVersion3::BeatmapSaveData::SerializeToJSONString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "SerializeToJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::DeserializeFromJSONString(::StringW  stringData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "DeserializeFromJSONString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData*, false>(nullptr, ___internal_method, stringData);
}
inline ::BeatmapSaveDataVersion3::BeatmapSaveData* BeatmapSaveDataVersion3::BeatmapSaveData::ConvertBeatmapSaveData(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*  beatmapSaveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "ConvertBeatmapSaveData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::BeatmapSaveData*, false>(nullptr, ___internal_method, beatmapSaveData);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType  noteType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetNoteColorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__NoteType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(nullptr, ___internal_method, noteType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType BeatmapSaveDataVersion3::BeatmapSaveData::GetNoteColorType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType  colorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetNoteColorType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ColorType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__NoteColorType, false>(nullptr, ___internal_method, colorType);
}
inline int32_t BeatmapSaveDataVersion3::BeatmapSaveData::GetHeightForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  obstacleType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetHeightForObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline int32_t BeatmapSaveDataVersion3::BeatmapSaveData::GetLayerForObstacleType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType  obstacleType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetLayerForObstacleType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__ObstacleType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obstacleType);
}
inline ::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType BeatmapSaveDataVersion3::BeatmapSaveData::GetSliderType(::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType  sliderType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "GetSliderType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::__BeatmapSaveData__SliderType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::__BeatmapSaveData__SliderType, false>(nullptr, ___internal_method, sliderType);
}
inline float_t BeatmapSaveDataVersion3::BeatmapSaveData::SpawnRotationForEventValue(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "SpawnRotationForEventValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index);
}
inline bool BeatmapSaveDataVersion3::BeatmapSaveData::BeatmapSaveDataAreSorted(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*  beatmapSaveData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::BeatmapSaveData*>::get(),
                            "BeatmapSaveDataAreSorted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveDataItem*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapSaveData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
