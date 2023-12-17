#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlScheme_def.hpp"
#include "UnityEngine/InputSystem/zzzz__IInputActionCollection_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionRebindingExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_maps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*> const& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_controlSchemes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> const& UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__get_controlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionAsset__WriteFileJson::__InputActionAsset__WriteFileJson(::StringW  name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__WriteMapJson>*>  maps, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>  controlSchemes) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson.ToAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::ToAsset)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a38bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson>::get(),
                            "ToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__set_maps(::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_maps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*> const& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_maps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__set_controlSchemes(::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_controlSchemes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*> const& UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__get_controlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::ToAsset(::UnityEngine::InputSystem::InputActionAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson>::get(),
                            "ToAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputActionAsset*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, asset);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "maps", ty: "::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "controlSchemes", ty: "::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::InputSystem::__InputActionAsset__ReadFileJson::__InputActionAsset__ReadFileJson(::StringW  name, ::ArrayW<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson,::Array<::UnityEngine::InputSystem::__InputActionMap__ReadMapJson>*>  maps, ::ArrayW<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson,::Array<::UnityEngine::InputSystem::__InputControlScheme__SchemeJson>*>  controlSchemes) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->name = name;
this->maps = maps;
this->controlSchemes = controlSchemes;
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)(int32_t)>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a37ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3b294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2a3b298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputBinding (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a3b3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a3b3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a3b434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2a3b498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3b53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>"
constexpr  UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>"
constexpr  UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set___2__current(::UnityEngine::InputSystem::InputBinding  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputBinding, 0x18>(this, std::forward<::UnityEngine::InputSystem::InputBinding>(value));
}
constexpr ::UnityEngine::InputSystem::InputBinding& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___2__current()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputBinding, 0x18>(this);
}
constexpr ::UnityEngine::InputSystem::InputBinding const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputBinding, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set___l__initialThreadId(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x70>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___l__initialThreadId()  {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x70>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set___4__this(::UnityEngine::InputSystem::InputActionAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x78>(this, std::forward<::UnityEngine::InputSystem::InputActionAsset*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x78>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set__numActionMaps_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x80>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__numActionMaps_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__numActionMaps_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x80>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set__i_5__3(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x84>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__i_5__3()  {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__i_5__3() const {
return ::cordl_internals::getInstanceField<int32_t, 0x84>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set__bindings_5__4(::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x88>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__bindings_5__4()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x88>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*> const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__bindings_5__4() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputBinding,::Array<::UnityEngine::InputSystem::InputBinding>*>, 0x88>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set__numBindings_5__5(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__numBindings_5__5()  {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__numBindings_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__set__n_5__6(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x94>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__n_5__6()  {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::__get__n_5__6() const {
return ::cordl_internals::getInstanceField<int32_t, 0x94>(this);
}
inline ::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8* UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputBinding UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputBinding, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputBinding>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___get_bindings_d__8*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)(int32_t)>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a39c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a3b540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a3b544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3b6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a3b6c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::*)()>(&::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3b708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set___2__current(::UnityEngine::InputSystem::InputAction*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputAction*, 0x18>(this, std::forward<::UnityEngine::InputSystem::InputAction*>(value));
}
constexpr ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___2__current()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___2__current() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputAction*, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set___4__this(::UnityEngine::InputSystem::InputActionAsset*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this, std::forward<::UnityEngine::InputSystem::InputActionAsset*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___4__this()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionAsset*> UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get___4__this() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionAsset*, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set__i_5__2(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__i_5__2()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__i_5__2() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set__actions_5__3(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>, 0x30>(this, std::forward<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>>(value));
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__actions_5__3()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>, 0x30>(this);
}
constexpr ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*> const& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__actions_5__3() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputAction*>, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set__actionCount_5__4(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__actionCount_5__4()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__actionCount_5__4() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__set__n_5__5(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__n_5__5()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::__get__n_5__5() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
inline ::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31* UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputAction__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputAction>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputActionAsset___GetEnumerator_d__31*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_enabled
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_enabled)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a37c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_actionMaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_actionMaps)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a37d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_actionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_controlSchemes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_controlSchemes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2a37e08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindings)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a37e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_bindingMask)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a37f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_bindingMask
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>)>(&::UnityEngine::InputSystem::InputActionAsset::set_bindingMask)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2a37f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::get_devices)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2a380a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.set_devices
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>)>(&::UnityEngine::InputSystem::InputActionAsset::set_devices)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2a3817c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.get_Item
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2a3833c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ToJson)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a386f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.LoadFromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::LoadFromJson)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a38b18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "LoadFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionAsset* (*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FromJson)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a38c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2a383c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindBinding
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputBinding, ByRef<::UnityEngine::InputSystem::InputAction*>)>(&::UnityEngine::InputSystem::InputActionAsset::FindBinding)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a38e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW, bool)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2a3903c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindActionMap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputActionMap* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindActionMap)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a39250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputAction* (::UnityEngine::InputSystem::InputActionAsset::*)(::System::Guid)>(&::UnityEngine::InputSystem::InputActionAsset::FindAction)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a392dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlSchemeIndex
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a393a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindControlSchemeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.FindControlScheme
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> (::UnityEngine::InputSystem::InputActionAsset::*)(::StringW)>(&::UnityEngine::InputSystem::InputActionAsset::FindControlScheme)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a3947c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.IsUsableWithDevice
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2a395ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Enable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Enable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2a39838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Disable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::Disable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2a399e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.Contains
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::InputActionAsset::*)(::UnityEngine::InputSystem::InputAction*)>(&::UnityEngine::InputSystem::InputActionAsset::Contains)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a39b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::GetEnumerator)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a39c04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a39c94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.MarkAsDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::MarkAsDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a39c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "MarkAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnWantToChangeSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a39c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnSetupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnSetupChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a39fb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ReResolveIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)(bool)>(&::UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2a38060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ReResolveIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.ResolveBindingsIfNecessary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a3a214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2a3a2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputActionAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::InputActionAsset::*)()>(&::UnityEngine::InputSystem::InputActionAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a3a2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection2"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection2*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection2*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::InputSystem::IInputActionCollection"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::UnityEngine::InputSystem::IInputActionCollection*() noexcept {
return static_cast<::UnityEngine::InputSystem::IInputActionCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputAction*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::InputActionAsset::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_ActionMaps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>& UnityEngine::InputSystem::InputActionAsset::__get_m_ActionMaps()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*> const& UnityEngine::InputSystem::InputActionAsset::__get_m_ActionMaps() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputActionMap*,::Array<::UnityEngine::InputSystem::InputActionMap*>*>, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_ControlSchemes(::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>& UnityEngine::InputSystem::InputActionAsset::__get_m_ControlSchemes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*> const& UnityEngine::InputSystem::InputActionAsset::__get_m_ControlSchemes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::InputControlScheme,::Array<::UnityEngine::InputSystem::InputControlScheme>*>, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_SharedStateForAllMaps(::UnityEngine::InputSystem::InputActionState*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x28>(this, std::forward<::UnityEngine::InputSystem::InputActionState*>(value));
}
constexpr ::UnityEngine::InputSystem::InputActionState* UnityEngine::InputSystem::InputActionAsset::__get_m_SharedStateForAllMaps()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionState*> UnityEngine::InputSystem::InputActionAsset::__get_m_SharedStateForAllMaps() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::InputActionState*, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_BindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x30>(this, std::forward<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>(value));
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>& UnityEngine::InputSystem::InputActionAsset::__get_m_BindingMask()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x30>(this);
}
constexpr ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> const& UnityEngine::InputSystem::InputActionAsset::__get_m_BindingMask() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_ParameterOverridesCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x90>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverridesCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverridesCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x90>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_ParameterOverrides(::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0x98>(this, std::forward<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>& UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverrides()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0x98>(this);
}
constexpr ::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*> const& UnityEngine::InputSystem::InputActionAsset::__get_m_ParameterOverrides() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride,::Array<::UnityEngine::InputSystem::__InputActionRebindingExtensions__ParameterOverride>*>, 0x98>(this);
}
constexpr void UnityEngine::InputSystem::InputActionAsset::__set_m_Devices(::UnityEngine::InputSystem::__InputActionMap__DeviceArray  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xa0>(this, std::forward<::UnityEngine::InputSystem::__InputActionMap__DeviceArray>(value));
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray& UnityEngine::InputSystem::InputActionAsset::__get_m_Devices()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xa0>(this);
}
constexpr ::UnityEngine::InputSystem::__InputActionMap__DeviceArray const& UnityEngine::InputSystem::InputActionAsset::__get_m_Devices() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::__InputActionMap__DeviceArray, 0xa0>(this);
}
inline bool UnityEngine::InputSystem::InputActionAsset::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_enabled",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*> UnityEngine::InputSystem::InputActionAsset::get_actionMaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_actionMaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputActionMap*>, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::get_controlSchemes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_controlSchemes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControlScheme>, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>* UnityEngine::InputSystem::InputActionAsset::get_bindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_bindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputBinding>*, false>(*this, ___internal_method);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputBinding> UnityEngine::InputSystem::InputActionAsset::get_bindingMask()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_bindingMask(::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "set_bindingMask",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::InputBinding>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>> UnityEngine::InputSystem::InputActionAsset::get_devices()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::set_devices(::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "set_devices",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::get_Item(::StringW  actionNameOrId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "get_Item",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, actionNameOrId);
}
inline ::StringW UnityEngine::InputSystem::InputActionAsset::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::LoadFromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "LoadFromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, json);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionAsset::FromJson(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionAsset*, false>(nullptr, ___internal_method, json);
}
/// @param throwIfNotFound: bool (default: false)
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::StringW  actionNameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, actionNameOrId, throwIfNotFound);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindBinding(::UnityEngine::InputSystem::InputBinding  mask, ByRef<::UnityEngine::InputSystem::InputAction*>  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindBinding",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputBinding>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputAction*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, mask, action);
}
/// @param throwIfNotFound: bool (default: false)
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::StringW  nameOrId, bool  throwIfNotFound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(*this, ___internal_method, nameOrId, throwIfNotFound);
}
inline ::UnityEngine::InputSystem::InputActionMap* UnityEngine::InputSystem::InputActionAsset::FindActionMap(::System::Guid  id)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindActionMap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputActionMap*, false>(*this, ___internal_method, id);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::InputSystem::InputActionAsset::FindAction(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*, false>(*this, ___internal_method, guid);
}
inline int32_t UnityEngine::InputSystem::InputActionAsset::FindControlSchemeIndex(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindControlSchemeIndex",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, name);
}
inline ::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme> UnityEngine::InputSystem::InputActionAsset::FindControlScheme(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "FindControlScheme",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::InputSystem::InputControlScheme>, false>(*this, ___internal_method, name);
}
inline bool UnityEngine::InputSystem::InputActionAsset::IsUsableWithDevice(::UnityEngine::InputSystem::InputDevice*  device)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "IsUsableWithDevice",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputActionAsset::Enable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Enable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::Disable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Disable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputActionAsset::Contains(::UnityEngine::InputSystem::InputAction*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "Contains",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputAction*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, action);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputActionAsset::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::InputAction*>*, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputActionAsset::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::MarkAsDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "MarkAsDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnWantToChangeSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnWantToChangeSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnSetupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnSetupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::ReResolveIfNecessary(bool  fullResolve)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ReResolveIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, fullResolve);
}
inline void UnityEngine::InputSystem::InputActionAsset::ResolveBindingsIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "ResolveBindingsIfNecessary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::InputActionAsset::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputActionAsset* UnityEngine::InputSystem::InputActionAsset::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::InputActionAsset*>());
}
inline void UnityEngine::InputSystem::InputActionAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputActionAsset*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
