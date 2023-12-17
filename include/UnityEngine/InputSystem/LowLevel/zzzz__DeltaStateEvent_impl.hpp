#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
constexpr void UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer::__set_FixedElementField(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer::__get_FixedElementField()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer::__DeltaStateEvent___stateData_e__FixedBuffer(uint8_t  FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper<0x1>() {this->FixedElementField = FixedElementField;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_deltaStateSizeInBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaStateSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ae9570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_deltaStateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_deltaState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<void> (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ae957c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_deltaState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ae9584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.ToEventPtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae95a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2ae95a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.FromUnchecked
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::FromUnchecked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ae96d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "FromUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(::UnityEngine::InputSystem::InputControl*, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2ae96dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr  UnityEngine::InputSystem::LowLevel::DeltaStateEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_baseEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::FourCC, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateFormat()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::FourCC, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateFormat() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::FourCC, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__set_stateOffset(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateOffset()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateOffset() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__set_stateData(::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateData()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__get_stateData() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer, 0x1c>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline uint32_t UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaStateSizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_deltaStateSizeInBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(*this, ___internal_method);
}
inline ::cordl_internals::Ptr<void> UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_deltaState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<void>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::DeltaStateEvent::ToEventPtr()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "ToEventPtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(*this, ___internal_method);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>, false>(nullptr, ___internal_method, ptr);
}
inline ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent> UnityEngine::InputSystem::LowLevel::DeltaStateEvent::FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "FromUnchecked",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>, false>(nullptr, ___internal_method, ptr);
}
/// @param allocator: ::Unity::Collections::Allocator (default: static_cast<int32_t>(0x2))
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From(::UnityEngine::InputSystem::InputControl*  control, ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>  eventPtr, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>, false>(nullptr, ___internal_method, control, eventPtr, allocator);
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateFormat", ty: "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateData", ty: "::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::DeltaStateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent  baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC  stateFormat, uint32_t  stateOffset, ::UnityEngine::InputSystem::LowLevel::__DeltaStateEvent___stateData_e__FixedBuffer  stateData) noexcept : ::bs_hook::ValueTypeWrapper<0x1d>() {this->baseEvent = baseEvent;
this->stateFormat = stateFormat;
this->stateOffset = stateOffset;
this->stateData = stateData;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
