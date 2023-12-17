#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Tayx/Graphy/Utils/zzzz__G_Singleton_1_impl.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "Tayx/Graphy/zzzz__GraphyDebugger_def.hpp"
#include "Tayx/Graphy/Ram/zzzz__G_RamMonitor_def.hpp"
#include "Tayx/Graphy/Audio/zzzz__G_AudioMonitor_def.hpp"
#include "Tayx/Graphy/Fps/zzzz__G_FpsMonitor_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
constexpr void Tayx::Graphy::__GraphyDebugger__DebugVariable::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__DebugVariable::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__DebugVariable::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable::__GraphyDebugger__DebugVariable(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Min{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Max{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Fps_Avg{static_cast<int32_t>(0x3)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Allocated{static_cast<int32_t>(0x4)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Reserved{static_cast<int32_t>(0x5)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Ram_Mono{static_cast<int32_t>(0x6)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable  Tayx::Graphy::__GraphyDebugger__DebugVariable::Audio_DB{static_cast<int32_t>(0x7)};
constexpr void Tayx::Graphy::__GraphyDebugger__DebugComparer::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__DebugComparer::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__DebugComparer::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer::__GraphyDebugger__DebugComparer(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Tayx::Graphy::__GraphyDebugger__DebugComparer::Less_than{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals_or_less_than{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals{static_cast<int32_t>(0x2)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Tayx::Graphy::__GraphyDebugger__DebugComparer::Equals_or_greater_than{static_cast<int32_t>(0x3)};
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Tayx::Graphy::__GraphyDebugger__DebugComparer::Greater_than{static_cast<int32_t>(0x4)};
constexpr void Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::__GraphyDebugger__ConditionEvaluation(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation  Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::All_conditions_must_be_met{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation  Tayx::Graphy::__GraphyDebugger__ConditionEvaluation::Only_one_condition_has_to_be_met{static_cast<int32_t>(0x1)};
constexpr void Tayx::Graphy::__GraphyDebugger__MessageType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__MessageType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__MessageType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType::__GraphyDebugger__MessageType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType  Tayx::Graphy::__GraphyDebugger__MessageType::Log{static_cast<int32_t>(0x0)};
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType  Tayx::Graphy::__GraphyDebugger__MessageType::Warning{static_cast<int32_t>(0x1)};
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType  Tayx::Graphy::__GraphyDebugger__MessageType::Error{static_cast<int32_t>(0x2)};
constexpr void Tayx::Graphy::__GraphyDebugger__DebugCondition::__set_Variable(::Tayx::Graphy::__GraphyDebugger__DebugVariable  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugVariable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Tayx::Graphy::__GraphyDebugger__DebugVariable>(value));
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Variable()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugVariable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugVariable const& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Variable() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugVariable, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugCondition::__set_Comparer(::Tayx::Graphy::__GraphyDebugger__DebugComparer  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugComparer, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::Tayx::Graphy::__GraphyDebugger__DebugComparer>(value));
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Comparer()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugComparer, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugComparer const& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Comparer() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__DebugComparer, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugCondition::__set_Value(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<float_t>(value));
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Value()  {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugCondition::__get_Value() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "Variable", ty: "::Tayx::Graphy::__GraphyDebugger__DebugVariable", modifiers: "", def_value: Some("{}") }, CppParam { name: "Comparer", ty: "::Tayx::Graphy::__GraphyDebugger__DebugComparer", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tayx::Graphy::__GraphyDebugger__DebugCondition::__GraphyDebugger__DebugCondition(::Tayx::Graphy::__GraphyDebugger__DebugVariable  Variable, ::Tayx::Graphy::__GraphyDebugger__DebugComparer  Comparer, float_t  Value) noexcept : ::bs_hook::ValueTypeWrapper<0xc>() {this->Variable = Variable;
this->Comparer = Comparer;
this->Value = Value;
}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.get_Check
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::get_Check)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a005d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "get_Check",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::Update)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x29ffed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket.Executed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::Executed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a005cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "Executed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger__DebugPacket._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger__DebugPacket::*)()>(&::Tayx::Graphy::__GraphyDebugger__DebugPacket::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x29ff4c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Active(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Active()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Active() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Id(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Id()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Id() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ExecuteOnce(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteOnce()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteOnce() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_InitSleepTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_InitSleepTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_InitSleepTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ExecuteSleepTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteSleepTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ExecuteSleepTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ConditionEvaluation(::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, 0x24>(this, std::forward<::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation>(value));
}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ConditionEvaluation()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, 0x24>(this);
}
constexpr ::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ConditionEvaluation() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__ConditionEvaluation, 0x24>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_DebugConditions(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>* Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugConditions()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*> Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugConditions() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, 0x28>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_MessageType(::Tayx::Graphy::__GraphyDebugger__MessageType  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::__GraphyDebugger__MessageType, 0x30>(this, std::forward<::Tayx::Graphy::__GraphyDebugger__MessageType>(value));
}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_MessageType()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__MessageType, 0x30>(this);
}
constexpr ::Tayx::Graphy::__GraphyDebugger__MessageType const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_MessageType() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::__GraphyDebugger__MessageType, 0x30>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Message(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Message()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_TakeScreenshot(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_TakeScreenshot()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_TakeScreenshot() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_ScreenshotFileName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ScreenshotFileName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_ScreenshotFileName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_DebugBreak(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugBreak()  {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_DebugBreak() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_UnityEvents(::UnityEngine::Events::UnityEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Events::UnityEvent*, 0x58>(this, std::forward<::UnityEngine::Events::UnityEvent*>(value));
}
constexpr ::UnityEngine::Events::UnityEvent* Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_UnityEvents()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_UnityEvents() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Events::UnityEvent*, 0x58>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_Callbacks(::System::Collections::Generic::List_1<::System::Action*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Action*>*, 0x60>(this, std::forward<::System::Collections::Generic::List_1<::System::Action*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Action*>* Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Callbacks()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Action*>*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Action*>*> Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_Callbacks() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Action*>*, 0x60>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_canBeChecked(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_canBeChecked()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_canBeChecked() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_executed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_executed()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_executed() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void Tayx::Graphy::__GraphyDebugger__DebugPacket::__set_timePassed(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_timePassed()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& Tayx::Graphy::__GraphyDebugger__DebugPacket::__get_timePassed() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
inline bool Tayx::Graphy::__GraphyDebugger__DebugPacket::get_Check()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "get_Check",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::Executed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            "Executed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* Tayx::Graphy::__GraphyDebugger__DebugPacket::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>());
}
inline void Tayx::Graphy::__GraphyDebugger__DebugPacket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::*)()>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ff9a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0._GetFirstDebugPacketWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a005e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                            "<GetFirstDebugPacketWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__set_packetId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__get_packetId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0::_GetFirstDebugPacketWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass18_0*>::get(),
                            "<GetFirstDebugPacketWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::*)()>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ffa8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0._GetAllDebugPacketsWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a00604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                            "<GetAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__set_packetId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__get_packetId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0::_GetAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass19_0*>::get(),
                            "<GetAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::*)()>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29ffc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0._RemoveAllDebugPacketsWithId_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a00628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                            "<RemoveAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__set_packetId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__get_packetId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::__get_packetId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0* Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0::_RemoveAllDebugPacketsWithId_b__0(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c__DisplayClass21_0*>::get(),
                            "<RemoveAllDebugPacketsWithId>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, x);
}
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::__GraphyDebugger____c::*)()>(&::Tayx::Graphy::__GraphyDebugger____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a006b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::__GraphyDebugger____c._CheckDebugPackets_b__24_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::__GraphyDebugger____c::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::__GraphyDebugger____c::_CheckDebugPackets_b__24_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a006b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(),
                            "<CheckDebugPackets>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
inline void Tayx::Graphy::__GraphyDebugger____c::setStaticF___9(::Tayx::Graphy::__GraphyDebugger____c*  value)  {
::cordl_internals::setStaticField<::Tayx::Graphy::__GraphyDebugger____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>(std::forward<::Tayx::Graphy::__GraphyDebugger____c*>(value));
}
inline ::Tayx::Graphy::__GraphyDebugger____c* Tayx::Graphy::__GraphyDebugger____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Tayx::Graphy::__GraphyDebugger____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>();
}
inline void Tayx::Graphy::__GraphyDebugger____c::setStaticF___9__24_0(::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>(std::forward<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*>(value));
}
inline ::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* Tayx::Graphy::__GraphyDebugger____c::getStaticF___9__24_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, "<>9__24_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get>();
}
inline ::Tayx::Graphy::__GraphyDebugger____c* Tayx::Graphy::__GraphyDebugger____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::__GraphyDebugger____c*>());
}
inline void Tayx::Graphy::__GraphyDebugger____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::__GraphyDebugger____c::_CheckDebugPackets_b__24_0(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  packet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::__GraphyDebugger____c*>::get(),
                            "<CheckDebugPackets>b__24_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, packet);
}
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x29fed00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x29fedbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29fee5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x29ff27c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::Tayx::Graphy::__GraphyDebugger__DebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Action*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x29ff324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Action*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x29ff5dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::Tayx::Graphy::__GraphyDebugger__DebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Collections::Generic::List_1<::System::Action*>*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29ff6f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddNewDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*, ::Tayx::Graphy::__GraphyDebugger__MessageType, ::StringW, bool, ::System::Collections::Generic::List_1<::System::Action*>*)>(&::Tayx::Graphy::GraphyDebugger::AddNewDebugPacket)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29ff824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tayx::Graphy::__GraphyDebugger__DebugPacket* (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29ff8d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetAllDebugPacketsWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x29ff9b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x29ffa94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "RemoveFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.RemoveAllDebugPacketsWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(int32_t)>(&::Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x29ffb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "RemoveAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToFirstDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(&::Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29ffc14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddCallbackToFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.AddCallbackToAllDebugPacketWithId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::System::Action*, int32_t)>(&::Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x29ffcec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddCallbackToAllDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckDebugPackets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)()>(&::Tayx::Graphy::GraphyDebugger::CheckDebugPackets)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x29fee60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "CheckDebugPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.CheckIfConditionIsMet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugCondition)>(&::Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x29fff34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "CheckIfConditionIsMet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.GetRequestedValueFromDebugVariable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugVariable)>(&::Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a00400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetRequestedValueFromDebugVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugVariable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tayx::Graphy::GraphyDebugger.ExecuteOperationsInDebugPacket
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Tayx::Graphy::GraphyDebugger::*)(::Tayx::Graphy::__GraphyDebugger__DebugPacket*)>(&::Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2a00044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "ExecuteOperationsInDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_debugPackets(::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* Tayx::Graphy::GraphyDebugger::__get_m_debugPackets()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*> Tayx::Graphy::GraphyDebugger::__get_m_debugPackets() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, 0x18>(this);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_fpsMonitor(::Tayx::Graphy::Fps::G_FpsMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x20>(this, std::forward<::Tayx::Graphy::Fps::G_FpsMonitor*>(value));
}
constexpr ::Tayx::Graphy::Fps::G_FpsMonitor* Tayx::Graphy::GraphyDebugger::__get_m_fpsMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Fps::G_FpsMonitor*> Tayx::Graphy::GraphyDebugger::__get_m_fpsMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Fps::G_FpsMonitor*, 0x20>(this);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_ramMonitor(::Tayx::Graphy::Ram::G_RamMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x28>(this, std::forward<::Tayx::Graphy::Ram::G_RamMonitor*>(value));
}
constexpr ::Tayx::Graphy::Ram::G_RamMonitor* Tayx::Graphy::GraphyDebugger::__get_m_ramMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Ram::G_RamMonitor*> Tayx::Graphy::GraphyDebugger::__get_m_ramMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Ram::G_RamMonitor*, 0x28>(this);
}
constexpr void Tayx::Graphy::GraphyDebugger::__set_m_audioMonitor(::Tayx::Graphy::Audio::G_AudioMonitor*  value)  {
::cordl_internals::setInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x30>(this, std::forward<::Tayx::Graphy::Audio::G_AudioMonitor*>(value));
}
constexpr ::Tayx::Graphy::Audio::G_AudioMonitor* Tayx::Graphy::GraphyDebugger::__get_m_audioMonitor()  {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::Audio::G_AudioMonitor*> Tayx::Graphy::GraphyDebugger::__get_m_audioMonitor() const {
return ::cordl_internals::getInstanceField<::Tayx::Graphy::Audio::G_AudioMonitor*, 0x30>(this);
}
inline ::Tayx::Graphy::GraphyDebugger* Tayx::Graphy::GraphyDebugger::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Tayx::Graphy::GraphyDebugger*>());
}
inline void Tayx::Graphy::GraphyDebugger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  newDebugPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newDebugPacket);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t  newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition  newDebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType  newMessageType, ::StringW  newMessage, bool  newDebugBreak, ::System::Action*  newCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t  newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*  newDebugConditions, ::Tayx::Graphy::__GraphyDebugger__MessageType  newMessageType, ::StringW  newMessage, bool  newDebugBreak, ::System::Action*  newCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallback);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t  newId, ::Tayx::Graphy::__GraphyDebugger__DebugCondition  newDebugCondition, ::Tayx::Graphy::__GraphyDebugger__MessageType  newMessageType, ::StringW  newMessage, bool  newDebugBreak, ::System::Collections::Generic::List_1<::System::Action*>*  newCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newId, newDebugCondition, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline void Tayx::Graphy::GraphyDebugger::AddNewDebugPacket(int32_t  newId, ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*  newDebugConditions, ::Tayx::Graphy::__GraphyDebugger__MessageType  newMessageType, ::StringW  newMessage, bool  newDebugBreak, ::System::Collections::Generic::List_1<::System::Action*>*  newCallbacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddNewDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugCondition>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__MessageType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Action*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newId, newDebugConditions, newMessageType, newMessage, newDebugBreak, newCallbacks);
}
inline ::Tayx::Graphy::__GraphyDebugger__DebugPacket* Tayx::Graphy::GraphyDebugger::GetFirstDebugPacketWithId(int32_t  packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tayx::Graphy::__GraphyDebugger__DebugPacket*, false>(*this, ___internal_method, packetId);
}
inline ::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>* Tayx::Graphy::GraphyDebugger::GetAllDebugPacketsWithId(int32_t  packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>*, false>(*this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveFirstDebugPacketWithId(int32_t  packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "RemoveFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::RemoveAllDebugPacketsWithId(int32_t  packetId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "RemoveAllDebugPacketsWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, packetId);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToFirstDebugPacketWithId(::System::Action*  callback, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddCallbackToFirstDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::AddCallbackToAllDebugPacketWithId(::System::Action*  callback, int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "AddCallbackToAllDebugPacketWithId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, callback, id);
}
inline void Tayx::Graphy::GraphyDebugger::CheckDebugPackets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "CheckDebugPackets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool Tayx::Graphy::GraphyDebugger::CheckIfConditionIsMet(::Tayx::Graphy::__GraphyDebugger__DebugCondition  debugCondition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "CheckIfConditionIsMet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugCondition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, debugCondition);
}
inline float_t Tayx::Graphy::GraphyDebugger::GetRequestedValueFromDebugVariable(::Tayx::Graphy::__GraphyDebugger__DebugVariable  debugVariable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "GetRequestedValueFromDebugVariable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugVariable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, debugVariable);
}
inline void Tayx::Graphy::GraphyDebugger::ExecuteOperationsInDebugPacket(::Tayx::Graphy::__GraphyDebugger__DebugPacket*  debugPacket)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Tayx::Graphy::GraphyDebugger*>::get(),
                            "ExecuteOperationsInDebugPacket",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tayx::Graphy::__GraphyDebugger__DebugPacket*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, debugPacket);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
