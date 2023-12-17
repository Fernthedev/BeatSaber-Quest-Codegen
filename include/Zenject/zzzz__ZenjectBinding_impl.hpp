#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__ZenjectBinding_def.hpp"
#include "Zenject/zzzz__Context_def.hpp"
constexpr void Zenject::__ZenjectBinding__BindTypes::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& Zenject::__ZenjectBinding__BindTypes::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& Zenject::__ZenjectBinding__BindTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Zenject::__ZenjectBinding__BindTypes::__ZenjectBinding__BindTypes(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::Zenject::__ZenjectBinding__BindTypes  Zenject::__ZenjectBinding__BindTypes::Self{static_cast<int32_t>(0x0)};
constexpr ::Zenject::__ZenjectBinding__BindTypes  Zenject::__ZenjectBinding__BindTypes::AllInterfaces{static_cast<int32_t>(0x1)};
constexpr ::Zenject::__ZenjectBinding__BindTypes  Zenject::__ZenjectBinding__BindTypes::AllInterfacesAndSelf{static_cast<int32_t>(0x2)};
constexpr ::Zenject::__ZenjectBinding__BindTypes  Zenject::__ZenjectBinding__BindTypes::BaseType{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_UseSceneContext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_UseSceneContext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_UseSceneContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_IfNotBound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_IfNotBound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Context* (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.set_Context
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectBinding::*)(::Zenject::Context*)>(&::Zenject::ZenjectBinding::set_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Context*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Components
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*> (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Components)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Components",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_Identifier
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_Identifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.get_BindType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::__ZenjectBinding__BindTypes (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::get_BindType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ef5c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_BindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ef5c50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectBinding::*)()>(&::Zenject::ZenjectBinding::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2ef5c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectBinding.__zenCreateInjectTypeInfo
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenjectBinding::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2ef5cac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Zenject::ZenjectBinding::__set__components(::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>, 0x18>(this, std::forward<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>& Zenject::ZenjectBinding::__get__components()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>, 0x18>(this);
}
constexpr ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*> const& Zenject::ZenjectBinding::__get__components() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>, 0x18>(this);
}
constexpr void Zenject::ZenjectBinding::__set__identifier(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Zenject::ZenjectBinding::__get__identifier()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Zenject::ZenjectBinding::__get__identifier() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void Zenject::ZenjectBinding::__set__useSceneContext(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::ZenjectBinding::__get__useSceneContext()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& Zenject::ZenjectBinding::__get__useSceneContext() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void Zenject::ZenjectBinding::__set__ifNotBound(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& Zenject::ZenjectBinding::__get__ifNotBound()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& Zenject::ZenjectBinding::__get__ifNotBound() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void Zenject::ZenjectBinding::__set__context(::Zenject::Context*  value)  {
::cordl_internals::setInstanceField<::Zenject::Context*, 0x30>(this, std::forward<::Zenject::Context*>(value));
}
constexpr ::Zenject::Context* Zenject::ZenjectBinding::__get__context()  {
return ::cordl_internals::getInstanceField<::Zenject::Context*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::Context*> Zenject::ZenjectBinding::__get__context() const {
return ::cordl_internals::getInstanceField<::Zenject::Context*, 0x30>(this);
}
constexpr void Zenject::ZenjectBinding::__set__bindType(::Zenject::__ZenjectBinding__BindTypes  value)  {
::cordl_internals::setInstanceField<::Zenject::__ZenjectBinding__BindTypes, 0x38>(this, std::forward<::Zenject::__ZenjectBinding__BindTypes>(value));
}
constexpr ::Zenject::__ZenjectBinding__BindTypes& Zenject::ZenjectBinding::__get__bindType()  {
return ::cordl_internals::getInstanceField<::Zenject::__ZenjectBinding__BindTypes, 0x38>(this);
}
constexpr ::Zenject::__ZenjectBinding__BindTypes const& Zenject::ZenjectBinding::__get__bindType() const {
return ::cordl_internals::getInstanceField<::Zenject::__ZenjectBinding__BindTypes, 0x38>(this);
}
inline bool Zenject::ZenjectBinding::get_UseSceneContext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_UseSceneContext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Zenject::ZenjectBinding::get_IfNotBound()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_IfNotBound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::Zenject::Context* Zenject::ZenjectBinding::get_Context()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::Context*, false>(*this, ___internal_method);
}
inline void Zenject::ZenjectBinding::set_Context(::Zenject::Context*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "set_Context",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::Context*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*> Zenject::ZenjectBinding::get_Components()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Components",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Component*,::Array<::UnityEngine::Component*>*>, false>(*this, ___internal_method);
}
inline ::StringW Zenject::ZenjectBinding::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_Identifier",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::Zenject::__ZenjectBinding__BindTypes Zenject::ZenjectBinding::get_BindType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "get_BindType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::__ZenjectBinding__BindTypes, false>(*this, ___internal_method);
}
inline void Zenject::ZenjectBinding::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::ZenjectBinding* Zenject::ZenjectBinding::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ZenjectBinding*>());
}
inline void Zenject::ZenjectBinding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenjectBinding::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectBinding*>::get(),
                            "__zenCreateInjectTypeInfo",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
