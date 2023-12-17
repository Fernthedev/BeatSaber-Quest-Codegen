#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
constexpr void GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::__BeatmapDataItem__BeatmapDataItemType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::BeatmapObject{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType::BeatmapEvent{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_time
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdfd538;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_executionOrder
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_executionOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdfd540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.get_subtypeGroupIdentifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdfd548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataItem::*)(float_t, int32_t, int32_t, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType)>(&::GlobalNamespace::BeatmapDataItem::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xdfd550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.GetCopy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::BeatmapDataItem::*)()>(&::GlobalNamespace::BeatmapDataItem::GetCopy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataItem.CompareTo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapDataItem::*)(::GlobalNamespace::BeatmapDataItem*)>(&::GlobalNamespace::BeatmapDataItem::CompareTo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xdfd59c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>"
constexpr  GlobalNamespace::BeatmapDataItem::operator ::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*() noexcept {
return static_cast<::System::IComparable_1<::GlobalNamespace::BeatmapDataItem*>*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::BeatmapDataItem::__set__time_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::BeatmapDataItem::__get__time_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::BeatmapDataItem::__get__time_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::BeatmapDataItem::__set__executionOrder_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__get__executionOrder_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__get__executionOrder_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void GlobalNamespace::BeatmapDataItem::__set_subtypeIdentifier(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::BeatmapDataItem::__get_subtypeIdentifier()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::BeatmapDataItem::__get_subtypeIdentifier() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::BeatmapDataItem::__set_type(::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, 0x1c>(this, std::forward<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>(value));
}
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType& GlobalNamespace::BeatmapDataItem::__get_type()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, 0x1c>(this);
}
constexpr ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType const& GlobalNamespace::BeatmapDataItem::__get_type() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType, 0x1c>(this);
}
inline float_t GlobalNamespace::BeatmapDataItem::get_time()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "get_time",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_executionOrder()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "get_executionOrder",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::get_subtypeGroupIdentifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "get_subtypeGroupIdentifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::New_ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  type)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataItem*>(time, executionOrder, subtypeIdentifier, type));
}
inline void GlobalNamespace::BeatmapDataItem::_ctor(float_t  time, int32_t  executionOrder, int32_t  subtypeIdentifier, ::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapDataItem__BeatmapDataItemType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, time, executionOrder, subtypeIdentifier, type);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::BeatmapDataItem::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "GetCopy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapDataItem::CompareTo(::GlobalNamespace::BeatmapDataItem*  b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataItem*>::get(),
                            "CompareTo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, b);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
