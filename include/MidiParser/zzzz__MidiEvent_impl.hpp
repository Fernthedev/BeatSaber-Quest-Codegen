#pragma once
#include "MidiParser/zzzz__MidiEvent_def.hpp"
#include "MidiParser/zzzz__MetaEventType_def.hpp"
//  Writing Method size for method: ::MidiParser::MidiEvent.get_MetaEventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MidiParser::MetaEventType (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_MetaEventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e6720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_MetaEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Channel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e6728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Channel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Note
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Note)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e6730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Note",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e6738;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MidiParser::MidiEvent.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MidiParser::MidiEvent::*)()>(&::MidiParser::MidiEvent::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e6740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void MidiParser::MidiEvent::__set_AbsoluteTicksTime(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& MidiParser::MidiEvent::__get_AbsoluteTicksTime()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& MidiParser::MidiEvent::__get_AbsoluteTicksTime() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void MidiParser::MidiEvent::__set_Type(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& MidiParser::MidiEvent::__get_Type()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& MidiParser::MidiEvent::__get_Type() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void MidiParser::MidiEvent::__set_Arg1(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& MidiParser::MidiEvent::__get_Arg1()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& MidiParser::MidiEvent::__get_Arg1() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void MidiParser::MidiEvent::__set_Arg2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& MidiParser::MidiEvent::__get_Arg2()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& MidiParser::MidiEvent::__get_Arg2() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void MidiParser::MidiEvent::__set_Arg3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& MidiParser::MidiEvent::__get_Arg3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& MidiParser::MidiEvent::__get_Arg3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::MidiParser::MetaEventType MidiParser::MidiEvent::get_MetaEventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_MetaEventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::MidiParser::MetaEventType, false>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Channel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Channel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Note()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Note",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t MidiParser::MidiEvent::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MidiParser::MidiEvent>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "AbsoluteTicksTime", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Arg1", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Arg2", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Arg3", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MidiParser::MidiEvent::MidiEvent(int32_t  AbsoluteTicksTime, uint8_t  Type, int32_t  Arg1, int32_t  Arg2, int32_t  Arg3) noexcept : ::bs_hook::ValueTypeWrapper<0x14>() {this->AbsoluteTicksTime = AbsoluteTicksTime;
this->Type = Type;
this->Arg1 = Arg1;
this->Arg2 = Arg2;
this->Arg3 = Arg3;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
