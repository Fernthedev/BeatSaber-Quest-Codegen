#pragma once
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateTypeInfo_def.hpp"
constexpr void UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer::__set_FixedElementField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer::__get_FixedElementField()  {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer::__AndroidSensorState___data_e__FixedBuffer(float_t  FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->FixedElementField = FixedElementField;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.WithData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)(::ArrayW<float_t,::Array<float_t>*>)>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2ae6dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "WithData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState.get_format
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::*)()>(&::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ae6e7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr  UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*()  {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::setStaticF_kFormat(::UnityEngine::InputSystem::Utilities::FourCC  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>(std::forward<::UnityEngine::InputSystem::Utilities::FourCC>(value));
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::getStaticF_kFormat()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::FourCC, "kFormat", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get>();
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__set_data(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer>(value));
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__get_data()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer const& UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::__get_data() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::WithData(::ArrayW<float_t,::Array<float_t>*>  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "WithData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t,::Array<float_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState, false>(*this, ___internal_method, data);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::get_format()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState>::get(),
                            "get_format",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "data", ty: "::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorState::AndroidSensorState(::UnityEngine::InputSystem::Android::LowLevel::__AndroidSensorState___data_e__FixedBuffer  data) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->data = data;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
