#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__CallbackArray_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void UnityEngine::InputSystem::__InputActionMap__Flags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionMap__Flags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionMap__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags::__InputActionMap__Flags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags  UnityEngine::InputSystem::__InputActionMap__Flags::NeedToResolveBindings{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags  UnityEngine::InputSystem::__InputActionMap__Flags::BindingResolutionNeedsFullReResolve{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags  UnityEngine::InputSystem::__InputActionMap__Flags::ControlsForEachActionInitialized{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags  UnityEngine::InputSystem::__InputActionMap__Flags::BindingsForEachActionInitialized{static_cast<int32_t>(0x8)};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.IndexOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::__InputActionMap__DeviceArray::IndexOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a3db38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Remove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Remove)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a3db94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)()>(&::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Get)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2a380d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__DeviceArray.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionMap__DeviceArray::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::__InputActionMap__DeviceArray::Set)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2a381c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__DeviceArray::__set_m_HaveValue(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_HaveValue()  {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_HaveValue() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__DeviceArray::__set_m_DeviceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_DeviceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_DeviceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__DeviceArray::__set_m_DeviceArray(::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_DeviceArray()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*> const& UnityEngine::InputSystem::__InputActionMap__DeviceArray::__get_m_DeviceArray() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline int32_t UnityEngine::InputSystem::__InputActionMap__DeviceArray::IndexOf(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "IndexOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, device);
}
inline bool UnityEngine::InputSystem::__InputActionMap__DeviceArray::Remove(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Remove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, device);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::__InputActionMap__DeviceArray::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionMap__DeviceArray::Set(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  devices)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, devices);
}
// Ctor Parameters [CppParam { name: "m_HaveValue", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeviceArray", ty: "::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray::__InputActionMap__DeviceArray(bool  m_HaveValue, int32_t  m_DeviceCount, ::ArrayW<::UnityEngine::InputSystem::InputDevice*,::Array<::UnityEngine::InputSystem::InputDevice*>*>  m_DeviceArray) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_HaveValue = m_HaveValue;
this->m_DeviceCount = m_DeviceCount;
this->m_DeviceArray = m_DeviceArray;
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__set_bindings(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>* UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__get_bindings()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*> UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "bindings", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideListJson::__InputActionMap__BindingOverrideListJson(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>*  bindings) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->bindings = bindings;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson.FromBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson (*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::FromBinding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2a3dc08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__set_action(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_action()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_action() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__set_path(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_path()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__set_interactions(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_interactions()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__set_processors(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_processors()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::FromBinding(::UnityEngine::InputSystem::InputBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson, false>(nullptr, ___internal_method, binding);
}
// Ctor Parameters [CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingOverrideJson::__InputActionMap__BindingOverrideJson(::StringW  action, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->action = action;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingJson.ToBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::__InputActionMap__BindingJson::*)()>(&::UnityEngine::InputSystem::__InputActionMap__BindingJson::ToBinding)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a3dc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                            "ToBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__BindingJson.FromBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__BindingJson (*)(ByRef<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::__InputActionMap__BindingJson::FromBinding)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a3dd40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_path(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_path()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_interactions(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_interactions()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_processors(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_processors()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_groups(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_groups()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_groups() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_action(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_action()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_action() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_isComposite(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_isComposite()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_isComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__BindingJson::__set_isPartOfComposite(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_isPartOfComposite()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__BindingJson::__get_isPartOfComposite() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::__InputActionMap__BindingJson::ToBinding()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                            "ToBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputActionMap__BindingJson UnityEngine::InputSystem::__InputActionMap__BindingJson::FromBinding(ByRef<::UnityEngine::InputSystem::InputBinding>  binding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__BindingJson>::get(),
                            "FromBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__BindingJson, false>(nullptr, ___internal_method, binding);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "groups", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "action", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "isComposite", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isPartOfComposite", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__BindingJson::__InputActionMap__BindingJson(::StringW  name, ::StringW  id, ::StringW  path, ::StringW  interactions, ::StringW  processors, ::StringW  groups, ::StringW  action, bool  isComposite, bool  isPartOfComposite) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->name = name;
this->id = id;
this->path = path;
this->interactions = interactions;
this->processors = processors;
this->groups = groups;
this->action = action;
this->isComposite = isComposite;
this->isPartOfComposite = isPartOfComposite;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson.ToAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::*)(::StringW)>(&::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::ToAction)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2a3ddd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>::get(),
                            "ToAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_type()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_expectedControlType(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_expectedControlType()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_expectedControlType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_expectedControlLayout(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_expectedControlLayout()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_expectedControlLayout() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_processors(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_processors()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_interactions(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_interactions()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_passThrough(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_passThrough()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_passThrough() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_initialStateCheck(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_initialStateCheck()  {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_initialStateCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_bindings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x40>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
/// @param actionName: ::StringW (default: csnull)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputActionMap__ReadActionJson::ToAction(::StringW  actionName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>::get(),
                            "ToAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, actionName);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlLayout", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "passThrough", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadActionJson::__InputActionMap__ReadActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  expectedControlLayout, ::StringW  processors, ::StringW  interactions, bool  passThrough, bool  initialStateCheck, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept : ::bs_hook::ValueTypeWrapper<0x48>() {this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->expectedControlLayout = expectedControlLayout;
this->processors = processors;
this->interactions = interactions;
this->passThrough = passThrough;
this->initialStateCheck = initialStateCheck;
this->bindings = bindings;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson.FromAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson (*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::__InputActionMap__WriteActionJson::FromAction)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a3e02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>::get(),
                            "FromAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_type()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_expectedControlType(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_expectedControlType()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_expectedControlType() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_processors(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_processors()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_processors() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_interactions(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_interactions()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_interactions() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__set_initialStateCheck(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_initialStateCheck()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__get_initialStateCheck() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson UnityEngine::InputSystem::__InputActionMap__WriteActionJson::FromAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>::get(),
                            "FromAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson, false>(nullptr, ___internal_method, action);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "expectedControlType", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "processors", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "interactions", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "initialStateCheck", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteActionJson::__InputActionMap__WriteActionJson(::StringW  name, ::StringW  type, ::StringW  id, ::StringW  expectedControlType, ::StringW  processors, ::StringW  interactions, bool  initialStateCheck) noexcept : ::bs_hook::ValueTypeWrapper<0x38>() {this->name = name;
this->type = type;
this->id = id;
this->expectedControlType = expectedControlType;
this->processors = processors;
this->interactions = interactions;
this->initialStateCheck = initialStateCheck;
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_actions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> const& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_bindings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadMapJson::__InputActionMap__ReadMapJson(::StringW  name, ::StringW  id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson.FromMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::__InputActionMap__WriteMapJson::FromMap)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2a3e0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__set_id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_actions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*> const& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__set_bindings(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_bindings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*> const& UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__get_bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson UnityEngine::InputSystem::__InputActionMap__WriteMapJson::FromMap(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson, false>(nullptr, ___internal_method, map);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "bindings", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteMapJson::__InputActionMap__WriteMapJson(::StringW  name, ::StringW  id, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__BindingJson,::Array<::UnityEngine::InputSystem::__InputActionMap__BindingJson>*>  bindings) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->name = name;
this->id = id;
this->actions = actions;
this->bindings = bindings;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson.FromMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson (*)(::UnityEngine::InputSystem::InputActionMap*)>(&::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a3da44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson.FromMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(&::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMaps)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x2a38790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(),
                            "FromMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>& UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__get_maps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> const& UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMap(::UnityEngine::InputSystem::InputActionMap*  map)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(),
                            "FromMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionMap*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, map);
}
inline ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson UnityEngine::InputSystem::__InputActionMap__WriteFileJson::FromMaps(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson>::get(),
                            "FromMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputActionMap__WriteFileJson, false>(nullptr, ___internal_method, maps);
}
// Ctor Parameters [CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__WriteFileJson::__InputActionMap__WriteFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  maps) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->maps = maps;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson.ToMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> (::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::*)()>(&::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::ToMaps)> {
  constexpr static std::size_t size = 0xfb0;
  constexpr static std::size_t addrs = 0x2a3a2e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson>::get(),
                            "ToMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__set_actions(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>& UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__get_actions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*> const& UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__get_actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>& UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__get_maps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> const& UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> UnityEngine::InputSystem::__InputActionMap__ReadFileJson::ToMaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionMap__ReadFileJson>::get(),
                            "ToMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "actions", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionMap__ReadFileJson::__InputActionMap__ReadFileJson(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadActionJson>*>  actions, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  maps) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->actions = actions;
this->maps = maps;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3b710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_asset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3b718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_id)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3b720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_idDontGenerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_idDontGenerate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a39208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a37df8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_actions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_actions)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a3b660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a3b7b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.UnityEngine_InputSystem_IInputActionCollection2_get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3b818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "UnityEngine.InputSystem.IInputActionCollection2.get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlSchemes)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a3b87c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a3b900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingMask)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2a3b910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_devices)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a36f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionMap::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a3ba4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::get_Item)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2a3ba90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.add_actionTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::add_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3bb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "add_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.remove_actionTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*)>(&::UnityEngine::InputSystem::InputActionMap::remove_actionTriggered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3bbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "remove_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a36e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2a3bc28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2a3bc58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2a3bc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpActionLookupTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2a3be70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "SetUpActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearActionLookupTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a3bf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ClearActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindActionIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindActionIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a3bfe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a38d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionMap::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionMap::FindAction)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2a39358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.IsUsableWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a39720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Enable)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2a39998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Disable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a39b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::Clone)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x2a3c07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_ICloneable_Clone
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3c298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::Contains)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2a3c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a3c2c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a3c390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3c430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_needToResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3c434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_needToResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a3c440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingResolutionNeedsFullReResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3c45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingResolutionNeedsFullReResolve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a3c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_controlsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3c484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_controlsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a3c490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.get_bindingsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a3c4ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.set_bindingsForEachActionInitialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a3c4b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetBindingsForSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a35c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetBindingsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GetControlsForSingleAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a35d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetControlsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.SetUpPerActionControlAndBindingArrays
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x2a3c4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "SetUpPerActionControlAndBindingArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnWantToChangeSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2a39d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnSetupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnSetupChanged)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2a3a03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBindingModified
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBindingModified)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2a3caec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnBindingModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ClearCachedActionData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::ClearCachedActionData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a3cac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ClearCachedActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.GenerateId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::GenerateId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a3b784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.LazyResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)(bool)>(&::UnityEngine::InputSystem::InputActionMap::LazyResolveBindings)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a35bb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "LazyResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindingsIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a35d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ResolveBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ResolveBindings)> {
  constexpr static std::size_t size = 0xbc8;
  constexpr static std::size_t addrs = 0x2a3cb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionMap::FindBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a38f5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FindBindingRelativeToMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionMap::*)(::UnityEngine::InputSystem::InputBinding)>(&::UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a3d7b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindBindingRelativeToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionMap::FromJson)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2a3d868;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*)>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a3d91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::ToJson)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a3d9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3dad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionMap.OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionMap::*)()>(&::UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3dad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::InputActionMap::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__get_m_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Id(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::InputActionMap::__get_m_Id()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::InputSystem::InputActionMap::__get_m_Id() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Asset(::UnityEngine::InputSystem::InputActionAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this, std::forward<::UnityEngine::InputSystem::InputActionAsset*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionMap::__get_m_Asset()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> UnityEngine::InputSystem::InputActionMap::__get_m_Asset() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Actions(::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>, 0x28>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>& UnityEngine::InputSystem::InputActionMap::__get_m_Actions()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>, 0x28>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_Actions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputAction*,::Array<::UnityEngine::InputSystem::InputAction*>*>, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Bindings(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x30>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& UnityEngine::InputSystem::InputActionMap::__get_m_Bindings()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x30>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_Bindings() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_BindingsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x38>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& UnityEngine::InputSystem::InputActionMap::__get_m_BindingsForEachAction()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x38>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_BindingsForEachAction() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x38>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_ControlsForEachAction(::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>, 0x40>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>& UnityEngine::InputSystem::InputActionMap::__get_m_ControlsForEachAction()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>, 0x40>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_ControlsForEachAction() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>, 0x40>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_EnabledActionsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__get_m_EnabledActionsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__get_m_EnabledActionsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_SingletonAction(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x50>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::__get_m_SingletonAction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::InputActionMap::__get_m_SingletonAction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x50>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_MapIndexInState(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x58>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__get_m_MapIndexInState()  {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__get_m_MapIndexInState() const {
return ::cordl_internals::getInstanceField<int32_t, 0x58>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_State(::UnityEngine::InputSystem::InputActionState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x60>(this, std::forward<::UnityEngine::InputSystem::InputActionState*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionMap::__get_m_State()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> UnityEngine::InputSystem::InputActionMap::__get_m_State() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x60>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x68>(this, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionMap::__get_m_BindingMask()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x68>(this);
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionMap::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x68>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Flags(::UnityEngine::InputSystem::__InputActionMap__Flags  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputActionMap__Flags, 0xc8>(this, std::forward<::UnityEngine::InputSystem::__InputActionMap__Flags>(value));
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags& UnityEngine::InputSystem::InputActionMap::__get_m_Flags()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__Flags, 0xc8>(this);
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__Flags const& UnityEngine::InputSystem::InputActionMap::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__Flags, 0xc8>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_ParameterOverridesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xcc>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverridesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverridesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xcc>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0xd0>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>& UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverrides()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0xd0>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_ParameterOverrides() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0xd0>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xd8>(this, std::forward<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>(value));
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& UnityEngine::InputSystem::InputActionMap::__get_m_Devices()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xd8>(this);
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& UnityEngine::InputSystem::InputActionMap::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xd8>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_ActionCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xe8>(this, std::forward<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>& UnityEngine::InputSystem::InputActionMap::__get_m_ActionCallbacks()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xe8>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*> const& UnityEngine::InputSystem::InputActionMap::__get_m_ActionCallbacks() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>, 0xe8>(this);
}
constexpr void UnityEngine::InputSystem::InputActionMap::__set_m_ActionIndexByNameOrId(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x138>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* UnityEngine::InputSystem::InputActionMap::__get_m_ActionIndexByNameOrId()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*> UnityEngine::InputSystem::InputActionMap::__get_m_ActionIndexByNameOrId() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, 0x138>(this);
}
inline void UnityEngine::InputSystem::InputActionMap::setStaticF_s_DeferBindingResolution(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::InputSystem::InputActionMap::getStaticF_s_DeferBindingResolution()  {
return ::cordl_internals::getStaticField<int32_t, "s_DeferBindingResolution", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get>();
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionMap::get_asset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionAsset*, false>(*this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline ::System::Guid UnityEngine::InputSystem::InputActionMap::get_idDontGenerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_idDontGenerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::InputActionMap::get_actions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_actions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionMap::UnityEngine_InputSystem_IInputActionCollection2_get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "UnityEngine.InputSystem.IInputActionCollection2.get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionMap::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>, false>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionMap::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::get_Item(::StringW  actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, actionNameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::add_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "add_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputActionMap::remove_actionTriggered(::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "remove_actionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::__InputAction__CallbackContext>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputActionMap*>());
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::New_ctor(::StringW  name)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputActionMap*>(name));
}
inline void UnityEngine::InputSystem::InputActionMap::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name);
}
inline void UnityEngine::InputSystem::InputActionMap::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::StringW  nameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, nameOrId);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "SetUpActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ClearActionLookupTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ClearActionLookupTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindActionIndex(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindActionIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, id);
}
/// @param throwIfNotFound: bool (default: false)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::StringW  actionNameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionMap::FindAction(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, id);
}
inline bool UnityEngine::InputSystem::InputActionMap::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionMap::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionMap::Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::InputActionMap::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "System.ICloneable.Clone",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::Contains(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, action);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionMap::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionMap::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_needToResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_needToResolveBindings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_needToResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingResolutionNeedsFullReResolve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingResolutionNeedsFullReResolve(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingResolutionNeedsFullReResolve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_controlsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_controlsForEachActionInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_controlsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::InputActionMap::get_bindingsForEachActionInitialized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "get_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::set_bindingsForEachActionInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "set_bindingsForEachActionInitialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionMap::GetBindingsForSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetBindingsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method, action);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputActionMap::GetControlsForSingleAction(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GetControlsForSingleAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>, false>(*this, ___internal_method, action);
}
inline void UnityEngine::InputSystem::InputActionMap::SetUpPerActionControlAndBindingArrays()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "SetUpPerActionControlAndBindingArrays",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBindingModified()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnBindingModified",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
/// @param onlyControls: bool (default: false)
inline void UnityEngine::InputSystem::InputActionMap::ClearCachedActionData(bool  onlyControls)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ClearCachedActionData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, onlyControls);
}
inline void UnityEngine::InputSystem::InputActionMap::GenerateId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "GenerateId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionMap::LazyResolveBindings(bool  fullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "LazyResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, fullResolve);
}
inline bool UnityEngine::InputSystem::InputActionMap::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::ResolveBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ResolveBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ByRef<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, mask, action);
}
inline int32_t UnityEngine::InputSystem::InputActionMap::FindBindingRelativeToMap(::UnityEngine::InputSystem::InputBinding  mask)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FindBindingRelativeToMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, mask);
}
inline ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> UnityEngine::InputSystem::InputActionMap::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>, false>(nullptr, ___internal_method, json);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson(::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*  maps)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputActionMap*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, maps);
}
inline ::StringW UnityEngine::InputSystem::InputActionMap::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionMap::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionMap*>::get(),
                            "OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
