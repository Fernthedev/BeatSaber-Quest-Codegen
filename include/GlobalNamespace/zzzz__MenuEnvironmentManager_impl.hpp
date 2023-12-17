#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuEnvironmentManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
constexpr void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::__MenuEnvironmentManager__MenuEnvironmentType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType::Lobby{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects.get_menuEnvironmentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType (::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            "get_menuEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects.get_wrapper
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            "get_wrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::*)()>(&::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__set__menuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x10>(this, std::forward<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>(value));
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__menuEnvironmentType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x10>(this);
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__menuEnvironmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x10>(this);
}
constexpr void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__set__wrapper(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__wrapper()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::__get__wrapper() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_menuEnvironmentType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            "get_menuEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, false>(*this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::get_wrapper()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            "get_wrapper",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects* GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>());
}
inline void GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237643c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager.ShowEnvironmentType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType)>(&::GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2376444;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            "ShowEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuEnvironmentManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuEnvironmentManager::*)()>(&::GlobalNamespace::MenuEnvironmentManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23765c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MenuEnvironmentManager::__set__data(::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>, 0x18>(this, std::forward<::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>& GlobalNamespace::MenuEnvironmentManager::__get__data()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>, 0x18>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*> const& GlobalNamespace::MenuEnvironmentManager::__get__data() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*,::Array<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentObjects*>*>, 0x18>(this);
}
constexpr void GlobalNamespace::MenuEnvironmentManager::__set__prevMenuEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x20>(this, std::forward<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>(value));
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType& GlobalNamespace::MenuEnvironmentManager::__get__prevMenuEnvironmentType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x20>(this);
}
constexpr ::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType const& GlobalNamespace::MenuEnvironmentManager::__get__prevMenuEnvironmentType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType, 0x20>(this);
}
inline void GlobalNamespace::MenuEnvironmentManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MenuEnvironmentManager::ShowEnvironmentType(::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType  menuEnvironmentType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            "ShowEnvironmentType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MenuEnvironmentManager__MenuEnvironmentType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, menuEnvironmentType);
}
inline ::GlobalNamespace::MenuEnvironmentManager* GlobalNamespace::MenuEnvironmentManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuEnvironmentManager*>());
}
inline void GlobalNamespace::MenuEnvironmentManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuEnvironmentManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
